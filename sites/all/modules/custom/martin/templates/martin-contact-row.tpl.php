<?php
?>
<div class="row">
  
    <div class="col-md-6">
        
        <h2 class="page-header"><?php print t('Contact ARISMA Projects'); ?></h2>
      
    </div>
  
    <div class="col-md-6">
      <div class="contact-info">
        <div class="tel contact-info-item"><?php print t($tel); ?></div>
        <div class="email contact-info-item"><?php print t($email); ?></div>
        <div class="linkedin contact-info-item"><a href="<?php print $linkedin['url']; ?>"><?php print $linkedin['title']; ?></a></div>
      </div>
    </div>
    
</div>

