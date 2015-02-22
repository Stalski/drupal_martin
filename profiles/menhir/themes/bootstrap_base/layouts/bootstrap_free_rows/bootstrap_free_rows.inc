<?php
// Plugin definition
$plugin = array(
  'title' => t('Bootstrap free rows page'),
  'icon' => 'bootstrap_free_rows.png',
  'category' => t('Custom bootstrap'),
  'theme' => 'bootstrap-free-rows',
  'regions' => array(
    'row_header' => t('Header row'),
    'row_content_1' => t('Content row 1'),
    'row_content_2' => t('Content row 2'),
    'row_content_3' => t('Content row 3'),
    'row_content_4' => t('Content row 4'),
    'row_content_5' => t('Content row 5'),
    'row_content_6' => t('Content row 6'),
    'row_footer' => t('Footer row'),
  ),
);
