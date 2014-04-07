<?php

/**
 * Implements template_preprocess_block()
 */
function avida_preprocess_block(&$vars) {
  // Defaults
  $vars['title_tag'] = 'h2';
  $vars['title_attributes_array']['class'][] = 'block-title';
  $vars['content_attributes_array']['class'][] = 'content';
}

/**
 * Implements template_preprocess_html()
 */
function avida_preprocess_html(&$vars) {
  global $theme_path;
  
  _avida_apple_touch_icons();
  _avida_lt_ie_9($vars, $theme_path);
}

/**
 * Implements template_preprocess_page()
 */
function avida_preprocess_page(&$vars) {
  $vars['show_breadcrumb'] = theme_get_setting('show_breadcrumb');
  $vars['site_footer'] = theme_get_setting('site_footer');
}

/**
 * Implements template_preprocess_views_view_fields()
 */
function avida_preprocess_views_view_list(&$vars) {
  if ($vars['view']->name != 'staff') return;
  
  $counter = $two_col_counter = 1;
  foreach ($vars['classes_array'] as $index => &$class) {
    $add_class = ' col-' . $counter . ' two-col-col-' . $two_col_counter;
    $class = trim($class . $add_class);
    
    if ($counter == 3) {
      $counter = 1;
    }
    else {
      $counter++;
    }
    
    $two_col_counter = $two_col_counter == 1 ? 2 : 1;
  }
}

/**
 * Adds apple shortcut icons to the HTML head
 */
function _avida_apple_touch_icons() {
  global $theme_path;
  $img_prefix = '/' . $theme_path . '/images/apple-touch/touch-icon';
  $sizes = array(0,60,76,120);
  
  foreach ($sizes as $key => $size) {
    $attributes = array(
      'rel' => 'apple-touch-icon',
    );
    
    if (!empty($size)) $attributes['sizes'] = $size . 'x' . $size;
    
    $attributes['href'] = $img_prefix . (!empty($size) ? '-' . $size . 'x' . $size : '') . '.png';
    
    $element = array(
      '#tag' => 'link',
      '#attributes' => $attributes,
    );
    
    drupal_add_html_head($element, 'apple_touch_icon_' . $size);
  }
}

/**
 * Helper function for building the IE8 and below contents
 */
function _avida_lt_ie_9(&$vars, $theme_path) {
  $path_prefix = '/' . trim(!empty($vars['directory']) ? $vars['directory'] : $theme_path, '/');
  
  $vars['lt_ie_9'] = array(
    '#prefix' => '<!--[if lt IE 9]>',
    '#suffix' => '<![endif]-->',
    array(
      '#markup' => '<script src="' . $path_prefix . '/scripts/js/vendor/html5shiv.js"></script>',
    ),
    array(
      '#markup' => '<link rel="stylesheet" type="text/css" href="' . $path_prefix . '/styles/css/lt-ie-9.css" media="all" />',
    ),
  );
}
