<?php
  $left_col = 9;
  if (empty($content['right'])) {
    $left_col = 12;
  }
?>

<div class="row">
  <div class="region region-content col-md-<?php print $left_col; ?> col-lg-<?php print $left_col; ?>">
    <?php print $content['left']; ?>
  </div>
  <?php if (!empty($content['right'])): ?>
  <div class="region region-sidebar-second col-xs-12 col-sm-12 col-md-3 col-lg-3">
    <?php print $content['right']; ?>
  </div>
  <?php endif; ?>
</div>
