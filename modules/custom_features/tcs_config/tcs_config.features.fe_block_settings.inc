<?php
/**
 * @file
 * tcs_config.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function tcs_config_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['user-login'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
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
