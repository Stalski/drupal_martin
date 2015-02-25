<?php
/**
 * Header template for bootstrap carousel.
 */

$carousel_id = "genericHeader";
?>

<div id="<?php print $carousel_id ?>" class="carousel slide clearfix" data-ride="carousel">
  <!-- Indicators -->
  <ol class="carousel-indicators">
    <?php foreach ($items as $delta => $item): ?>
    <li data-target="#<?php print $carousel_id ?>" data-slide-to="<?php print $delta ?>"<?php print $delta == 0 ? ' class="active"' : ''; ?>></li>
    <?php endforeach; ?>
  </ol>

  <div class="carousel-inner" role="listbox">
    <?php foreach ($items as $delta => $item): ?>
    <div class="item<?php print $delta == 0 ? ' active' : ''; ?>">
      <?php print $item['image']; ?>
      <div class="container">
        <?php if ($item['small_image']) : ?>
        <div class="carousel-caption-left">
          <?php print $item['small_image']; ?>
        </div>
        <?php endif; ?>
        <div class="carousel-caption">
          <h1><?php print $item['title']; ?></h1>
          <?php print $item['message']; ?>
          <div class="button-group">
            <?php print $item['link']; ?>
          </div>
        </div>
      </div>
    </div>
    <?php endforeach; ?>


  </div>

  <a class="left carousel-control" href="<?php print $GLOBALS['base_url']; ?>/#<?php print $carousel_id ?>" data-slide="prev">‹</a>
  <a class="right carousel-control" href="<?php print $GLOBALS['base_url']; ?>/#<?php print $carousel_id ?>"  data-slide="next">›</a>
</div>
