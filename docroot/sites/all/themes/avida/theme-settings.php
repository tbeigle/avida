<?php
/**
 * @file theme-settings.php
 */

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Theme settings form for the Avida theme.
 */
function avida_form_system_theme_settings_alter(&$form, &$form_state) {
  $form['show_breadcrumb'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show Breadcrumb'),
    '#default_value' => theme_get_setting('show_breadcrumb'),
  );
  
  $form['site_footer'] = array(
    '#type' => 'textfield',
    '#title' => t('Copyright Footer'),
    '#default_value' => theme_get_setting('site_footer'),
  );
}
