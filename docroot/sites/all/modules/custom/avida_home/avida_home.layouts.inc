<?php
/**
 * @file
 * avida_home.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function avida_home_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'one_three_two';
  $layout->admin_title = 'One Three Two';
  $layout->admin_description = 'Banner/Header, three equal-width columns, two equal-width columns.';
  $layout->category = 'Avida';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
          2 => 2,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'avida_132_middle_center',
          2 => 'avida_132_middle_right',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Avida 132 Middle Left',
        'width' => '33.2976977596227',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'avida-132 middle-col col-1',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center_',
        ),
        'parent' => 'main',
        'class' => 'avida-banner',
      ),
      'center_' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'avida-132-banner',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'avida_132_bottom_left',
          1 => 'avida_132_bottom_right',
        ),
        'parent' => 'main',
        'class' => 'avida-132-footer',
      ),
      'avida_132_bottom_left' => array(
        'type' => 'region',
        'title' => 'Avida 132 Bottom Left',
        'width' => '50',
        'width_type' => '%',
        'parent' => '2',
        'class' => 'avida-132 bottom-col col-1',
      ),
      'avida_132_bottom_right' => array(
        'type' => 'region',
        'title' => 'Avida 132 Bottom Right',
        'width' => '50',
        'width_type' => '%',
        'parent' => '2',
        'class' => 'avida-132 bottom-col col-2',
      ),
      'avida_132_middle_center' => array(
        'type' => 'region',
        'title' => 'Avida 132 Middle Center',
        'width' => '33.33738680704348',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'avida-132 middle-col col-2',
      ),
      'avida_132_middle_right' => array(
        'type' => 'region',
        'title' => 'Avida 132 Middle Right',
        'width' => '33.364915433333806',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'avida-132 middle-col col-3',
      ),
    ),
  );
  $export['one_three_two'] = $layout;

  return $export;
}
