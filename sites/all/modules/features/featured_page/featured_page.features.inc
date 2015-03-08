<?php
/**
 * @file
 * featured_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function featured_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function featured_page_image_default_styles() {
  $styles = array();

  // Exported image style: header_carousel.
  $styles['header_carousel'] = array(
    'name' => 'header_carousel',
    'label' => 'header_carousel',
    'effects' => array(
      1 => array(
        'label' => 'Bijsnijden',
        'help' => 'Door bij te snijden worden delen van een afbeelding verwijderd zodat deze binnen de opgegeven maten past.',
        'effect callback' => 'image_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => 2500,
          'height' => 987,
          'anchor' => 'center-center',
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function featured_page_node_info() {
  $items = array(
    'featured_page' => array(
      'name' => t('Featured page'),
      'base' => 'node_content',
      'description' => t('Create a featured page when you want to create a page with the ability to make it available in the header slideshow. This way you can create hot topics for a certain period of time.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
