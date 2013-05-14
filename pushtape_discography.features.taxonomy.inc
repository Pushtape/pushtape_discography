<?php
/**
 * @file
 * pushtape_discography.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function pushtape_discography_taxonomy_default_vocabularies() {
  return array(
    'artists' => array(
      'name' => 'Artists',
      'machine_name' => 'artists',
      'description' => 'Associate tracks and albums with artists.',
<<<<<<< HEAD
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'label' => array(
      'name' => 'Label',
      'machine_name' => 'label',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'tags' => array(
      'name' => 'Tags',
      'machine_name' => 'tags',
      'description' => 'Use tags to group articles on similar topics into categories.',
=======
>>>>>>> 3987556bc98acdce97c17b41c91325fcec478801
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
