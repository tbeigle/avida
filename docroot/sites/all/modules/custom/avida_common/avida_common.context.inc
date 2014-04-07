<?php
/**
 * @file
 * avida_common.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function avida_common_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'global';
  $context->description = 'Elements to appear on and settings for almost every page.';
  $context->tag = 'common';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'nav',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Elements to appear on and settings for almost every page.');
  t('common');
  $export['global'] = $context;

  return $export;
}
