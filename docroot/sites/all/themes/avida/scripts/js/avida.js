(function($) {
  // Common JS
  Drupal.behaviors.avida = {
    attach: function (context, settings) {
      var window_width = $(window).width();
      
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
      
      // Nav dropdowns
      if (window_width > 530) {
        $('#primary-navigation .content > .menu > li')
        .mouseenter(function() {
          if ($(this).children('.menu').length) {
            $(this).children('.menu').slideDown(150);
          }
        })
        .mouseleave(function() {
          if ($(this).children('.menu').length) {
            $(this).children('.menu').slideUp(150);
          }
        });
      }
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
    }
  }
})(jQuery);
