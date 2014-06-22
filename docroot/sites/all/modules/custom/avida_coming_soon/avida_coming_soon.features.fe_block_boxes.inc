<?php
/**
 * @file
 * avida_coming_soon.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function avida_coming_soon_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Changing Lives LP Block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'changing_lives';
  $fe_block_boxes->body = '<ul class="horizontal with-bullets">
  <li>Clinical Research</li>
  <li>Training</li>
  <li>Consulting</li>
  <li>Education</li>
</ul> <!-- /.horizontal with-bullets -->';

  $export['changing_lives'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Coming Soon - Further Information';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'coming_soon_contact_info';
  $fe_block_boxes->body = '<ul>
<li>
Audrey Kapelinski, LCSW</li>
<li>
<strong>(949) 500-1606</strong></li>
<li>
<strong>ADHDautismresearch@gmail.com</strong>&nbsp;</li>
</ul>
';

  $export['coming_soon_contact_info'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Coming Soon - Seeking Participants';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'coming_soon_left_box';
  $fe_block_boxes->body = '<ul>
<li>
Are between the ages of 6 and 12</li>
<li>
Have trouble paying attention, are easily distracted, or are overactive</li>
<li>
Can complete 9 visits over 12-14 weeks (including 2 classroom visits)</li>
</ul>
';

  $export['coming_soon_left_box'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Coming Soon - Volunteers Who Qualify';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'coming_soon_right_box';
  $fe_block_boxes->body = '<ul>
	<li>ADHD evaluation at no cost</li>
	<li>Investigational medication at no cost</li>
	<li>Compensation</li>
</ul>
';

  $export['coming_soon_right_box'] = $fe_block_boxes;

  return $export;
}
