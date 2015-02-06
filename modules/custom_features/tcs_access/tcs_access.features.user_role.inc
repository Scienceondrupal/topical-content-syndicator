<?php
/**
 * @file
 * tcs_access.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function tcs_access_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: manager.
  $roles['manager'] = array(
    'name' => 'manager',
    'weight' => 3,
  );

  // Exported role: member.
  $roles['member'] = array(
    'name' => 'member',
    'weight' => 4,
  );

  // Exported role: persona.
  $roles['persona'] = array(
    'name' => 'persona',
    'weight' => 5,
  );

  return $roles;
}
