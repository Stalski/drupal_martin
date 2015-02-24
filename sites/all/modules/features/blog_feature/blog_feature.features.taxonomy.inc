<?php
/**
 * @file
 * blog_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function blog_feature_taxonomy_default_vocabularies() {
  return array(
    'blog_categories' => array(
      'name' => 'Blog categories',
      'machine_name' => 'blog_categories',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
