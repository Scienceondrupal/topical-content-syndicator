<?php
/**
 * @file
 * tcs_content.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tcs_content_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'list_feed_items';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'List Feed Items';
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
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Go';
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'tcs-list-item';
  $handler->display->display_options['style_options']['wrapper_class'] = 'tcs-list-items';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'feed_item_list_item';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No items to display';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
    'feed_item' => 'feed_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Filter: Description */
  $handler->display->display_options['filters']['field_feed_item_description_value']['id'] = 'field_feed_item_description_value';
  $handler->display->display_options['filters']['field_feed_item_description_value']['table'] = 'field_data_field_feed_item_description';
  $handler->display->display_options['filters']['field_feed_item_description_value']['field'] = 'field_feed_item_description_value';
  $handler->display->display_options['filters']['field_feed_item_description_value']['ui_name'] = 'Filter: Description';
  $handler->display->display_options['filters']['field_feed_item_description_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_feed_item_description_value']['group'] = 2;
  $handler->display->display_options['filters']['field_feed_item_description_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_feed_item_description_value']['expose']['operator_id'] = 'field_feed_item_description_value_op';
  $handler->display->display_options['filters']['field_feed_item_description_value']['expose']['operator'] = 'field_feed_item_description_value_op';
  $handler->display->display_options['filters']['field_feed_item_description_value']['expose']['identifier'] = 'd';
  $handler->display->display_options['filters']['field_feed_item_description_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Filter: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['ui_name'] = 'Filter: Title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 2;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'filter';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'feed_items');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'homepage');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'home';
  $export['list_feed_items'] = $view;

  return $export;
}
