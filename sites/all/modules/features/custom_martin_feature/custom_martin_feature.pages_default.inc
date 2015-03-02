<?php
/**
 * @file
 * custom_martin_feature.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function custom_martin_feature_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = '';
  $page->path = 'home';
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
  $handler->name = 'page_home__panel_context_74a164f3-117a-47ac-8b49-eca81a19f6e4';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Home Panel',
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
  $display->layout = 'bootstrap_home';
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
      'row_content_4a' => NULL,
      'row_content_4b' => NULL,
      'row_content_7' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '413cf62a-873b-4247-a7f5-2608842efe64';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b45f6920-fbfe-422e-ac23-0b6993fcc4ee';
    $pane->panel = 'row_content_1';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'nl' => 'nl',
              'default' => 0,
              'en' => 0,
              'fr' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Internationaal project management',
      'title' => 'Internationaal project management',
      'body' => '<p>Arsima Projects geeft training en workshops over IT en finance, vooral aan aan KMO\'s en multinationals. Zaakvoerder Martin van Wunnik is ook actief als financieel consultant voor startende ondernemingen en als gastspreker op evenementen in binnen- en buitenland.</p>
',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b45f6920-fbfe-422e-ac23-0b6993fcc4ee';
    $display->content['new-b45f6920-fbfe-422e-ac23-0b6993fcc4ee'] = $pane;
    $display->panels['row_content_1'][0] = 'new-b45f6920-fbfe-422e-ac23-0b6993fcc4ee';
    $pane = new stdClass();
    $pane->pid = 'new-cfa1a50f-fc99-4b37-bb54-0e5117ec031f';
    $pane->panel = 'row_content_1';
    $pane->type = 'views';
    $pane->subtype = 'nodequeue_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'cfa1a50f-fc99-4b37-bb54-0e5117ec031f';
    $display->content['new-cfa1a50f-fc99-4b37-bb54-0e5117ec031f'] = $pane;
    $display->panels['row_content_1'][1] = 'new-cfa1a50f-fc99-4b37-bb54-0e5117ec031f';
    $pane = new stdClass();
    $pane->pid = 'new-f3e2843b-3606-4244-bf93-c7058872368e';
    $pane->panel = 'row_content_2';
    $pane->type = 'views';
    $pane->subtype = 'nodequeue_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
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
    $pane->uuid = 'f3e2843b-3606-4244-bf93-c7058872368e';
    $display->content['new-f3e2843b-3606-4244-bf93-c7058872368e'] = $pane;
    $display->panels['row_content_2'][0] = 'new-f3e2843b-3606-4244-bf93-c7058872368e';
    $pane = new stdClass();
    $pane->pid = 'new-69fd571c-e86b-4803-8b06-dddb05eb4e8f';
    $pane->panel = 'row_content_3';
    $pane->type = 'contact_row';
    $pane->subtype = 'contact_row';
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
    $pane->uuid = '69fd571c-e86b-4803-8b06-dddb05eb4e8f';
    $display->content['new-69fd571c-e86b-4803-8b06-dddb05eb4e8f'] = $pane;
    $display->panels['row_content_3'][0] = 'new-69fd571c-e86b-4803-8b06-dddb05eb4e8f';
    $pane = new stdClass();
    $pane->pid = 'new-ee8a2438-eb98-4762-a7fd-c6716886ac6e';
    $pane->panel = 'row_content_4a';
    $pane->type = 'views';
    $pane->subtype = 'blog';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '3',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
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
    $pane->uuid = 'ee8a2438-eb98-4762-a7fd-c6716886ac6e';
    $display->content['new-ee8a2438-eb98-4762-a7fd-c6716886ac6e'] = $pane;
    $display->panels['row_content_4a'][0] = 'new-ee8a2438-eb98-4762-a7fd-c6716886ac6e';
    $pane = new stdClass();
    $pane->pid = 'new-687c94da-c4a1-4006-93f2-8f9f71801ce3';
    $pane->panel = 'row_content_4b';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'nl' => 'nl',
              'default' => 0,
              'en' => 0,
              'fr' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Infosessies (NL)',
      'title' => 'Infosessies',
      'body' => '<p>Tellus ac cursus commodo, tortor mauris centum. Duis mollis, est non commod. Uptaspernam, vitatium issitibus sedicii ssi-magnient labore doloreius edicii ssimagnient labore doloreius bus sedicir?</p>
',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '687c94da-c4a1-4006-93f2-8f9f71801ce3';
    $display->content['new-687c94da-c4a1-4006-93f2-8f9f71801ce3'] = $pane;
    $display->panels['row_content_4b'][0] = 'new-687c94da-c4a1-4006-93f2-8f9f71801ce3';
    $pane = new stdClass();
    $pane->pid = 'new-70e83123-3ae6-497a-ae6d-9a26b9c5ad3a';
    $pane->panel = 'row_content_5';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '70e83123-3ae6-497a-ae6d-9a26b9c5ad3a';
    $display->content['new-70e83123-3ae6-497a-ae6d-9a26b9c5ad3a'] = $pane;
    $display->panels['row_content_5'][0] = 'new-70e83123-3ae6-497a-ae6d-9a26b9c5ad3a';
    $pane = new stdClass();
    $pane->pid = 'new-94f0811a-033f-4833-a67c-1a72e34f3779';
    $pane->panel = 'row_content_6';
    $pane->type = 'views';
    $pane->subtype = 'testimonials';
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
    $pane->uuid = '94f0811a-033f-4833-a67c-1a72e34f3779';
    $display->content['new-94f0811a-033f-4833-a67c-1a72e34f3779'] = $pane;
    $display->panels['row_content_6'][0] = 'new-94f0811a-033f-4833-a67c-1a72e34f3779';
    $pane = new stdClass();
    $pane->pid = 'new-372a753a-689a-4d78-80dd-5027a9b9b98e';
    $pane->panel = 'row_content_7';
    $pane->type = 'views';
    $pane->subtype = 'projects';
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
      'display' => 'block_1',
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
    $pane->uuid = '372a753a-689a-4d78-80dd-5027a9b9b98e';
    $display->content['new-372a753a-689a-4d78-80dd-5027a9b9b98e'] = $pane;
    $display->panels['row_content_7'][0] = 'new-372a753a-689a-4d78-80dd-5027a9b9b98e';
    $pane = new stdClass();
    $pane->pid = 'new-f0b9b491-c0c6-432a-912c-ff27406eb75e';
    $pane->panel = 'row_header';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'site_language',
          'settings' => array(
            'language' => array(
              'nl' => 'nl',
              'default' => 0,
              'en' => 0,
              'fr' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'nid' => '19',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'featured',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'teaser-about',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f0b9b491-c0c6-432a-912c-ff27406eb75e';
    $display->content['new-f0b9b491-c0c6-432a-912c-ff27406eb75e'] = $pane;
    $display->panels['row_header'][0] = 'new-f0b9b491-c0c6-432a-912c-ff27406eb75e';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'products';
  $page->task = 'page';
  $page->admin_title = 'Products';
  $page->admin_description = '';
  $page->path = 'products';
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
  $handler->name = 'page_products__panel_context_b687cf92-e641-4943-bcac-e747380b0a36';
  $handler->task = 'page';
  $handler->subtask = 'products';
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
  $display->title = 'Products';
  $display->uuid = '2504394f-b42b-4c87-aacb-b52a15c3aa88';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b822c84e-6739-4301-a523-a77ab2320297';
    $pane->panel = 'row_content_1';
    $pane->type = 'views';
    $pane->subtype = 'products';
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
    $pane->uuid = 'b822c84e-6739-4301-a523-a77ab2320297';
    $display->content['new-b822c84e-6739-4301-a523-a77ab2320297'] = $pane;
    $display->panels['row_content_1'][0] = 'new-b822c84e-6739-4301-a523-a77ab2320297';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['products'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'projects';
  $page->task = 'page';
  $page->admin_title = 'Projects';
  $page->admin_description = '';
  $page->path = 'projects';
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
  $handler->name = 'page_projects__panel_context_0ca5bdf3-39bb-4ded-8bc5-27ac356d372c';
  $handler->task = 'page';
  $handler->subtask = 'projects';
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
  $display->title = 'Projects';
  $display->uuid = '2504394f-b42b-4c87-aacb-b52a15c3aa88';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8859d5d3-01c1-4b1d-94a5-f29a90991ddf';
    $pane->panel = 'row_content_1';
    $pane->type = 'views_panes';
    $pane->subtype = 'projects-projects_all';
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
    $pane->uuid = '8859d5d3-01c1-4b1d-94a5-f29a90991ddf';
    $display->content['new-8859d5d3-01c1-4b1d-94a5-f29a90991ddf'] = $pane;
    $display->panels['row_content_1'][0] = 'new-8859d5d3-01c1-4b1d-94a5-f29a90991ddf';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-8859d5d3-01c1-4b1d-94a5-f29a90991ddf';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['projects'] = $page;

  return $pages;

}
