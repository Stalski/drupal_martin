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
      $column_class = "col-xs-6 col-md-3";
    }
    elseif ($number_of_columns == 3) {
      $column_class = "col-md-4";
    }
    elseif ($number_of_columns == 6) {
      $column_class = "col-md-2";
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


  // Primary nav.
  $data = menu_tree_all_data('main-menu');
  $tree = menu_tree_output($data);
  $tree['#theme_wrappers'] = array('menu_tree__primary');
  $variables['primary_nav'] = drupal_render($tree);

  //dsm($footer_tree, 'footer tree');
  /*$footer_tree = $tree;
  foreach ($footer_tree as $mlid => $menu_link_data) {
    if (is_numeric($mlid)) {
      $footer_tree[$mlid]['#doormat'] = TRUE;
    }
  }
  $footer_tree['#theme_wrappers'] = array('menu_tree__primary');
  $variables['footer_nav'] = drupal_render($footer_tree);
   */

  // Header carousel.
  $variables['header_carousel'] = '';
  module_load_include('inc', 'featured_page', 'includes/blocks');
  if (function_exists('_feature_page_header_block') && drupal_is_front_page()) {
    $block = _feature_page_header_block();
    if (!empty($block['content'])) {
      $variables['header_carousel'] = $block['content'];
    }
  }

}

/**
 * Implements hook_process_page().
 *
 * @see page.tpl.php
 */
function martinvanwunnik_process_page(&$variables) {
  // classes array adjustments.
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
