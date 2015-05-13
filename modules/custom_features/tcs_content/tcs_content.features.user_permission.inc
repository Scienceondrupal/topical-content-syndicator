<?php
/**
 * @file
 * tcs_content.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tcs_content_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create feed_item content'.
  $permissions['create feed_item content'] = array(
    'name' => 'create feed_item content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any feed_item content'.
  $permissions['delete any feed_item content'] = array(
    'name' => 'delete any feed_item content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own feed_item content'.
  $permissions['delete own feed_item content'] = array(
    'name' => 'delete own feed_item content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any feed_item content'.
  $permissions['edit any feed_item content'] = array(
    'name' => 'edit any feed_item content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own feed_item content'.
  $permissions['edit own feed_item content'] = array(
    'name' => 'edit own feed_item content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
