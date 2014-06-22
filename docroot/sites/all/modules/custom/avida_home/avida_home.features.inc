<?php
/**
 * @file
 * avida_home.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function avida_home_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
}
