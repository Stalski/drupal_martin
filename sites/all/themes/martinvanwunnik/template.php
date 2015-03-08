<?php
/**
 * @file
 * page.vars.php
 */


/**
 * Implements hook_preprocess_views_view_grid().
 */
function martinvanwunnik_preprocess_views_view_grid(&$vars) {
  
  if (!empty($vars['view']->style_options)) {
    $number_of_columns = $vars['view']->style_options['columns'];
    if ($number_of_columns == 4) {
      $column_class = "col-xs-6 col-md-3 col-sm-6";
    }
    elseif ($number_of_columns == 3) {
      $column_class = "col-xs-12 col-md-4 col-sm-12";
    }
    elseif ($number_of_columns == 6) {
      $column_class = "col-xs-6 col-md-2 col-sm-6";
    }
    elseif ($number_of_columns == 2) {
      $column_class = "col-md-6";
    }
    elseif ($number_of_columns == 1) {
      $column_class = "col-md-12";
    }
  }
  else {
    $column_class = "col-md-12";
  }

  if (isset($column_class)) {
    foreach ($vars['column_classes'] as $delta => $rows) {

      // Change the column classes to bootstraps grid columns.
      foreach ($rows as $column_delta => $columns) {
        $vars['column_classes'][$delta][$column_delta] = $column_class;
      }
      // Change the row classes to bootstrap grid rows.
      $vars['row_classes'][$delta] = "row";

    }
  }

  // Bootstrap does not need a wrapper for the rows.
  $vars['classes_array'] = array();
  $vars['class'] = "";

}

/**
 * Overrides theme_status_messages().
 */
function martinvanwunnik_status_messages($variables) {
  $display = $variables['display'];
  $output = '';

  $status_heading = array(
    'status' => t('Status message'),
    'error' => t('Error message'),
    'warning' => t('Warning message'),
    'info' => t('Informative message'),
    'commerce-add-to-cart-confirmation' => t('Confirmation messages'),
  );

  // Map Drupal message types to their corresponding Bootstrap classes.
  // @see http://twitter.github.com/bootstrap/components.html#alerts
  $status_class = array(
    'status' => 'success',
    'error' => 'danger',
    'warning' => 'warning',
    // Not supported, but in theory a module could send any type of message.
    // @see drupal_set_message()
    // @see theme_status_messages()
    'info' => 'info',

    // Custom messages.
    'commerce-add-to-cart-confirmation' => 'commerce-add-to-cart-confirmation',
  );

  foreach (drupal_get_messages($display) as $type => $messages) {

    if ($type == 'commerce-add-to-cart-confirmation') {
      $class = "alert messages commerce-add-to-cart-confirmation";
    }
    else {
      $class = (isset($status_class[$type])) ? ' alert-' . $status_class[$type] : '';
    }
    $output .= "<div class=\"alert alert-block$class\">\n";
    $output .= "  <a class=\"close\" data-dismiss=\"alert\" href=\"#\">&times;</a>\n";

    if (!empty($status_heading[$type])) {
      $output .= '<h4 class="element-invisible">' . $status_heading[$type] . "</h4>\n";
    }

    if (count($messages) > 1) {
      $output .= " <ul>\n";
      foreach ($messages as $message) {
        $output .= '  <li>' . $message . "</li>\n";
      }
      $output .= " </ul>\n";
    }
    else {
      $output .= $messages[0];
    }

    $output .= "</div>\n";
  }
  return $output;
}

/**
 * Implements hook_preprocess_page().
 *
 * @see page.tpl.php
 */
function martinvanwunnik_preprocess_page(&$variables) {

  $page = page_manager_get_current_page();
  if ($page) {
    /*if (panels_get_current_page_display()) {
       $variables['page']['use_panels'] = TRUE;
    }*/
    // Hide the page title (not the meta title).
    $hide_page_title = FALSE;

    if ($variables['is_front']) {
      $hide_page_title = TRUE;
    }

    if ($page['name'] == 'term_view') {
      $hide_page_title = TRUE;
    }

    // Hide the normal H1.
    if ($hide_page_title) {
      /*$variables['title_prefix'] = '<div class="element-invisible">';
      $variables['title_suffix'] = '</div>';*/
      $variables['title'] = '';
    }

  }
  
  // classes array adjustments.
  if ($object = menu_get_object('node')) {
    if ($object->type == 'page') {
      $icon_items = field_get_items('node', $object, 'field_icon');
      $variables['title_icon'] = theme('image_style', array('style_name' => 'title_icon', 'path' => $icon_items[0]['uri']));
    }
  }

  // Primary nav.
  global $language;
  $menu_name = $language->language == 'fr' ? 'menu-main-menu-fr' : ($language->language == 'nl' ? 'menu-main-menu-nl' : 'main-menu');
  $data = menu_tree_all_data($menu_name);
  $tree = menu_tree_output($data);
  $tree['#theme_wrappers'] = array('menu_tree__primary');
  $variables['primary_nav'] = drupal_render($tree);
  
  $contact = array('#theme' => 'martin_contact_footer');
  $contact['#tel'] = variable_get('site_tel');
  $email = variable_get('site_email');
  if (variable_get('site_email_mailto')) {
    $email = l($email, 'mailto:' . $email);
  }
  $contact['#email'] = $email;
  $contact['#linkedin'] = array('url' => variable_get('site_linkedin_url'), 'title' => variable_get('site_linkedin_text'));
  $contact['#skype_id'] = variable_get('site_skype_id');
  $variables['footer_contact'] = drupal_render($contact);
    
  $blog_view = views_embed_view('blog', 'block_1');
  $variables['footer_blog'] = $blog_view;
  
  $links_view = views_embed_view('interesting_links', 'block');
  $variables['footer_links'] = $links_view;

  // Slogan (ow yeah, we use it!
  if (!drupal_is_front_page()) {
    $variables['site_slogan'] = NULL;
  }

  // Header carousel.
  $variables['header_carousel'] = '';
  module_load_include('inc', 'featured_page', 'includes/blocks');
  if (function_exists('_feature_page_header_block') && drupal_is_front_page()) {
    $block = _feature_page_header_block();
    if (!empty($block['content'])) {
      $variables['header_carousel'] = $block['content'];
    }
  }
  
  // language switcher.
  $path = drupal_is_front_page() ? '<front>' : $_GET['q'];
  $languages = language_list('enabled');
  $links = array();
  foreach ($languages[1] as $lan) {
    $links[$lan->language] = array(
      'href'       => $path,
      'title'      => $lan->native,
      'language'   => $lan,
      'attributes' => array(
        'id'    => $lan->language,
        'lang'  => $lan->language,
        'title' => t('Watch this page in @language.', array('@language' => $lan->native), array('langcode'=>$lan->language)),
      ),
    );
  }
  drupal_alter('translation_link', $links, $path);
  unset($links[i18n_language()->language]);
  $attr = array('class'=>'lang-switcher-comp');
  $variables['language_switcher'] = theme_links(array('links' => $links, 'attributes' => $attr, 'heading' => array()));

}

/**
 * Implements hook_process_page().
 *
 * @see page.tpl.php
 */
function martinvanwunnik_process_page(&$variables) {
}

/**
 * Implements hook_process_html().
 *
 * @see html.tpl.php
 */
function martinvanwunnik_preprocess_html(&$variables) {
  // classes array adjustments.
}

/**
 * Overrides theme_breadcrumb().
 *
 * Print breadcrumbs as an ordered list.
 */
function martinvanwunnik_breadcrumb($variables) {
  $output = '';
  $breadcrumb = $variables['breadcrumb'];

  // Determine if we are to display the breadcrumb.
  $bootstrap_breadcrumb = theme_get_setting('bootstrap_breadcrumb');
  if (($bootstrap_breadcrumb == 1 || ($bootstrap_breadcrumb == 2 && arg(0) == 'admin')) && !empty($breadcrumb)) {

    $output = t('You are here:') . ' ' . theme('item_list', array(
      'attributes' => array(
        'class' => array('breadcrumb'),
      ),
      'items' => $breadcrumb,
      'type' => 'ol',
    ));
  }
  return $output;
}


/**
 * Overrides theme_menu_link().
 * @see bootstrap_menu_link();
 */
function martinvanwunnik_menu_link(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    // Prevent dropdown functions from being added to management menu so it
    // does not affect the navbar module.
    if (($element['#original_link']['menu_name'] == 'management') && (module_exists('navbar'))) {
      $sub_menu = drupal_render($element['#below']);
    }
    elseif (($element['#original_link']['menu_name'] == 'main-menu') && !empty($element['#doormat'])) {
      $sub_menu = drupal_render($element['#below']);
    }
    elseif ((!empty($element['#original_link']['depth'])) && ($element['#original_link']['depth'] == 1)) {

      // Add our own wrapper.
      unset($element['#below']['#theme_wrappers']);
      $sub_menu = '<ul class="dropdown-menu">' . drupal_render($element['#below']) . '</ul>';
      // Generate as standard dropdown.
      $element['#title'] .= ' <span class="caret"></span>';
      $element['#attributes']['class'][] = 'dropdown';
      $element['#localized_options']['html'] = TRUE;

      // Set dropdown trigger element to # to prevent inadvertant page loading
      // when a submenu link is clicked.
      $element['#localized_options']['attributes']['data-target'] = '#';
      $element['#localized_options']['attributes']['class'][] = 'dropdown-toggle';
      $element['#localized_options']['attributes']['data-toggle'] = 'dropdown';
    }
  }
  // On primary navigation menu, class 'active' is not set on active menu item.
  // @see https://drupal.org/node/1896674
  if (($element['#href'] == $_GET['q'] || ($element['#href'] == '<front>' && drupal_is_front_page())) && (empty($element['#localized_options']['language']))) {
    $element['#attributes']['class'][] = 'active';
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

/**
 * Clean up the panel pane variables for the template.
 */
function martinvanwunnik_preprocess_panels_pane(&$variables) {

  $variables['override_title_element'] = 'h2';
  if (!empty($variables['pane']->configuration['override_title_element'])) {
    $variables['override_title_element'] = $variables['pane']->configuration['override_title_element'];
    // No extra classes for H1 titles.
    if ($variables['override_title_element'] == 'h1') {
      $variables['title_attributes_array']['class'][] = 'block-title';
    }
  }
}
