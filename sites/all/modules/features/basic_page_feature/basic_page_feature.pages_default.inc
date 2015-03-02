<?php
/**
 * @file
 * basic_page_feature.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function basic_page_feature_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'services';
  $page->task = 'page';
  $page->admin_title = 'Services';
  $page->admin_description = '';
  $page->path = 'services';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_services__panel_context_e5af25f3-bc84-48b4-b73f-88ff9d3f1825';
  $handler->task = 'page';
  $handler->subtask = 'services';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Paneel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_page';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'row_header' => NULL,
      'row_content_1' => NULL,
      'row_content_2' => NULL,
      'row_content_3' => NULL,
      'row_content_4' => NULL,
      'row_content_5' => NULL,
      'row_content_6' => NULL,
      'row_footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Services';
  $display->uuid = '2504394f-b42b-4c87-aacb-b52a15c3aa88';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-04acd54c-3767-4628-b10f-7e7d9f6d235f';
    $pane->panel = 'row_content_1';
    $pane->type = 'views';
    $pane->subtype = 'services';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '04acd54c-3767-4628-b10f-7e7d9f6d235f';
    $display->content['new-04acd54c-3767-4628-b10f-7e7d9f6d235f'] = $pane;
    $display->panels['row_content_1'][0] = 'new-04acd54c-3767-4628-b10f-7e7d9f6d235f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['services'] = $page;

  return $pages;

}
