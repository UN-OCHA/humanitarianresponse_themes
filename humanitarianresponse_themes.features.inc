<?php
/**
 * @file
 * humanitarianresponse_themes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function humanitarianresponse_themes_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function humanitarianresponse_themes_views_api() {
  return array("api" => "3.0");
}
