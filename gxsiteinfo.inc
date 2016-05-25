<?php

class gxSiteData {
	public $site_name;
	public $site_description;

	public function gxSetSiteData( $site_name, $site_description ) {
		$this -> site_name = $site_name;
		$this -> site_description = $site_descrition ;	
	}

	public function gxDisplaySiteData() {
		echo $this -> site_name;
	}

}
?>