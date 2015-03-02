<?php
  $right_col = 8;
  if (empty($content['left'])) {
    $right_col = 12;
  }
?>

<div class="row">
  <?php if (!empty($content['left'])): ?>
  <div class="region region-sidebar-first col-md-4 col-lg-4">
    <?php print $content['left']; ?>
  </div>
  <?php endif; ?>
  
  <div class="region region-content col-xs-12 col-sm-12 col-md-<?php print $right_col; ?> col-lg-<?php print $right_col; ?>">
    <?php print $content['right']; ?>
  </div>
  
</div>
