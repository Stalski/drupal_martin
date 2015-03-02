<?php
// Plugin definition
$plugin = array(
  'title' => t('Bootstrap Home page'),
  'icon' => 'bootstrap_home.png',
  'category' => t('Custom bootstrap driven Homepage layout'),
  'css' => 'bootstrap-home.css',
  'theme' => 'bootstrap-home',
  'regions' => array(
    'row_header' => t('Header row: Highlight'),
    'row_content_1' => t('Content row 1: Featured views'),
    'row_content_2' => t('Content row 2: Featured views'),
    'row_content_3' => t('Content row 3: Contact (blue)'),
    'row_content_4a' => t('Content row 4a: Left column (black)'),
    'row_content_4b' => t('Content row 4b: Right column (black)'),
    'row_content_5' => t('Content row 5'),
    'row_content_6' => t('Content row 6: Testimonials'),
    'row_content_7' => t('Content row 7: client logo row'),
    'row_footer' => t('Footer row'),
  ),
);
