<?php
/**
 * @file
 * avida_common.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function avida_common_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-events-block_sidebar'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'events-block_sidebar',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'avida' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'avida',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
