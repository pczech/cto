<?php

/**
 * @file
 * Contains definition of ctools page 'hello'.
 */

$page = new stdClass();
$page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
$page->api_version = 1;
$page->name = 'page_in_code';
$page->task = 'page';
$page->admin_title = 'Page in code';
$page->admin_description = '';
$page->path = 'pic';
$page->access = array();
$page->menu = array(
  'type' => 'normal',
  'title' => 'PIC',
  'name' => 'main-menu',
  'weight' => '0',
  'parent' => array(
    'type' => 'none',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
  ),
);
$page->arguments = array();
$page->conf = array(
  'admin_paths' => FALSE,
);
$page->default_handlers = array();
$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'page_page_in_code_panel_context';
$handler->task = 'page';
$handler->subtask = 'page_in_code';
$handler->handler = 'panel_context';
$handler->weight = 0;
$handler->conf = array(
  'title' => 'Panel',
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
$display->layout = 'onecol';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'middle' => NULL,
  ),
);
$display->cache = array();
$display->title = '';
$display->uuid = '61079c7c-6ae4-464c-bfb5-0313bbd9f9db';
$display->content = array();
$display->panels = array();
$pane = new stdClass();
$pane->pid = 'new-259d4b2a-987f-4644-b713-ffe6669821b1';
$pane->panel = 'middle';
$pane->type = 'custom';
$pane->subtype = 'custom';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'admin_title' => '',
  'title' => '',
  'body' => 'Hello!',
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
$pane->uuid = '259d4b2a-987f-4644-b713-ffe6669821b1';
$display->content['new-259d4b2a-987f-4644-b713-ffe6669821b1'] = $pane;
$display->panels['middle'][0] = 'new-259d4b2a-987f-4644-b713-ffe6669821b1';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = 'new-259d4b2a-987f-4644-b713-ffe6669821b1';
$handler->conf['display'] = $display;
$page->default_handlers[$handler->name] = $handler;
