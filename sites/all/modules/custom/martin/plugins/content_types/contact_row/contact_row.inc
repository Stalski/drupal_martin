<?php

/**
 * @file
 *
 * CTools content type to render a contact row.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => TRUE,
  //'icon' => 'icon_waeva.png',
  'title' => t('Contact content in a row'),
  'no title override' => TRUE,
  'description' => t('Contact info in a row'),
  'category' => t('Custom'),
  'all contexts' => TRUE,
  'defaults' => array(
    //'view_mode' => 'full',
  ),
  'render callback'  => 'martin_contact_row_content_type_render',
);


/**
 * Callback to render our content type.
 */
function martin_contact_row_content_type_render($subtype, $conf, $panel_args = array(), $context = array()) {
  $block = new stdClass();
  $block->title = '';
  
  $tel = variable_get('site_tel');
  $email = variable_get('site_email');
  $linkedin_text = variable_get('site_linkedin_text');
  $linkedin_url = variable_get('site_linkedin_url');
  if (!empty($tel) && !empty($email)) {
    $content = array(
      '#theme' => 'martin_contact_row',
    );
    
    $content['#tel'] = $tel;
    $content['#email'] = $email;
    $content['#linkedin'] = array('url' => $linkedin_url, 'title' => $linkedin_text);
    $block->content = drupal_render($content);
    return $block;
  }
}
/**
 * Callback to provide the administrative title of the contact_row.
 */
function martin_contact_row_content_type_admin_title($subtype, $conf) {
 $output = t('Contact row');
  return $output;
}

/**
 * Callback to provide contact_row summary.
 */
function martin_contact_row_content_type_admin_info($subtype, $conf) {
  return t('Contact row'); //martin_contact_row_content_type_render($subtype, $conf);
}
