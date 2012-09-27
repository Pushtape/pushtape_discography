<?php

/**
 * Renderer class for all In-Place Editor (IPE) Plus behavior.
 */
class panels_renderer_ipep extends panels_renderer_ipe {  
  function add_meta() {
    parent::add_meta();
    
    // @todo this actually should be an IPE setting instead.
    if (user_access('create track content')) {
      $button = array(
        '#type' => 'link',
        '#title' => t('Add more content'),
      	'#module' => 'pushtape_discography',
        '#href' => 'node/add/panopoly-news-article',
        '#id' => 'panels-ipe-add-new-content',
        '#attributes' => array(
          'class' => array('panels-ipe-add-content', 'panels-ipe-pseudobutton'),
        ),
        // @todo eventually put this in ctools popup with selection for all content types
        //'#ajax' => array(
        //  'progress' => 'throbber',
        //  'ipe_cache_key' => $this->clean_key,
        //),
          '#prefix' => '<div class="panels-ipe-pseudobutton-container">',
          '#suffix' => '</div>',
        );
      
      panels_ipe_toolbar_add_button($this->clean_key, 'panels-ipe-add-content', $button);
    }
    
    // @todo probably need a configure app permission?
    if (user_access('administer site')) {
      $button = array(
        '#type' => 'link',
        '#title' => t('Configure Pushtape Disography'),
      	'#module' => 'pushtape_discography',
        '#href' => $this->get_url('apps_config_form'),
        '#id' => 'panels-ipe-configure-app',
        '#attributes' => array(
          'class' => array('panels-ipe-startedit', 'panels-ipe-pseudobutton'),
        ),
        '#ajax' => array(
          'progress' => 'throbber',
          'ipe_cache_key' => $this->clean_key,
        ),
          '#prefix' => '<div class="panels-ipe-pseudobutton-container">',
          '#suffix' => '</div>',
        );
      
      panels_ipe_toolbar_add_button($this->clean_key, 'panels-ipe-configure-app', $button);
    }
    
    ctools_add_css('pushtape_discography', 'pushtape_discography');
  }
  
  function ajax_apps_config_form($pid = NULL) {
    // @todo: proper locking 
    
    $form_state = array(
      'display' => &$this->display,
      'pane' => &$pane,
      'ajax' => TRUE,
      'title' => t('Configure Pushtape Disography'),
    );
    
    $builder = array();
    $builder = array(
    	'command' => 'modal_display',
			'title' => t('Configure Pushtape Disography'),
			'output' => '',
    );
    
    // Apps power
    module_load_include('inc', 'apps', 'apps.manifest');
    $apps = apps_apps('panopoly_apps', array('machine_name' => 'pushtape_discography'));
    $app = $apps['pushtape_discography'];
    
    if (apps_app_callback($app, "demo content enable callback")) {
      $form_state['build_info']['args'] = array($app);
      $form = array_shift(ctools_modal_form_wrapper('apps_demo_content_form', $form_state));
      $builder['output'] .= $form['output'];
    }
    
    if ($form = apps_app_callback($app, "configure form")) {
      $form = array_shift(ctools_modal_form_wrapper($form, $form_state));
      $builder['output'] .= $form['output'];
    }

    if (empty($form_state['executed'])) {
      $output = array();
      $output[] = $builder;
      $this->commands = $output;
      return;
    } 
  
    panels_edit_cache_set($this->cache);
    $this->command_update_pane($pid);
    $this->commands[] = ctools_modal_command_dismiss();
    $this->commands[] = ctools_ajax_command_reload(); 
  }
}
