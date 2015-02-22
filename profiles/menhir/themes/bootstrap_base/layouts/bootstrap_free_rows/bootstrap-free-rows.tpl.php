<?php
/**
 * @file
 * Template for multi rows page.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display clearfix">

  <div class="row container-fluid">
    <?php print $content['row_header']; ?>
  </div>

  <div class="row container-fluid">
    <?php print $content['row_content_1']; ?>
  </div>

  <div class="row container-fluid">
    <?php print $content['row_content_2']; ?>
  </div>

  <div class="row container-fluid">
    <?php print $content['row_content_3']; ?>
  </div>

  <div class="row container-fluid">
    <?php print $content['row_content_4']; ?>
  </div>

  <div class="row container-fluid">
    <?php print $content['row_content_5']; ?>
  </div>

  <div class="row container-fluid">
    <?php print $content['row_content_6']; ?>
  </div>

  <div class="row container-fluid">
    <?php print $content['row_footer']; ?>
  </div>

</div>
