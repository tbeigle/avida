<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */
?>
<div id="page-wrapper">
  <div class="inner row">
    <?php if ($logo || $page['logo'] || $page['header'] || $page['nav']): ?>
      <header id="header" class="page-header row clearfix">
        <?php if ($logo || $page['logo'] || $page['header']): ?>
          <div class="row clearfix header-logo-region">
            <div class="row clearfix logo-row">
              <?php if ($logo || $page['logo']): ?>
                <div class="header-top">
                  <div class="inner container">
                    <?php if ($logo && !$page['logo']): ?>
                      <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
                        <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
                      </a>
                    <?php endif; ?>
                    
                    <?php if ($page['logo']): ?>
                      <?php print render($page['logo']); ?>
                    <?php endif; ?>
                  </div> <!-- /.inner /.container -->
                </div> <!-- /.header-top -->
              <?php endif; ?>
              
              <?php if ($page['header']): ?>
                <div id="region-header-wrapper" class="header-secondary">
                  <?php print render($page['header']); ?>
                </div> <!-- /#region-header-wrapper /.header-secondary -->
              <?php endif; ?>
            </div> <!-- /.row /.clearfix /.logo-row -->
          </div> <!-- /.row /.clearfix /.header-logo-region -->
        <?php endif; ?>
        
        <?php if ($page['nav']): ?>
          <div class="row clearfix nav-region">
            <nav id="primary-navigation" class="nav clearfix row">
              <?php if ($page['nav']): ?>
                <?php print render($page['nav']); ?>
              <?php endif; ?>
            </nav>
            <!-- /#primary-navigation /.nav /.clearfix /.row -->
          </div> <!-- /.row /.clearfix /.nav-region -->
        <?php endif; ?>
      </header> <!-- /#header /.page-header /.row /.clearfix -->
    <?php endif; ?>
    
    <?php if ($breadcrumb && $show_breadcrumb): ?>
      <div id="breadcrumb" class="row clearfix">
        <div class="row clearfix">
          <?php print $breadcrumb; ?>
        </div> <!-- /.row /.clearfix -->
      </div> <!-- /#breadcrumb /.row /.clearfix -->
    <?php endif; ?>
    
    <?php if (!empty($messages)): ?>
      <div id="page-messages-wrapper" class="row clearfix">
        <div class="row clearfix">
          <?php print $messages; ?>
        </div> <!-- /.row /.clearfix -->
      </div> <!-- /#page-messages-wrapper /.clearfix -->
    <?php endif; ?>
    
    <div id="main-wrapper" class="row clearfix">
      <?php if ($tabs || !empty($page['help'])): ?>
        <div id="page-tabs-and-help" class="row clearfix">
          <?php if ($tabs): ?>
            <div class="tabs"><?php print render($tabs); ?></div>
          <?php endif; ?>
          
          <?php if (!empty($page['help'])): ?>
            <?php print render($page['help']); ?>
          <?php endif; ?>
          
          <?php if ($action_links): ?>
            <ul class="action-links">
              <?php print render($action_links); ?>
            </ul>
          <?php endif; ?>
        </div> <!-- /#page-tabs-and-help /.row /.clearfix -->
      <?php endif; ?>
      
      <div id="main" class="row clearfix">
        <?php if ($page['sidebar_first']): ?>
          <div id="page-sidebar-first" class="column">
            <?php print render($page['sidebar_first']); ?>
          </div> <!-- /#page-sidebar-first /.column -->
        <?php endif; ?>
        
        <div id="content-wrapper" class="column">
          <a id="main-content"></a>
          
          <?php if ($page['content_top'] || $title): ?>
            <div id="page-content-top" class="row clearfix">
              <?php print render($title_prefix); ?>
              <?php if ($title): ?><h1 class="title" id="page-title"><?php print $title; ?></h1><?php endif; ?>
              <?php print render($title_suffix); ?>
              
              <?php if ($page['content_top']): ?>
                <?php print render($page['content_top']); ?>
              <?php endif; ?>
            </div> <!-- /#page-content-top /.row /.clearfix -->
          <?php endif; ?>
          
          <div id="content" class="row clearfix">
            <?php print render($page['content']); ?>
            <?php print $feed_icons; ?>
          </div> <!-- /#content /.row /.clearfix -->
          
          <?php if ($page['content_bottom']): ?>
            <div id="page-conent-bottom" class="row clearfix">
              <?php print render($page['content_bottom']); ?>
            </div> <!-- /#page-content-bottom /.row /.clearfix -->
          <?php endif; ?>
        </div> <!-- /#content-wrapper /.column -->
        
        <?php if ($page['sidebar_second']): ?>
          <div id="page-sidebar-second" class="column">
            <?php print render($page['sidebar_second']); ?>
          </div> <!-- /#page-sidebar-second /.column -->
        <?php endif; ?>
      </div> <!-- #main /.row /.clearfix -->
    </div> <!-- /#main-wrapper /.row /.clearfix -->
  </div> <!-- /.inner /.row -->
</div> <!-- /#page-wrapper -->

<?php if ($page['footer'] || !empty($site_footer)): ?>
  <footer id="footer" class="clearfix container">
    <div class="row clearfix">
      <?php if ($page['footer']): ?>
        <div class="column right footer-column">
          <?php print render($page['footer']); ?>
        </div> <!-- /.column /.right /.footer-column -->
      <?php endif; ?>
      
      <?php if (!empty($site_footer)): ?>
        <div class="column left footer-column copyright-footer">
          &copy; <?php print date('Y'); ?> <?php print $site_footer; ?>
        </div> <!-- /.column /.left /.footer-column /.copyright-footer -->
      <?php endif; ?>
    </div> <!-- /.row /.clearfix -->
  </footer> <!-- /#footer /.row /.clearfix -->
<?php endif; ?>
