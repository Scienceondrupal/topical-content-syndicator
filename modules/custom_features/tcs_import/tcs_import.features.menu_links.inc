<?php
/**
 * @file
 * tcs_import.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function tcs_import_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: user-menu_add:node/add
  $menu_links['user-menu_add:node/add'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add',
    'router_path' => 'node/add',
    'link_title' => 'Add',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_add:node/add',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: user-menu_feed-source:node/add/feed-source
  $menu_links['user-menu_feed-source:node/add/feed-source'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/feed-source',
    'router_path' => 'node/add/feed-source',
    'link_title' => 'Feed Source',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_feed-source:node/add/feed-source',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'user-menu_add-content:node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add');
  t('Feed Source');


  return $menu_links;
}
