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

<div class="clearfix">

  <div class="container-fluid row-content-header">
    <div class="container">
    <?php print $content['row_header']; ?>
    </div>
  </div>

  <div class="container-fluid row-content-1">
    <div class="container">
    <?php print $content['row_content_1']; ?>
    </div>
  </div>

  <div class="container-fluid row-content-2">
    <div class="container">
    <?php print $content['row_content_2']; ?>
    </div>
  </div>

  <div class="container-fluid row-content-3">
    <div class=" container">
    <?php print $content['row_content_3']; ?>
    </div>
  </div>

  <div class="container-fluid row-content-4">
    <div class="container">
      <div class="row">
        <div class="col-md-6 col-sm-12">
          <?php print $content['row_content_4a']; ?>
        </div>
        
        <div class="col-md-6 col-sm-12">
          <?php print $content['row_content_4b']; ?>
        </div>
      </div>
    </div>
  </div>

  <div class="container-fluid row-content-5">
    <div class="container">
    <?php print $content['row_content_5']; ?>
    </div>
  </div>

  <div class="container-fluid row-content-6 hidden-xs">
    <div class="container">
    <?php print $content['row_content_6']; ?>
    </div>
  </div>

  <div class="container-fluid row-content-7 hidden-xs hidden-sm">
    <div class="container">
    <?php print $content['row_content_7']; ?>
    </div>
  </div>

  <div class="container-fluid row-content-footer">
    <div class="container">
    <?php print $content['row_footer']; ?>
    </div>
  </div>

</div>
