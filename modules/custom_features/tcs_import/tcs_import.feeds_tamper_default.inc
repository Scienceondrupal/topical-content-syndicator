<?php
/**
 * @file
 * tcs_import.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function tcs_import_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'feed_source_feed_importer-description-absolute_url';
  $feeds_tamper->importer = 'feed_source_feed_importer';
  $feeds_tamper->source = 'description';
  $feeds_tamper->plugin_id = 'absolute_url';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Make URLs absolute';
  $export['feed_source_feed_importer-description-absolute_url'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'feed_source_feed_importer-description-html_entity_decode';
  $feeds_tamper->importer = 'feed_source_feed_importer';
  $feeds_tamper->source = 'description';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['feed_source_feed_importer-description-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'feed_source_feed_importer-description-strip_tags';
  $feeds_tamper->importer = 'feed_source_feed_importer';
  $feeds_tamper->source = 'description';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Strip tags';
  $export['feed_source_feed_importer-description-strip_tags'] = $feeds_tamper;

  return $export;
}
