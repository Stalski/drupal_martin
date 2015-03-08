<?php
/**
 * @file
 * blog_feature.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function blog_feature_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__blog';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Blog',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'blog',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'blog_categories' => 'blog_categories',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap-9-3';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Blog';
  $display->uuid = 'a1d025e2-e437-4697-9f94-fe0aa8f336fd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-aa9e78b4-81f1-4d2c-bf37-7ba6b6b302fc';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'tid' => '%term:tid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'aa9e78b4-81f1-4d2c-bf37-7ba6b6b302fc';
    $display->content['new-aa9e78b4-81f1-4d2c-bf37-7ba6b6b302fc'] = $pane;
    $display->panels['left'][0] = 'new-aa9e78b4-81f1-4d2c-bf37-7ba6b6b302fc';
    $pane = new stdClass();
    $pane->pid = 'new-7769e52d-a578-4354-b902-988fc0249bab';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'blog_categories';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 0,
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
    $pane->uuid = '7769e52d-a578-4354-b902-988fc0249bab';
    $display->content['new-7769e52d-a578-4354-b902-988fc0249bab'] = $pane;
    $display->panels['right'][0] = 'new-7769e52d-a578-4354-b902-988fc0249bab';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-aa9e78b4-81f1-4d2c-bf37-7ba6b6b302fc';
  $handler->conf['display'] = $display;
  $export['term_view__blog'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function blog_feature_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'blog';
  $page->task = 'page';
  $page->admin_title = 'Blog';
  $page->admin_description = '';
  $page->path = 'blog';
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
  $handler->name = 'page_blog__panel_context_1a8ba24b-5d5c-4e1a-88a7-630dab20a669';
  $handler->task = 'page';
  $handler->subtask = 'blog';
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
  $display->layout = 'bootstrap-9-3';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Blog';
  $display->uuid = 'e10a15f8-9804-49e6-a77e-b153820c5a46';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-69e4f806-bb52-4009-881d-78d3eb5f1ca3';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '69e4f806-bb52-4009-881d-78d3eb5f1ca3';
    $display->content['new-69e4f806-bb52-4009-881d-78d3eb5f1ca3'] = $pane;
    $display->panels['left'][0] = 'new-69e4f806-bb52-4009-881d-78d3eb5f1ca3';
    $pane = new stdClass();
    $pane->pid = 'new-2d71466d-b924-46fd-9b39-7d2c37c02380';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'blog_categories';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 0,
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
    $pane->uuid = '2d71466d-b924-46fd-9b39-7d2c37c02380';
    $display->content['new-2d71466d-b924-46fd-9b39-7d2c37c02380'] = $pane;
    $display->panels['right'][0] = 'new-2d71466d-b924-46fd-9b39-7d2c37c02380';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['blog'] = $page;

  return $pages;

}
