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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'feed_items');

  /* Display: Home for Admins/Mgrs */
  $handler = $view->new_display('page', 'Home for Admins/Mgrs', 'homepage');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>Welcome to your content syndicator!</p>
<p>There\'s nothing to show here yet because the syndicator still needs to be set up to pull in content from the RSS or Atom feeds that you choose for your topic or community.</p>
<p>To add your first "Source Feed", click on Add > <a href="node/add/feed-source">Source Feed</a> in the menu above. Add a title for reference, paste in your RSS/Atom URL, then click Save - and you\'ll be all set!</p>
<p>When you add a number of Source Feeds, their content will be imported regularly and displayed in a combined "stream" in chronological order on the home page.</p>
<p>You may also like to describe your syndicator\'s goals, sources and intended audience by going to the <a href="about">About</a> page, then clicking "Edit".<br/>
<p>For more, see the Topical Content Syndicator project\'s README on Github - <a href="https://github.com/bluedotlab/topical-content-syndicator/blob/master/README.md" target="_blank">https://github.com/bluedotlab/topical-content-syndicator/blob/master/README.md</a></p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['path'] = 'home';

  /* Display: Home for Public */
  $handler = $view->new_display('page', 'Home for Public', 'homepage_public');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Welcome to our content syndicator!

There aren\'t any articles to see here yet, but once we\'re set up we\'ll show a stream of content pulled from a selection of interesting, relevant and timely sources, for your reading pleasure.

In the meantime, however, check out:

* our goals on the [About](about) page
* the [Topical Content Syndicator project](https://github.com/bluedotlab/topical-content-syndicator) on Github

Check back soon for more updates!';
  $handler->display->display_options['empty']['area']['format'] = 'tcs_markdown_filter';
  $handler->display->display_options['path'] = 'home';
  $export['list_feed_items'] = $view;

  return $export;
}
