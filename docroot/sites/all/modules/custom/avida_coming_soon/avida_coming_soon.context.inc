<?php
/**
 * @file
 * avida_coming_soon.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function avida_coming_soon_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'coming_soon';
  $context->description = 'Coming Soon landing page settings and blocks.';
  $context->tag = 'lp';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/1' => 'node/1',
      ),
    ),
  );
  $context->reactions = array(
    'disable_context' => array(
      'disabled' => array(
        'global' => 'global',
      ),
    ),
    'theme_html' => array(
      'class' => 'landing-coming-soon',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Coming Soon landing page settings and blocks.');
  t('lp');
  $export['coming_soon'] = $context;

  return $export;
}
