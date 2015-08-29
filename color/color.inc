<?php

// Put the logo path into JavaScript for the live preview.
backdrop_add_js(array('color' => array('logo' => theme_get_setting('logo', 'bartik'))), 'setting');

$info = array(
  // Available colors and color labels used in theme.
  'fields' => array(
    'header' => t('Header background'),
    'main' => t('Main background'),
    'sidebar' => t('Sidebar background'),
    'article' => t('Article background'),
    'articleborder' => t('Article borders'),
    'footer' => t('Footer background'),
    'titleslogan' => t('Title and slogan'),
    'text' => t('Text color'),
    'link' => t('Link color'),
  ),
  // Pre-defined color schemes.
  'schemes' => array(
    'default' => array(
      'title' => t('Bolder (default)'),
      'colors' => array(
        'header' => '#ffffff',
        'main' => '#f4ca16',
        'sidebar' => '#a7c629',
        'article' => '#ffffff',
        'articleborder' => '#dcb316',
        'footer' => '#292929',
        'titleslogan' => '#2a320c',
        'text' => '#2a320d',
        'link' => '#2a320e',
      ),
    ),
    'thisyear' => array(
      'title' => t('This year'),
      'colors' => array(
        'header' => '#fdfdfd',
        'main' => '#f1f1f1',
        'sidebar' => '#fefefe',
        'article' => '#ffffff',
        'articleborder' => '#cccccc',
        'footer' => '#1f1d1c',
        'titleslogan' => '#fffeff',
        'text' => '#3b3b3b',
        'link' => '#3b3b3b',
      ),
    ),
    'present' => array(
      'title' => t('Present'),
      'colors' => array(
        'header' => '#fdfdfd',
        'main' => '#a6ab90',
        'sidebar' => '#e3e6ca',
        'article' => '#ffffff',
        'articleborder' => '#91957f',
        'footer' => '#1f1d1c',
        'titleslogan' => '#fffeff',
        'text' => '#363730',
        'link' => '#363730',
      ),
    ),
  ),

  // CSS files (excluding @import) to rewrite with new color scheme.
  'css' => array(
    'css/colors.css',
  ),

  // Files to copy.
  'copy' => array(),

  // Gradient definitions.
  'gradients' => array(),

  // Color areas to fill (x, y, width, height).
  'fill' => array(),

  // Coordinates of all the theme slices (x, y, width, height)
  // with their filename as used in the stylesheet.
  'slices' => array(),

  // Reference color used for blending. Matches the base.png's colors.
  'blend_target' => '#ffffff',

  // Preview files.
  'preview_css' => 'color/preview.css',
  'preview_js' => 'color/preview.js',
  'preview_html' => 'color/preview.html',

  // Base file for image generation.
  'base_image' => 'color/base.png',
);
