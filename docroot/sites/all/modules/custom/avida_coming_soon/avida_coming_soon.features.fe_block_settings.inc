<?php
/**
 * @file
 * avida_coming_soon.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function avida_coming_soon_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-changing_lives'] = array(
    'cache' => -1,
    'css_class' => 'lp-changing-lives',
    'custom' => 0,
    'machine_name' => 'changing_lives',
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
    'title' => 'Changing Lives Through',
    'visibility' => 0,
  );

  $export['block-coming_soon_contact_info'] = array(
    'cache' => -1,
    'css_class' => 'coming-soon-contact-info',
    'custom' => 0,
    'machine_name' => 'coming_soon_contact_info',
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
    'title' => 'For further information please contact',
    'visibility' => 0,
  );

  $export['block-coming_soon_left_box'] = array(
    'cache' => -1,
    'css_class' => 'coming-soon-boxes left-box',
    'custom' => 0,
    'machine_name' => 'coming_soon_left_box',
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
    'title' => 'We are seeking participants who:',
    'visibility' => 0,
  );

  $export['block-coming_soon_right_box'] = array(
    'cache' => -1,
    'css_class' => 'coming-soon-boxes right-box',
    'custom' => 0,
    'machine_name' => 'coming_soon_right_box',
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
    'title' => 'Volunteers who qualify will receive:',
    'visibility' => 0,
  );

  return $export;
}
