<?php
/**
 * @file
 * tcs_content.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function tcs_content_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-list_feed_items-feed_items'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'list_feed_items-feed_items',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  return $export;
}
