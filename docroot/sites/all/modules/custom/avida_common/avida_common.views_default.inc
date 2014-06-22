<?php
/**
 * @file
 * avida_common.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function avida_common_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'events';
  $handler->display->display_options['style_options']['wrapper_class'] = 'views-list events-list';
  $handler->display->display_options['row_plugin'] = 'panelizer_node_view';
  $handler->display->display_options['row_options']['render_anything'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Event Date -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Event Date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_event_date_value']['year_range'] = '-0:+3';

  /* Display: Block: Sidebar */
  $handler = $view->new_display('block', 'Block: Sidebar', 'block_sidebar');
  $handler->display->display_options['display_description'] = 'Events sidebar block that appears site-wide.';
  $handler->display->display_options['block_description'] = 'Events Sidebar';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'pane_sidebar');

  /* Display: Page: Event Calendar */
  $handler = $view->new_display('page', 'Page: Event Calendar', 'page_all');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Event Calendar';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'events';
  $handler->display->display_options['style_options']['wrapper_class'] = 'views-list events-list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event Date (excluded, orange-circle) */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['ui_name'] = 'Content: Event Date (excluded, orange-circle)';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_event_date']['element_wrapper_class'] = 'orange-circle';
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'event_teaser',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title (excluded) */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Content: Title (excluded)';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'event-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Event Date (excluded) */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['ui_name'] = 'Content: Event Date (excluded)';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_event_date_1']['element_label_class'] = 'field-label';
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_event_date_1']['element_wrapper_class'] = 'event-date';
  $handler->display->display_options['fields']['field_event_date_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Event Details (excluded) */
  $handler->display->display_options['fields']['field_event_dets']['id'] = 'field_event_dets';
  $handler->display->display_options['fields']['field_event_dets']['table'] = 'field_data_field_event_dets';
  $handler->display->display_options['fields']['field_event_dets']['field'] = 'field_event_dets';
  $handler->display->display_options['fields']['field_event_dets']['ui_name'] = 'Content: Event Details (excluded)';
  $handler->display->display_options['fields']['field_event_dets']['label'] = '';
  $handler->display->display_options['fields']['field_event_dets']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_dets']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_event_dets']['element_label_class'] = 'field-label';
  $handler->display->display_options['fields']['field_event_dets']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_dets']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_event_dets']['element_wrapper_class'] = 'event-details';
  $handler->display->display_options['fields']['field_event_dets']['element_default_classes'] = FALSE;
  /* Field: Content: Flyer (excluded) */
  $handler->display->display_options['fields']['field_event_flyer']['id'] = 'field_event_flyer';
  $handler->display->display_options['fields']['field_event_flyer']['table'] = 'field_data_field_event_flyer';
  $handler->display->display_options['fields']['field_event_flyer']['field'] = 'field_event_flyer';
  $handler->display->display_options['fields']['field_event_flyer']['ui_name'] = 'Content: Flyer (excluded)';
  $handler->display->display_options['fields']['field_event_flyer']['label'] = '';
  $handler->display->display_options['fields']['field_event_flyer']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_flyer']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_flyer']['alter']['text'] = '<div class="event-flyer">
  <div class="field-label">Event Flyer:</div>
  [field_event_flyer]
</div>';
  $handler->display->display_options['fields']['field_event_flyer']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['field_event_flyer']['element_label_class'] = 'field-label';
  $handler->display->display_options['fields']['field_event_flyer']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_flyer']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_event_flyer']['element_wrapper_class'] = 'event-flyer';
  $handler->display->display_options['fields']['field_event_flyer']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_flyer']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_event_flyer']['click_sort_column'] = 'fid';
  /* Field: Left Column */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Left Column';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="orange-circle">[field_event_date] </div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'left';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Right Column */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Right Column';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<h3 class="event-title">[title]</h3>
<div class="event-date">
  <div class="field-label">Event Date:</div>
  [field_event_date_1]
</div>

<div class="event-details">
  <div class="field-label">Event Details:</div>
  [field_event_dets] 
</div>

[field_event_flyer]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_class'] = 'right';
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['path'] = 'support-services/event-calendar';
  $export['events'] = $view;

  return $export;
}
