<?php
/**
 * @file
 * avida_common.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function avida_common_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'two_columns_image_left';
  $layout->admin_title = 'Two Columns, Image Left';
  $layout->admin_description = 'Two columns with an image floated left in the first, wider column.';
  $layout->category = 'Avida';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 1,
          1 => 'main',
        ),
        'parent' => NULL,
        'class' => 'avida-two-cols-img avida-img-left',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => FALSE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => '22.529318881635938',
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
        'class' => 'avida-col-img-left avida-col-right avida-col-sidebar',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'column',
        'width' => '77.47068111836407',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 2,
        ),
        'class' => 'avida-col-img-left avida-col-left avida-col-content',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'image',
          1 => 'main_',
        ),
        'parent' => '1',
        'class' => '',
      ),
      'image' => array(
        'type' => 'region',
        'title' => 'Image',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'avida-main-content-img',
      ),
      'main_' => array(
        'type' => 'region',
        'title' => 'Main',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'avida-main-content',
      ),
    ),
  );
  $export['two_columns_image_left'] = $layout;

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'two_columns_image_right';
  $layout->admin_title = 'Two Columns, Image Right';
  $layout->admin_description = 'Two columns with an image floated right in the first, wider column.';
  $layout->category = 'Avida';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 1,
          1 => 'main',
        ),
        'parent' => NULL,
        'class' => 'avida-two-cols-img avida-img-right',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => FALSE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => '22.529318881635938',
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
        'class' => 'avida-col-img-right avida-col-right avida-col-sidebar',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'column',
        'width' => '77.47068111836407',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 2,
        ),
        'class' => 'avida-col-img-right avida-col-left avida-col-content',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'image',
          1 => 'main_',
        ),
        'parent' => '1',
        'class' => '',
      ),
      'image' => array(
        'type' => 'region',
        'title' => 'Main',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'avida-main-content',
      ),
      'main_' => array(
        'type' => 'region',
        'title' => 'Image',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'avida-main-img',
      ),
    ),
  );
  $export['two_columns_image_right'] = $layout;

  return $export;
}
