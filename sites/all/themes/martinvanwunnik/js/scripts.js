
var Drupal = Drupal || {};
Drupal.mainNav = Drupal.mainNav || {};

(function($, Drupal){
  "use strict";

  Drupal.behaviors.martinInit = {
    attach: function(context) {
      
      // Calculate heights for testimonials.
      if ($('.testimonial-wrapper').length) {
        Drupal.calculateEqualHeights('.testimonial-text');
      }
      
      // Add the prev/next behavior to the genericHeader.
      $(context).find('#genericHeader').once('header-carousels', function () {

        $('.carousel-control.left').click(function() {
          $('#genericHeader').carousel('prev');
        });

        $('.carousel-control.right').click(function() {
          $('#genericHeader').carousel('next');
        });

      });
      
      // Alter the main navigation for mobile devices.
      Drupal.mainNav.wrapper = $('#main-menu');
      Drupal.mainNav.wrapper.prepend('<a class="nav-toggle" href="#" title="Main navigation toggle">Menu</a>');

      Drupal.mainNav.menu = $('.menu', Drupal.mainNav.wrapper);
      Drupal.mainNav.toggle = $('.nav-toggle');

      Drupal.mainNav.toggle.bind('click', function(e) {
        e.preventDefault();

        Drupal.mainNav.menu.slideToggle();

      });
      
    }
  };
  
  Drupal.calculateEqualHeights = function(container) {

    var currentTallest = 0;
    var currentRowStart = 0;
    var rowDivs = new Array();
    var $el;
    var topPosition = 0;
    $(container).each(function() {

       $el = $(this);
       $($el).height('auto')
       topPosition = $el.position().top;

       if (currentRowStart != topPosition) {
         for (var currentDiv = 0 ; currentDiv < rowDivs.length ; currentDiv++) {
           rowDivs[currentDiv].height(currentTallest);
         }
         rowDivs.length = 0; // empty the array
         currentRowStart = topPosition;
         currentTallest = $el.height();
         rowDivs.push($el);
       } else {
         rowDivs.push($el);
         currentTallest = (currentTallest < $el.height()) ? ($el.height()) : (currentTallest);
      }
       for (currentDiv = 0 ; currentDiv < rowDivs.length ; currentDiv++) {
         rowDivs[currentDiv].height(currentTallest);
       }
     });
     
  };


})(jQuery, Drupal);