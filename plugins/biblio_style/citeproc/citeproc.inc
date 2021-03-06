<?php

if (module_exists('libraries') && file_exists(libraries_get_path('citeproc-php') . '/CiteProc.php')) {
  $plugin = array(
    'title' => t('CiteProc'),
    'description' => t('CiteProc styles.'),
    'class' => 'BiblioStyleCiteProc',
    'options' => array(
      // Default values.
      'style_name' => 'chicago-author-date',
      // Allow settings the path to custom CSL styles (should include the .csl
      // extension). If the style exists in the "styles" library, set the style
      // path to the that library. Else set the path to the "style" folder in
      // the "citeproc-php" library.
      'style_path' => file_exists(libraries_get_path('styles') . '/chicago-author-date.csl') ? libraries_get_path('styles') : libraries_get_path('citeproc-php') . '/style',
      // Link to the biblio.
      'label_as_link' => TRUE,
    ),
    'export' => array(
      'citeproc' => array(
        'name' => t('Citeproc'),
        'file extension' => 'csl',
      ),
    ),
  );
}
