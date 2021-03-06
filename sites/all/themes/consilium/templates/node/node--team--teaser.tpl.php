<div id="node-<?php print $node->nid; ?>" class="consilium-team <?php print $classes; ?> clearfix"<?php print $attributes; ?>>
    <div class="slide-item-wrap">
        <div class="slide-item-image clearfix">
            <?php print render($content['field_image']); ?>
            <i class="circle-border"></i>
        </div>
        <div class="slide-item-desc-warp">
            <div class="slide-inner">
                <div class="slide-item-title clearfix">
                    <h3 class="block-title header"><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
                    <span class="position"><?php print render($content['field_job_title']); ?></span>
                </div>
                <div class="slide-item-desc">
                    <?php print render($content['body']); ?>
                </div>
                <div class="user-social">
                    <?php print render($content['field_social_links']); ?>
                </div>
            </div>
        </div>
    </div>
</div>