<?php
/**
 * @file
 * tcs_import.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function tcs_import_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_feed_source';
  $strongarm->value = 'edit-menu';
  $export['additional_settings__active_tab_feed_source'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_short';
  $strongarm->value = 'm/d/Y';
  $export['date_format_short'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_feed_source';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_feed_source'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_feed_source';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_feed_source'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_feed_source';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_feed_source'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feeds_reschedule';
  $strongarm->value = array(
    'feed_source_feed_importer' => 'feed_source_feed_importer',
  );
  $export['feeds_reschedule'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__feed_source';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '2',
        ),
        'feeds' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__feed_source'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_feed_source';
  $strongarm->value = array();
  $export['menu_options_feed_source'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_feed_source';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_feed_source'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_feed_source';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_feed_source'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_feed_source';
  $strongarm->value = '2';
  $export['node_preview_feed_source'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_feed_source';
  $strongarm->value = 0;
  $export['node_submitted_feed_source'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_feed_source_pattern';
  $strongarm->value = 'source/[node:title]';
  $export['pathauto_node_feed_source_pattern'] = $strongarm;

  return $export;
}
