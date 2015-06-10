<?php
/**
 * @file
 * tcs_page.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function tcs_page_filter_default_formats() {
  $formats = array();

  // Exported format: Markdown.
  $formats['tcs_markdown_filter'] = array(
    'format' => 'tcs_markdown_filter',
    'name' => 'Markdown',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_markdown' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
