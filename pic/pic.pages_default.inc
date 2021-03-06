<?php

/**
 * @file
 * This file provides default pages to demonstrate the behavior of pages in
 * code.
 *
 * See ctools Advanced Help, ctools/ctools_plugin_example.
 */


/**
 * Implements hook_default_page_manager_pages().
 *
 * For details see above description.
 */
function pic_default_page_manager_pages() {
  $pages = array();
  $path = drupal_get_path('module', 'pic') . '/pages';
  $files = drupal_system_listing('/\.inc$/', $path, 'name', 0);
  dpm($path);
  dpm($files);
  foreach ($files as $file) {
    include_once $file->uri;
    $pages[$page->name] = $page;
  }
  return $pages;
}


/**
 * Implements hook_default_page_manager_pages().
 *
 * To pick up this file, the module needs to implement
 * hook_ctools_plugin_api() - See pic_ctools_plugin_api() in
 * pic.module.
 *
 * Note the naming of the file: <modulename>.pages_default.inc
 * With this naming, no additional code needs to be provided. CTools will just
 * find the file.
 * The name of the hook is <modulename>_default_page_manager_pages().
 *
 * Version 1 - page definitions within this file.
 * To activate remove _DISABLED from the function name.
 */
function pic_default_page_manager_pages_DISABLED() {
  cto_trace_funct();
  $pages = array();
  $pages['hello'] = pic_pages_hello_page();

  return $pages;
}


/**
 * A panel page (generated by UI and exported).
 */
function pic_pages_hello_page() {
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

  return $page;
}


/**
 * Implements hook_default_panels_mini().
 *
 * Mini panels in code example. Hooks of ctools submodules are not documented.
 * See ctools_export_load_object() and _ctools_export_get_defaults() for
 * details.
 */
function pic_default_panels_mini() {
  cto_trace_funct();
}
