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

  <?php if ($content['row_header']): ?>
  <div class="container-fluid row-content-header">
    <div class=" container">
    <?php print $content['row_header']; ?>
    </div>
  </div>
  <?php endif; ?>

  <div class="container-fluid row-content-1">
    <div class=" container">
    <?php print $content['row_content_1']; ?>
    </div>
  </div>
 
  <?php if ($content['row_content_2']): ?>
  <div class="container-fluid row-content-2">
    <div class=" container">
    <?php print $content['row_content_2']; ?>
    </div>
  </div>
  <?php endif; ?>

  <div class="container-fluid row-content-footer">
    <div class="container">
      <div class="row">
        <div class="col-md-6">
          <?php print l(t('Contact Martin van Wunnik'), 'contact', array('attributes' => array('class' => array('contact-link')))); ?>
        </div>
        <div class="col-md-6">
          <?php print l(t('Visit the linkedIn page'), variable_get('site_linkedin_url'), array('absolute' => TRUE, 'attributes' => array('class' => array('linkedin-link')))); ?>
        </div>
      </div>
      
      <?php print $content['row_footer']; ?>
      
    </div>
  </div>

</div>
