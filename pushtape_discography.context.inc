<?php
/**
 * @file
 * pushtape_discography.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pushtape_discography_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'global';
  $context->description = '';
  $context->tag = 'pushtape';
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
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'user_second',
          'weight' => '-10',
        ),
        'delta_blocks-branding' => array(
          'module' => 'delta_blocks',
          'delta' => 'branding',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'delta_blocks-logo' => array(
          'module' => 'delta_blocks',
          'delta' => 'logo',
          'region' => 'banner',
          'weight' => 0,
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => 0,
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'sidebar_first',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('pushtape');
  $export['global'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'pushtape_albums_context';
  $context->description = 'this is active when viewing albums';
  $context->tag = 'pushtape';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'album' => 'album',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('pushtape');
  t('this is active when viewing albums');
  $export['pushtape_albums_context'] = $context;

  return $export;
}
