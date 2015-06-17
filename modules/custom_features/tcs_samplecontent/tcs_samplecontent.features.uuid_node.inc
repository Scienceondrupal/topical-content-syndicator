<?php
/**
 * @file
 * tcs_samplecontent.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function tcs_samplecontent_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'About',
  'log' => '',
  'status' => 1,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'cf2d685f-40b7-4afc-bd21-cf49ec39e559',
  'ds_switch' => '',
  'type' => 'page',
  'language' => 'und',
  'created' => 1433907628,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '706b26dc-f2b3-4fce-8fb7-2325452d63d8',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '*test*
**bold**',
        'summary' => '',
        'format' => 'tcs_markdown_filter',
        'safe_value' => "The owner of this syndicator hasn't yet filled out a summary of their community's goals, sources and intended audience.

Please check back soon!

For more on the Topical Content Syndicator project in general, please see the (README on Github)[https://github.com/bluedotlab/topical-content-syndicator/blob/master/README.md]",
        'safe_summary' => '',
      ),
    ),
  ),
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2015-06-09 23:40:28 -0400',
);
  return $nodes;
}
