<?php

class gxSiteData {
	public $site_name;
	public $site_description;
	public $site_color;
	public $site_backgroundColor;

	public function gxSetSiteData( $site_name, $site_description ) {
		$this -> site_name = $site_name;
		$this -> site_description = $site_descrition ;	
	}

	public function gxDisplaySiteData() {
		echo $this -> site_name;
		echo $this -> gxBNav();
	}

	
	public function gxBNav() {
	echo "
    <nav class='navbar navbar-default navbar-fixed-top'>
      <div class='container'>
        <div class='navbar-header'>
          <button type='button' class='navbar-toggle collapsed' data-toggle='collapse' data-target='#navbar' aria-expanded='false' aria-controls='navbar'>
            <span class='sr-only'>Toggle navigation</span>
            <span class='icon-bar'></span>
            <span class='icon-bar'></span>
            <span class='icon-bar'></span>
          </button>
          <a class='navbar-brand' href='#'> " . $this-> site_name . "</a>
        </div>
        <div id='navbar' class='navbar-collapse collapse'>
          <ul class='nav navbar-nav'>
            <li class='active'><a href='#'>Home</a></li>
            <li><a href='#about'>About</a></li>
            <li><a href='#contact'>Contact</a></li>
            <li class='dropdown'>
              <a href='#' class='dropdown-toggle' data-toggle='dropdown' role='button' aria-haspopup='true' aria-expanded='false'>Dropdown <span class='caret'></span></a>
              <ul class='dropdown-menu'>
                <li><a href='#'>Action</a></li>
                <li><a href='#'>Another action</a></li>
                <li><a href='#'>Something else here</a></li>
                <li role='separator' class='divider'></li>
                <li class='dropdown-header'>Nav header</li>
                <li><a href='#'>Separated link</a></li>
                <li><a href='#'>One more separated link</a></li>
              </ul>
            </li>
          </ul>
          <ul class='nav navbar-nav navbar-right'>
            <li><a href='../navbar/'>Default</a></li>
            <li><a href='../navbar-static-top/'>Static top</a></li>
            <li class='active'><a href='./'>Fixed top <span class='sr-only'>(current)</span></a></li>
          </ul>
        </div><!--/.nav-collapse -->
      </div>
    </nav>";

	}


public function gxBCSS() {
echo ".navbar-default {
  background-color: #4359cc;
  border-color: #073552;
}
.navbar-default .navbar-brand {
  color: #ff0000;
}
.navbar-default .navbar-brand:hover,
.navbar-default .navbar-brand:focus {
  color: #bbae00;
}
.navbar-default .navbar-text {
  color: #ffffff;
}
.navbar-default .navbar-nav > li > a {
  color: #ffffff;
}
.navbar-default .navbar-nav > li > a:hover,
.navbar-default .navbar-nav > li > a:focus {
  color: #bbae00;
}
.navbar-default .navbar-nav > li > .dropdown-menu {
  background-color: #4359cc;
}
.navbar-default .navbar-nav > li > .dropdown-menu > li > a {
  color: #ffffff;
}
.navbar-default .navbar-nav > li > .dropdown-menu > li > a:hover,
.navbar-default .navbar-nav > li > .dropdown-menu > li > a:focus {
  color: #bbae00;
  background-color: #073552;
}
.navbar-default .navbar-nav > li > .dropdown-menu > li > .divider {
  background-color: #073552;
}
.navbar-default .navbar-nav .open .dropdown-menu > .active > a,
.navbar-default .navbar-nav .open .dropdown-menu > .active > a:hover,
.navbar-default .navbar-nav .open .dropdown-menu > .active > a:focus {
  color: #bbae00;
  background-color: #073552;
}
.navbar-default .navbar-nav > .active > a,
.navbar-default .navbar-nav > .active > a:hover,
.navbar-default .navbar-nav > .active > a:focus {
  color: #bbae00;
  background-color: #073552;
}
.navbar-default .navbar-nav > .open > a,
.navbar-default .navbar-nav > .open > a:hover,
.navbar-default .navbar-nav > .open > a:focus {
  color: #bbae00;
  background-color: #073552;
}
.navbar-default .navbar-toggle {
  border-color: #073552;
}
.navbar-default .navbar-toggle:hover,
.navbar-default .navbar-toggle:focus {
  background-color: #073552;
}
.navbar-default .navbar-toggle .icon-bar {
  background-color: #ffffff;
}
.navbar-default .navbar-collapse,
.navbar-default .navbar-form {
  border-color: #ffffff;
}
.navbar-default .navbar-link {
  color: #ffffff;
}
.navbar-default .navbar-link:hover {
  color: #bbae00;
}

@media (max-width: 767px) {
  .navbar-default .navbar-nav .open .dropdown-menu > li > a {
    color: #ffffff;
  }
  .navbar-default .navbar-nav .open .dropdown-menu > li > a:hover,
  .navbar-default .navbar-nav .open .dropdown-menu > li > a:focus {
    color: #bbae00;
  }
  .navbar-default .navbar-nav .open .dropdown-menu > .active > a,
  .navbar-default .navbar-nav .open .dropdown-menu > .active > a:hover,
  .navbar-default .navbar-nav .open .dropdown-menu > .active > a:focus {
    color: #bbae00;
    background-color: #073552;
  }
}";

	}



} 



?>