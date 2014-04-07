<?php
/**
 * @file
 * avida_common.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function avida_common_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 3,
  );

  // Exported role: staff.
  $roles['staff'] = array(
    'name' => 'staff',
    'weight' => 4,
  );

  return $roles;
}
