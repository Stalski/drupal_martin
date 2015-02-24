<?php
/**
 * @file
 * blog_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function blog_feature_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|blog_post|teaser';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog_post';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta info',
    'weight' => '2',
    'children' => array(
      0 => 'author',
      1 => 'post_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Meta info',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_meta|node|blog_post|teaser'] = $field_group;

  return $export;
}
