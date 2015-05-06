/**
 * @file tcs_content.js
 *
 * Custom JS for the Content stream
 */
(function($) {
  Drupal.behaviors.tcs_content = {
    attach: function (context, settings) {
      // When the feed item title is clicked, also toggle the button icon
      $('.field-name-title h2').click(function() {
        $(this).parents('.group-header').children('.field-name-feed-item-toggle').find('button').toggleClass('collapsed');
      });
    }
  };
})(jQuery);

