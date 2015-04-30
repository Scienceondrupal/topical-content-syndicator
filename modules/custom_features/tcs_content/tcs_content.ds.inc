<?php
/**
 * @file
 * tcs_content.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function tcs_content_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|feed_item|feed_item_list_item';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'feed_item';
  $ds_fieldsetting->view_mode = 'feed_item_list_item';
  $ds_fieldsetting->settings = array(
    'feed_item_toggle' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'ds_post_date_medium',
    ),
  );
  $export['node|feed_item|feed_item_list_item'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function tcs_content_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'feed_item_toggle';
  $ds_field->label = 'Toggle';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'feed_item|feed_item_list_item';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<button class="btn btn-info btn-xs collapsed" type="button" data-toggle="collapse" data-target=".nid-[node:nid]"></button>',
      'format' => 'filtered_html',
    ),
    'use_token' => 1,
  );
  $export['feed_item_toggle'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function tcs_content_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|feed_item|feed_item_list_item';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'feed_item';
  $ds_layout->view_mode = 'feed_item_list_item';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'feed_item_toggle',
        1 => 'title',
      ),
      'left' => array(
        2 => 'field_feed_item_description',
        3 => 'field_feed_item_link',
      ),
      'footer' => array(
        4 => 'post_date',
      ),
    ),
    'fields' => array(
      'feed_item_toggle' => 'header',
      'title' => 'header',
      'field_feed_item_description' => 'left',
      'field_feed_item_link' => 'left',
      'post_date' => 'footer',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|feed_item|feed_item_list_item'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function tcs_content_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'feed_item_list_item';
  $ds_view_mode->label = 'List Item';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['feed_item_list_item'] = $ds_view_mode;

  return $export;
}
