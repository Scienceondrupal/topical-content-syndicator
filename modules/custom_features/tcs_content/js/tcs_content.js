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
      // Set the default text of View: list_feed_items filter text box.
      var default_text = 'Your search terms…';
      $list_feed_items_form = $('form#views-exposed-form-list-feed-items-homepage');
      $list_feed_items_filter = $list_feed_items_form.find('input#edit-filter');
      // Set the default text, only if it's blank.
      if ('' == $list_feed_items_filter.val()) {
        $list_feed_items_filter.val(default_text);
      }
      // On click, remove default text if default text is the value.
      $list_feed_items_filter.click(function() {
        if (default_text == $list_feed_items_filter.val()) {
          $list_feed_items_filter.val('');
        }
      });
      // On blur, if text is empty, set as default text.
      $list_feed_items_filter.blur(function() {
        if ('' == $list_feed_items_filter.val()) {
          $list_feed_items_filter.val(default_text);
        }
      });
      // On submit, if default text, set to empty string.
      $list_feed_items_form.submit(function() {
        if (default_text == $list_feed_items_filter.val()) {
          $list_feed_items_filter.val('');
        }
      });
    }
  };
})(jQuery);

