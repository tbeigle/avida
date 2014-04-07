<?php
/**
 * @file
 * avida_home.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function avida_home_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Home Three Columns: Column 1';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'home_block_1';
  $fe_block_boxes->body = '<h2>
Getting Started</h2>

<p>
<a href="#">learn more</a></p>
';

  $export['home_block_1'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Home Three Columns: Column 2';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'home_block_2';
  $fe_block_boxes->body = '<h2>Volunteer</h2>
<p><a href="#">learn more</a></p>';

  $export['home_block_2'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Home Three Columns: Column 3';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'home_block_3';
  $fe_block_boxes->body = '<h2>Clinical Trials</h2>
<p><a href="#">learn more</a></p>';

  $export['home_block_3'] = $fe_block_boxes;

  return $export;
}
