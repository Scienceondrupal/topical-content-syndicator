<?php
/**
 * @file
 * tcs_import.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tcs_import_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'administer feeds_tamper'.
  $permissions['administer feeds_tamper'] = array(
    'name' => 'administer feeds_tamper',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'clear feed_source_feed_importer feeds'.
  $permissions['clear feed_source_feed_importer feeds'] = array(
    'name' => 'clear feed_source_feed_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'create feed_source content'.
  $permissions['create feed_source content'] = array(
    'name' => 'create feed_source content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any feed_source content'.
  $permissions['delete any feed_source content'] = array(
    'name' => 'delete any feed_source content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own feed_source content'.
  $permissions['delete own feed_source content'] = array(
    'name' => 'delete own feed_source content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any feed_source content'.
  $permissions['edit any feed_source content'] = array(
    'name' => 'edit any feed_source content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own feed_source content'.
  $permissions['edit own feed_source content'] = array(
    'name' => 'edit own feed_source content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'import feed_source_feed_importer feeds'.
  $permissions['import feed_source_feed_importer feeds'] = array(
    'name' => 'import feed_source_feed_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'tamper feed_source_feed_importer'.
  $permissions['tamper feed_source_feed_importer'] = array(
    'name' => 'tamper feed_source_feed_importer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'unlock feed_source_feed_importer feeds'.
  $permissions['unlock feed_source_feed_importer feeds'] = array(
    'name' => 'unlock feed_source_feed_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  return $permissions;
}
