<?php
/**
 * @file
 * pushtape_discography.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function pushtape_discography_user_default_roles() {
  $roles = array();

  // Exported role: artist.
  $roles['artist'] = array(
    'name' => 'artist',
    'weight' => '3',
  );

  return $roles;
}
