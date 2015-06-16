<?php

/**
 * Implements hook_preprocess_maintenance_page().
 */
function mero_preprocess_maintenance_page(&$variables) {
  backdrop_add_css(backdrop_get_path('theme', 'mero') . '/css/maintenance-page.css');
}

/**
 * Implements hook_preprocess_layout().
 */
function mero_preprocess_layout(&$variables) {
  if ($variables['content']['header']) {
    $variables['content']['header'] = '<div class="l-header-inner">' . $variables['content']['header'] . '</div>';
  }
}

/**
 * Implements hook_preprocess_node().
 */
function mero_preprocess_node(&$variables) {
  $variables['top_image'] = '';
  $node = node_load($variables['node']->nid);
  $images = field_get_items('node', $node, 'field_image');
  if(!empty($images)) {
    $image = field_view_value('node', $node, 'field_image', $images[0], array(
      'type' => 'image',
    ));
    $variables['top_image'] = $image;
  }
}

/**
 * Implements theme_menu_tree().
 */
function mero_menu_tree($variables) {
  return '<ul class="menu clearfix">' . $variables['tree'] . '</ul>';
}

/**
 * Implements theme_field__field_type().
 */
function mero_field__taxonomy_term_reference($variables) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<h3 class="field-label">' . $variables['label'] . ': </h3>';
  }

  // Render the items.
  $output .= ($variables['element']['#label_display'] == 'inline') ? '<ul class="links inline">' : '<ul class="links">';
  foreach ($variables['items'] as $delta => $item) {
    $item_attributes = (isset($variables['item_attributes'][$delta])) ? backdrop_attributes($variables['item_attributes'][$delta]) : '';
    $output .= '<li class="taxonomy-term-reference-' . $delta . '"' . $item_attributes . '>' . backdrop_render($item) . '</li>';
  }
  $output .= '</ul>';

  // Render the surrounding DIV with appropriate classes and attributes.
  if (!in_array('clearfix', $variables['classes'])) {
    $variables['classes'][] = 'clearfix';
  }
  $output = '<div class="' . implode(' ', $variables['classes']) . '"' . backdrop_attributes($variables['attributes']) . '>' . $output . '</div>';

  return $output;
}
