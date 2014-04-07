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
      var dur_mobile_expand = 200,
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
