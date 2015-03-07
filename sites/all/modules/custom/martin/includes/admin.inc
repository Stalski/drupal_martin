<?php


function martin_settings_form() {
  
  $form = array();
  
  $form['contact'] = array(
    '#type' => 'fieldset',
    '#title' => t('contact'),
  );
  $form['contact']['site_tel'] = array(
    '#type' => 'textfield',
    '#title' => t('Site mobile number'),
    '#default_value' => variable_get('site_tel', ''),
  );
  $form['contact']['site_email'] = array(
    '#type' => 'textfield',
    '#title' => t('Site Email'),
    '#default_value' => variable_get('site_email', ''),
  );
  $form['contact']['site_email_mailto'] = array(
    '#type' => 'checkbox',
    '#title' => t('Make it a mailto: link'),
    '#description' => t('This is certainly not recommended! It opens a mail client on the client computer, which a lot of people dont have installed.'),
    '#default_value' => variable_get('site_email_mailto'),
  );
  $form['contact']['site_linkedin_text'] = array(
    '#type' => 'textfield',
    '#title' => t('Linked-in Text'),
    '#default_value' => variable_get('site_linkedin_text', ''),
  );
  $form['contact']['site_linkedin_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Linked-in Url'),
    '#default_value' => variable_get('site_linkedin_url', ''),
  );
  $form['contact']['site_skype_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Skype ID'),
    '#default_value' => variable_get('site_skype_id', ''),
  );
  
  /*$languages = language_list();
  foreach ($languages as $language) {
    
  }*/
  
  return system_settings_form($form);
  
}
