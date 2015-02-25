<?php
/**
 *
 */
?>
<header id="navbar" role="banner">

  <div class="container">
    <div class="navbar-header clearfix">
      
      <?php if (!empty($primary_nav)): ?>
      <div id="main-menu" class="navbar-collapse collapse">
        <nav role="navigation">
          <?php if (!empty($primary_nav)): ?>
            <?php print render($primary_nav); ?>
          <?php endif; ?>
        </nav>
      </div>
      <?php endif; ?>

      <?php if ($logo): ?>
      <figure class="logo">
        <?php if($is_front): ?>
        <img src="/<?php print path_to_theme() . '/logo.png'; ?>" alt="<?php print t('Home'); ?>" />
        <?php else: ?>
          <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home">
            <img src="/<?php print path_to_theme() . '/logo.png'; ?>" alt="<?php print t('Home'); ?>" />
          </a>
        <?php endif; ?>
      </figure>
      <?php endif; ?>

    </div>
  </div>

  <?php if (!empty($header_carousel)) : ?>
    <?php print $header_carousel; ?>
  <?php endif; ?>

</header>

<div class="main-container container">

  <header role="banner" id="page-header">
    <?php if (!empty($site_slogan)): ?>
      <p class="lead"><?php print $site_slogan; ?></p>
    <?php endif; ?>

    <?php print render($page['header']); ?>
  </header> <!-- /#page-header -->

  <div class="row">

    <?php if (!empty($page['sidebar_first'])): ?>
      <aside class="col-sm-3" role="complementary">
        <?php print render($page['sidebar_first']); ?>
      </aside>  <!-- /#sidebar-first -->
    <?php endif; ?>

    <section<?php print $content_column_class; ?>>
      <?php if (!empty($page['highlighted'])): ?>
        <div class="highlighted jumbotron"><?php print render($page['highlighted']); ?></div>
      <?php endif; ?>
      <?php
      if (!empty($breadcrumb)): print $breadcrumb; endif;
      ?>
      <a id="main-content"></a>
      <?php print render($title_prefix); ?>
      <?php if (!empty($title)): ?>
        <h1 class="page-header"><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php print $messages; ?>
      <?php if (!empty($tabs)): ?>
        <?php print render($tabs); ?>
      <?php endif; ?>
      <?php if (!empty($page['help'])): ?>
        <?php print render($page['help']); ?>
      <?php endif; ?>
      <?php if (!empty($action_links)): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
    </section>

    <?php if (!empty($page['sidebar_second'])): ?>
      <aside class="col-sm-3" role="complementary">
        <?php print render($page['sidebar_second']); ?>
      </aside>  <!-- /#sidebar-second -->
    <?php endif; ?>

  </div>
</div>
<footer class="footer">
  <div class="container">
    <?php print render($page['footer']); ?>

    <?php if (!empty($footer_nav)): ?>
    <nav class="doormat-menu" role="navigation">
      <?php if (!empty($footer_nav)): ?>
        <?php print render($footer_nav); ?>
      <?php endif; ?>
    </nav>
    <?php endif; ?>

    <p class="footer-link">Website by <a href="http://www.menhir.be">Menhir</a></p>
  </div>
</footer>
