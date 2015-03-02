<?php
/**
 * @file
 * custom_martin_feature.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function custom_martin_feature_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-main-menu-fr.
  $menus['menu-main-menu-fr'] = array(
    'menu_name' => 'menu-main-menu-fr',
    'title' => 'Main menu FR',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-main-menu-nl.
  $menus['menu-main-menu-nl'] = array(
    'menu_name' => 'menu-main-menu-nl',
    'title' => 'Main menu NL',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main menu');
  t('Main menu FR');
  t('Main menu NL');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');


  return $menus;
}
