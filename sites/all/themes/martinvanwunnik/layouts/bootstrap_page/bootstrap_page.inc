<?php
// Plugin definition
$plugin = array(
  'title' => t('Bootstrap Default page'),
  //'icon' => 'bootstrap_home.png',
  'category' => t('Custom bootstrap driven page layout'),
  'css' => 'bootstrap-page.css',
  'theme' => 'bootstrap-page',
  'regions' => array(
    'row_header' => t('Header row: Highlight'),
    'row_content_1' => t('Content row 1'),
    'row_content_2' => t('Content row 2'),
    'row_footer' => t('Footer row'),
  ),
);
