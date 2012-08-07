<?php
/**
 * @file
 * pushtape_discography.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pushtape_discography_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'releases';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'releases';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'releases';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No releases yet';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'No releases yet. Add a <a href="/node/add/track">new track!</a>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Field: Content: Artwork */
  $handler->display->display_options['fields']['field_artwork']['id'] = 'field_artwork';
  $handler->display->display_options['fields']['field_artwork']['table'] = 'field_data_field_artwork';
  $handler->display->display_options['fields']['field_artwork']['field'] = 'field_artwork';
  $handler->display->display_options['fields']['field_artwork']['label'] = '';
  $handler->display->display_options['fields']['field_artwork']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_artwork']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_artwork']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_artwork']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artwork']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_artwork']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_artwork']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_artwork']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_artwork']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_artwork']['settings'] = array(
    'image_style' => 'artwork_small',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_artwork']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Content: Release date (field_release_date) */
  $handler->display->display_options['sorts']['field_release_date_value']['id'] = 'field_release_date_value';
  $handler->display->display_options['sorts']['field_release_date_value']['table'] = 'field_data_field_release_date';
  $handler->display->display_options['sorts']['field_release_date_value']['field'] = 'field_release_date_value';
  $handler->display->display_options['sorts']['field_release_date_value']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
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
    'album' => 'album',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 2;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'track' => 'track',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_album_nid']['id'] = 'field_album_nid';
  $handler->display->display_options['filters']['field_album_nid']['table'] = 'field_data_field_album';
  $handler->display->display_options['filters']['field_album_nid']['field'] = 'field_album_nid';
  $handler->display->display_options['filters']['field_album_nid']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_album_nid']['group'] = 2;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Artwork */
  $handler->display->display_options['fields']['field_artwork']['id'] = 'field_artwork';
  $handler->display->display_options['fields']['field_artwork']['table'] = 'field_data_field_artwork';
  $handler->display->display_options['fields']['field_artwork']['field'] = 'field_artwork';
  $handler->display->display_options['fields']['field_artwork']['label'] = '';
  $handler->display->display_options['fields']['field_artwork']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_artwork']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_artwork']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_artwork']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artwork']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_artwork']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_artwork']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_artwork']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_artwork']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_artwork']['settings'] = array(
    'image_style' => 'artwork_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_artwork']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;

  /* Display: Releases pane */
  $handler = $view->new_display('panel_pane', 'Releases pane', 'releases_all');

  /* Display: Releases Slideshow */
  $handler = $view->new_display('panel_pane', 'Releases Slideshow', 'releases_slideshow');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'releases';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Releases';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'features';
  $handler->display->display_options['menu']['context'] = 0;
  $export['releases'] = $view;

  $view = new view;
  $view->name = 'tracks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'tracks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tracks';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Artwork */
  $handler->display->display_options['fields']['field_artwork']['id'] = 'field_artwork';
  $handler->display->display_options['fields']['field_artwork']['table'] = 'field_data_field_artwork';
  $handler->display->display_options['fields']['field_artwork']['field'] = 'field_artwork';
  $handler->display->display_options['fields']['field_artwork']['label'] = '';
  $handler->display->display_options['fields']['field_artwork']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_artwork']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_artwork']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_artwork']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_artwork']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artwork']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_artwork']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_artwork']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_artwork']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_artwork']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_artwork']['settings'] = array(
    'image_style' => 'artwork_small',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_artwork']['field_api_classes'] = 0;
  /* Field: Content: Album */
  $handler->display->display_options['fields']['field_album']['id'] = 'field_album';
  $handler->display->display_options['fields']['field_album']['table'] = 'field_data_field_album';
  $handler->display->display_options['fields']['field_album']['field'] = 'field_album';
  $handler->display->display_options['fields']['field_album']['label'] = '';
  $handler->display->display_options['fields']['field_album']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_album']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_album']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_album']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_album']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_album']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_album']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_album']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_album']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_album']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_album']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Album (field_album) */
  $handler->display->display_options['arguments']['field_album_target_id']['id'] = 'field_album_target_id';
  $handler->display->display_options['arguments']['field_album_target_id']['table'] = 'field_data_field_album';
  $handler->display->display_options['arguments']['field_album_target_id']['field'] = 'field_album_target_id';
  $handler->display->display_options['arguments']['field_album_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_album_target_id']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'track' => 'track',
  );

  /* Display: Tracks List */
  $handler = $view->new_display('block', 'Tracks List', 'block');
  $handler->display->display_options['display_description'] = 'a block displaying all tracks in a list';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'track' => 'track',
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_album_nid']['id'] = 'field_album_nid';
  $handler->display->display_options['filters']['field_album_nid']['table'] = 'field_data_field_album';
  $handler->display->display_options['filters']['field_album_nid']['field'] = 'field_album_nid';
  $handler->display->display_options['filters']['field_album_nid']['operator'] = 'empty';

  /* Display: All Tracks Pane */
  $handler = $view->new_display('panel_pane', 'All Tracks Pane', 'tracks_all_pane');

  /* Display: Track list pane */
  $handler = $view->new_display('panel_pane', 'Track list pane', 'tracks_list_pane');

  /* Display: Album track pane */
  $handler = $view->new_display('panel_pane', 'Album track pane', 'panel_pane_1');
  $export['tracks'] = $view;

  return $export;
}
