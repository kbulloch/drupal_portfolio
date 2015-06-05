<?php
/**
 * @file
 * work_samples.features.inc
 */

/**
 * Implements hook_views_api().
 */
function work_samples_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function work_samples_node_info() {
  $items = array(
    'work_sample' => array(
      'name' => t('Work Sample'),
      'base' => 'node_content',
      'description' => t('A sample project with short description, github link and optional live link (suggested).'),
      'has_title' => '1',
      'title_label' => t('Project Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
