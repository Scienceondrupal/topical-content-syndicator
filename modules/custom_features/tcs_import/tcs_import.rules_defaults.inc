<?php
/**
 * @file
 * tcs_import.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function tcs_import_default_rules_configuration() {
  $items = array();
  $items['rules_feed_source_new_import'] = entity_import('rules_config', '{ "rules_feed_source_new_import" : {
      "LABEL" : "feed_source_new_import",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "tcs_import" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--feed_source" : { "bundle" : "feed_source" } },
      "DO" : [
        { "drupal_message" : { "message" : "Your new source feed has been saved. It will be imported in the next 5 minutes." } }
      ]
    }
  }');
  return $items;
}
