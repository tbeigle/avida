(function($) {
  // Common JS
  Drupal.behaviors.avida = {
    attach: function (context, settings) {
      // Vertical scrolling links
      $('a[href*=#]:not([href=#])').click(function() {
        if (location.pathname.replace(/^\//,'') == this.pathname.replace(/^\//,'') && location.hostname == this.hostname) {
          var target = $(this.hash);
          target = target.length ? target : $('[name=' + this.hash.slice(1) +']');
          if (target.length) {
            $('html,body').animate({
              scrollTop: target.offset().top
            }, 1000);
            return false;
          }
        }
      });
    }
  }
  
  // Mobile JS
  Drupal.behaviors.avidaMobile = {
    attach: function(context, settings) {
      var window_width = $(window).width(),
          width_cutoff = 400,
          dur_mobile_expand = 200,
          class_mobile_expanded = 'mobile-expanded';
      
      // Mobile navigation
      $('.mobile-title.block-menu').each(function() {
        var $this = $(this),
            $title = $this.find('.block-title'),
            $menu = $this.find('.content > ul.menu');
        
        $title.click(function() {
          $menu.slideToggle(dur_mobile_expand);
          $this.toggleClass(class_mobile_expanded);
          return false;
        });
      });
      
      // Footer quick links
      $('.footer-nav .content > .menu > li').addClass('top-level');
      $('.footer-nav .content > .menu > li:first-child').removeClass('top-level').addClass('top-level-first').children('.menu').addClass('top-level');
      if (window_width <= width_cutoff) {
        $('.footer-nav .top-level-first').css({'cursor': 'pointer'}).click(function() {
          $('.footer-nav .top-level').slideToggle(dur_mobile_expand);
        });
      }
    }
  }
})(jQuery);
