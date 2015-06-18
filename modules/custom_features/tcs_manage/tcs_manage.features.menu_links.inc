<?php
/**
 * @file
 * tcs_manage.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function tcs_manage_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: user-menu_manage:manage/source-feeds
  $menu_links['user-menu_manage:manage/source-feeds'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'manage/source-feeds',
    'router_path' => 'manage/source-feeds',
    'link_title' => 'Manage',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_manage:manage/source-feeds',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: user-menu_source-feeds:manage/source-feeds
  $menu_links['user-menu_source-feeds:manage/source-feeds'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'manage/source-feeds',
    'router_path' => 'manage/source-feeds',
    'link_title' => 'Source Feeds',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_source-feeds:manage/source-feeds',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'user-menu_:manage/source-feeds',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Manage');
  t('Source Feeds');


  return $menu_links;
}
