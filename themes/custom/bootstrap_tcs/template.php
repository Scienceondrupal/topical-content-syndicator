<?php

/**
 * @file
 * template.php
 */

/**
 * HTML preprocess
 */
function bootstrap_tcs_preprocess_html(&$vars) {
  /* Variable preprocess here */
}

/**
 * Page preprocess
 */
function bootstrap_tcs_preprocess_page(&$vars) {
  /* Variable preprocess here */
}

/**
 * Page preprocess
 */
function bootstrap_tcs_process_field(&$vars) {
  switch ($vars['element']['#field_name']) {
    case 'title':
      /* Toggle description when clicking on title */
      $nid = $vars['element']['#object']->nid;
      $vars['attributes'] = 'data-target=".nid-' . $nid . '"';
      $vars['attributes'] .= 'data-toggle="collapse"';
    break;
  }
}

/**
 * Block process - classes and titles
 * - preprocess not used as some blocks not available
 */
function bootstrap_tcs_process_block(&$vars) {
   /* Set shortcut variables */
  $block_id = $vars['block_html_id'];
  $classes = &$vars['classes'];
  $title = &$vars['title'];

  /* Add classes based on the block HTML ID */
  switch ($block_id) {
    /** Example **/
    case 'block-system-main-menu':
      $classes .= ' col-sm-8 col-md-9';
      $classes .= ' navbar-nav';
      $title = '';
      break;
  }  
}

/**
 * Menu modifications - add classes
 */
/* Menu wrappers */
function bootstrap_tcs_menu_tree__main_menu(&$variables) {
 return '<ul class="nav navbar-nav">' . $variables['tree'] . '</ul>';
}
