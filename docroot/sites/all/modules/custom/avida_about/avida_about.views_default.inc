<?php
/**
 * @file
 * avida_about.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function avida_about_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'staff';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Staff';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'staff';
  $handler->display->display_options['style_options']['wrapper_class'] = 'staff-list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: User: Profile Picture */
  $handler->display->display_options['fields']['field_user_picture']['id'] = 'field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['table'] = 'field_data_field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['field'] = 'field_user_picture';
  $handler->display->display_options['fields']['field_user_picture']['label'] = '';
  $handler->display->display_options['fields']['field_user_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_picture']['element_wrapper_class'] = 'staff-photo';
  $handler->display->display_options['fields']['field_user_picture']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_picture']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: User: Position Title */
  $handler->display->display_options['fields']['field_user_title']['id'] = 'field_user_title';
  $handler->display->display_options['fields']['field_user_title']['table'] = 'field_data_field_user_title';
  $handler->display->display_options['fields']['field_user_title']['field'] = 'field_user_title';
  $handler->display->display_options['fields']['field_user_title']['label'] = '';
  $handler->display->display_options['fields']['field_user_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['field_user_title']['element_wrapper_class'] = 'staff-position';
  $handler->display->display_options['fields']['field_user_title']['element_default_classes'] = FALSE;
  /* Field: User: Display Name */
  $handler->display->display_options['fields']['field_user_profile_name']['id'] = 'field_user_profile_name';
  $handler->display->display_options['fields']['field_user_profile_name']['table'] = 'field_data_field_user_profile_name';
  $handler->display->display_options['fields']['field_user_profile_name']['field'] = 'field_user_profile_name';
  $handler->display->display_options['fields']['field_user_profile_name']['label'] = '';
  $handler->display->display_options['fields']['field_user_profile_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_profile_name']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['field_user_profile_name']['element_wrapper_class'] = 'staff-name';
  $handler->display->display_options['fields']['field_user_profile_name']['element_default_classes'] = FALSE;
  /* Field: User: About */
  $handler->display->display_options['fields']['field_user_about']['id'] = 'field_user_about';
  $handler->display->display_options['fields']['field_user_about']['table'] = 'field_data_field_user_about';
  $handler->display->display_options['fields']['field_user_about']['field'] = 'field_user_about';
  $handler->display->display_options['fields']['field_user_about']['label'] = '';
  $handler->display->display_options['fields']['field_user_about']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_about']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_user_about']['element_wrapper_class'] = 'staff-about';
  $handler->display->display_options['fields']['field_user_about']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_about']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_user_about']['settings'] = array(
    'trim_length' => '110',
  );
  /* Sort criterion: User: Listing Index Position (field_user_index_pos) */
  $handler->display->display_options['sorts']['field_user_index_pos_value']['id'] = 'field_user_index_pos_value';
  $handler->display->display_options['sorts']['field_user_index_pos_value']['table'] = 'field_data_field_user_index_pos';
  $handler->display->display_options['sorts']['field_user_index_pos_value']['field'] = 'field_user_index_pos_value';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    5 => '5',
  );

  /* Display: Staff: Pane */
  $handler = $view->new_display('panel_pane', 'Staff: Pane', 'panel_all');
  $export['staff'] = $view;

  return $export;
}
