<?php
/**
 * @file
 * se_sponsor_affiliate.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function se_sponsor_affiliate_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|se_sponsor|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'se_sponsor';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_se_sponsor_link' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'more-link',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|se_sponsor|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function se_sponsor_affiliate_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|se_sponsor|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'se_sponsor';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'postcard_left';
  $ds_layout->settings = array(
    'regions' => array(
      'image' => array(
        0 => 'field_se_sponsor_image',
      ),
      'text' => array(
        1 => 'body',
        2 => 'field_se_sponsor_link',
      ),
    ),
    'fields' => array(
      'field_se_sponsor_image' => 'image',
      'body' => 'text',
      'field_se_sponsor_link' => 'text',
    ),
    'classes' => array(),
    'wrappers' => array(
      'image' => 'div',
      'text' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|se_sponsor|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|se_sponsor|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'se_sponsor';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_se_sponsor_link',
        2 => 'body',
        3 => 'redirect',
        4 => 'path',
      ),
      'hidden' => array(
        5 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_se_sponsor_link' => 'ds_content',
      'body' => 'ds_content',
      'redirect' => 'ds_content',
      'path' => 'ds_content',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|se_sponsor|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|se_sponsor|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'se_sponsor';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_se_sponsor_image',
      ),
    ),
    'fields' => array(
      'field_se_sponsor_image' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|se_sponsor|teaser'] = $ds_layout;

  return $export;
}
