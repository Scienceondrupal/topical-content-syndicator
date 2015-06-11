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

  $export['boxes-tcs_content_side_trigger'] = array(
    'cache' => -2,
    'custom' => 0,
    'delta' => 'tcs_content_side_trigger',
    'module' => 'boxes',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bootstrap_tcs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap_tcs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views--exp-list_feed_items-homepage'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '-exp-list_feed_items-homepage',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'administrator' => 3,
      'manager' => 4,
    ),
    'themes' => array(
      'bootstrap_tcs' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bootstrap_tcs',
        'weight' => -12,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-list_feed_items-feed_items'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'list_feed_items-feed_items',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bootstrap_tcs' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap_tcs',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
