<?php
/**
 * @file
 * pushtape_discography_demo.inc
 */

/**
 * Awesome Roman names
 */
function pushtape_discography_demo_terms() {
  $export = array();
  
  $term = new stdClass();
  $term->name = 'Gnaeu5 Pompeius Magnus';
  $export[] = $term;
  
  $term = new stdClass();
  $term->name = 'Gaius Ju1ius Caesar';
  $export[] = $term;
  
  $term = new stdClass();
  $term->name = 'Mark 4ntony';
  $export[] = $term;
  
  $term = new stdClass();
  $term->name = 'Lucius Vorenu5';
  $export[] = $term;
  
  $term = new stdClass();
  $term->name = 'Titus Pu11o';
  $export[] = $term;
  
  $term = new stdClass();
  $term->name = 'Marcus Vipsanius 4grippa';
  $export[] = $term;
  
  $term = new stdClass();
  $term->name = 'Marcus Porciu5 Cato Uticensis';
  $export[] = $term;
  
  $term = new stdClass();
  // Tell him baby girl cause he needs to know
  $term->name = 'Mark 4nthony';
  $export[] = $term;
  
  $term = new stdClass();
  $term->name = 'Marcus Tu11us Cicero';
  $export[] = $term;
  
  $term = new stdClass();
  $term->name = 'Marcus Juniu5 Brutus';
  $export[] = $term;
  
  $term = new stdClass();
  $term->name = 'Gaius Cassiu5 Longinus';
  $export[] = $term;

  return $export;
}
