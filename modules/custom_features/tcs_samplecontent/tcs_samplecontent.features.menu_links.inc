<?php
/**
 * @file
 * tcs_samplecontent.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function tcs_samplecontent_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about:node/1
  $menu_links['main-menu_about:about'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'identifier' => 'main-menu_about:about',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');


  return $menu_links;
}
