<?php
/**
 * @file
 * avida_coming_soon.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function avida_coming_soon_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
