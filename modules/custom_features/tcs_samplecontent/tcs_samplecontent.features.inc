<?php
/**
 * @file
 * tcs_samplecontent.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tcs_samplecontent_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
