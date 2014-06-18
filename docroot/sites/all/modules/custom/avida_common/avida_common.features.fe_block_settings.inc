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

  $export['block-work_with_us_sponsors'] = array(
    'cache' => -1,
    'css_class' => 'page-sub-section',
    'custom' => 0,
    'machine_name' => 'work_with_us_sponsors',
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
    'title' => 'Sponsors',
    'visibility' => 0,
  );

  $export['block-work_with_us_students'] = array(
    'cache' => -1,
    'css_class' => 'page-sub-section',
    'custom' => 0,
    'machine_name' => 'work_with_us_students',
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
    'title' => 'Students',
    'visibility' => 0,
  );

  $export['menu-menu-quick-links'] = array(
    'cache' => -1,
    'css_class' => 'footer-nav quick-links',
    'custom' => 0,
    'delta' => 'menu-quick-links',
    'module' => 'menu',
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
    'title' => 'Quick Links',
    'visibility' => 0,
  );

  $export['menu_block-1'] = array(
    'cache' => -1,
    'css_class' => 'footer-nav clinical-research',
    'custom' => 0,
    'delta' => 1,
    'module' => 'menu_block',
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
    'title' => 'Clinical Research',
    'visibility' => 0,
  );

  $export['menu_block-2'] = array(
    'cache' => -1,
    'css_class' => 'footer-nav support-services',
    'custom' => 0,
    'delta' => 2,
    'module' => 'menu_block',
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
    'title' => 'Support Services',
    'visibility' => 0,
  );

  $export['menu_block-3'] = array(
    'cache' => -1,
    'css_class' => 'footer-nav work-with-us',
    'custom' => 0,
    'delta' => 3,
    'module' => 'menu_block',
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
    'title' => 'Work with Us',
    'visibility' => 0,
  );

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
