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
  $context->name = 'event_calendar';
  $context->description = '';
  $context->tag = 'pages';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'events:page_all' => 'events:page_all',
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'event-calendar-page',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('pages');
  $export['event_calendar'] = $context;

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
        'menu-menu-quick-links' => array(
          'module' => 'menu',
          'delta' => 'menu-quick-links',
          'region' => 'footer',
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
