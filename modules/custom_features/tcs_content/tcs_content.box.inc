<?php
/**
 * @file
 * tcs_content.box.inc
 */

/**
 * Implements hook_default_box().
 */
function tcs_content_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'tcs_content_side_trigger';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Trigger button for the left sidebar on mobile';
  $box->options = array(
    'body' => array(
      'value' => '<button type="button" class="navbar-toggle offcanvas-toggle" data-toggle="offcanvas" data-target=".region-sidebar-first">Filter</button>',
      'format' => 'full_html',
    ),
  );
  $export['tcs_content_side_trigger'] = $box;

  return $export;
}
