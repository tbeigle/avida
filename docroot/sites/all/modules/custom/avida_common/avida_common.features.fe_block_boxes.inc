<?php
/**
 * @file
 * avida_common.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function avida_common_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Work with Us - Patients';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'work_with_us_patients';
  $fe_block_boxes->body = '<p>Our medical research studies allow people to participate as volunteers. By taking part in clinical protocols, patients may be the first to receive promising new therapies before they are widely available.&nbsp;</p>

<p>How do I enroll myself or my child?&nbsp;</p>

<p>You can contact us at 949-336-6161. Parents or guardians must call to register anyone under 18 years of age. Our studies for adults may require the assistance of another adult (significant other, parent, employer, adult child) for some of the assessments.<br />
<br />
What&nbsp;is the purpose of&nbsp;the initial phone call?&nbsp;&nbsp;</p>

<p>You should expect about a 15-minute discussion which will begin with questions about your identifying information. Questions are geared to determine if you may be eligible for one of AVIDA&#39;s new or ongoing studies. Discussion will include basic information about medical research that you or your child seem eligible for participation.<br />
<br />
What is the next step? &nbsp;</p>

<p>If you seem eligible and are interested in learning more, you will be scheduled for an initial screening appointment during which the study information will be presented in both written and oral forms.<br />
<br />
What is an informed consent form?&nbsp;</p>

<p>This form contains important details about the&nbsp;research to help you&nbsp;fully understand the study and what your involvement would mean.&nbsp;Study information includes the&nbsp;time-period, required number of visits, medical procedures, and medication studied. Expected outcomes, potential benefits, and possible risks are also included as well as the fact that all research participation is voluntary.</p>
';

  $export['work_with_us_patients'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Work with Us - Sponsors';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'work_with_us_sponsors';
  $fe_block_boxes->body = '<p>Become a Sponsor<br />
Work with our team to create innovative protocols, trainings and/or events, and join the growing list of sponsors who choose AVIDA:<br />
Ironshore Pharmaceutical &amp; Development, Inc.<br />
NuTec Inc.<br />
Purdue Pharma<br />
Quintiles<br />
Rho World<br />
Rhodes Pharmaceuticals<br />
Sunovion Pharmaceuticals Inc.<br />
Tris Pharma Inc.</p>

<p><br />
For more information about becoming a sponsor for our research or training or speaking programs, contact:&nbsp;drsharon@avidainc.com</p>
';

  $export['work_with_us_sponsors'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Work with Us - Students';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'work_with_us_students';
  $fe_block_boxes->body = '<p>AVIDA Inc is committed to teaching and training students and volunteers about clinical research design and the assessment and treatment of disorders such as ADHD and autism in children, teens and adults. Both Sharon Wigal, Ph.D. and Tim Wigal, Ph.D. have guided and mentored undergraduate and graduate students in research projects. Those working with us are given the opportunity to observe how study data are collected, entered and analyzed. More importantly, students learn about the human side&nbsp;of assessment and treatment.</p>

<p>All students and volunteers are asked to complete a background check, provide results of a TB test completed in the last year and records of up-to-date immunizations. Confidentiality agreements are required to protect the privacy of the families and the study sponsors. All participants will complete Good Clinical Practice Training and scholarly readings related to study design and ADHD and autism. We prefer to work with students who are available for at least 9 months. Please contact Audrey Kapelinski at Audrey@avidainc.com or 949-336-6161 if you are interested.</p>
';

  $export['work_with_us_students'] = $fe_block_boxes;

  return $export;
}
