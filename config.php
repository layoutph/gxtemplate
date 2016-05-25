<!DOCTYPE html>
<html>
<head>
	<title>Test Gx Tepmlates</title>
</head>
<body>
<?php

include('gxtemplate.inc');
include('gxsiteinfo.inc');

$mysite = new gxSiteData;
$mysite -> site_name = "Blue Magic, Inc.";
$mysite -> site_description = "Blue Magic Description goes here..";
$mysite -> gxDisplaySiteData();

?>
</body>
</html>