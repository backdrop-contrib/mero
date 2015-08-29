
(function ($) {
  Backdrop.color = {
    logoChanged: false,
    callback: function(context, settings, form, farb, height, width) {
      // Change the logo to be the real one.
      if (!this.logoChanged) {
        $('#preview #preview-logo img').attr('src', Backdrop.settings.color.logo);
        this.logoChanged = true;
      }
      // Remove the logo if the setting is toggled off. 
      if (Backdrop.settings.color.logo == null) {
        $('div').remove('#preview-logo');
      }

      // Text preview.
      $('#preview #preview-main h2, #preview .preview-content', form).css('color', $('#palette input[name="palette[text]"]', form).val());
      $('#preview #preview-content a', form).css('color', $('#palette input[name="palette[link]"]', form).val());

      // Sidebar.
      $('#preview #preview-sidebar', form).css('background-color', $('#palette input[name="palette[sidebar]"]', form).val());
      
      // Main
      $('#preview #preview-content', form).css('background-color', $('#palette input[name="palette[main]"]', form).val());

      // Article
      $('#preview #preview-node', form).css('background-color', $('#palette input[name="palette[article]"]', form).val());

      // Article border
      $('#preview #preview-node, #preview #preview-main, #preview #preview-content', form).css('border-color', $('#palette input[name="palette[articleborder]"]', form).val());

      // Header background.
      $('#preview #preview-header', form).css('background-color', $('#palette input[name="palette[header]"]', form).val());

      // Footer wrapper background.
      $('#preview #preview-footer-wrapper', form).css('background-color', $('#palette input[name="palette[footer]"]', form).val());


      $('#preview #preview-site-name', form).css('color', $('#palette input[name="palette[titleslogan]"]', form).val());
    }
  };
})(jQuery);
