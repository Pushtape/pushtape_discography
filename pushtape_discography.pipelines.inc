<?php
/**
 * @file
 * pushtape_discography.pipelines.inc
 */

/**
 * Implements hook_default_panels_renderer_pipeline().
 */
function pushtape_discography_default_panels_renderer_pipeline() {
  $export = array();

  $pipeline = new stdClass();
  $pipeline->disabled = FALSE; /* Edit this to true to make a default pipeline disabled initially */
  $pipeline->api_version = 1;
  $pipeline->name = 'ipep';
  $pipeline->admin_title = 'In-Place Editor Plus';
  $pipeline->admin_description = 'In-Place Editor Plus some extra special sauce.';
  $pipeline->weight = 0;
  $pipeline->settings = array(
    'renderers' => array(
      0 => array(
        'access' => array(
          'plugins' => array(
            0 => array(
              'name' => 'perm',
              'settings' => array(
                'perm' => 'use panels in place editing',
              ),
              'context' => 'logged-in-user',
            ),
          ),
          'logic' => 'and',
        ),
        'renderer' => 'ipep',
        'options' => array(),
      ),
    ),
  );
  $export['ipep'] = $pipeline;

  return $export;
}
