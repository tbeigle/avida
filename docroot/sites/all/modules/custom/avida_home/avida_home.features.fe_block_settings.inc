<?php
/**
 * @file
 * avida_home.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function avida_home_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-home_block_1'] = array(
    'cache' => -1,
    'css_class' => 'home-3-col-blocks getting-started',
    'custom' => 0,
    'machine_name' => 'home_block_1',
    'module' => 'block',
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
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-home_block_2'] = array(
    'cache' => -1,
    'css_class' => 'home-3-col-blocks volunteer',
    'custom' => 0,
    'machine_name' => 'home_block_2',
    'module' => 'block',
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
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-home_block_3'] = array(
    'cache' => -1,
    'css_class' => 'home-3-col-blocks clinical-trials',
    'custom' => 0,
    'machine_name' => 'home_block_3',
    'module' => 'block',
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
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
