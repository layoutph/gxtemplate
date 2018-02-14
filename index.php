<?php include "gxtemplate.php"; ?>

<?php

$mysite = new gxSiteData;
$mysite -> site_name = "Blue Magic, Inc.";
$mysite -> site_description = "Blue Magic Description goes here..";
$mysite -> site_color = "#ff0000";
$mysite -> site_backgroundColor = "#000";

?>

<!DOCTYPE html>
<html>
<head>
	<title><?php echo $mysite -> site_name; ?></title>
	<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css">
	<script src="https://code.jquery.com/jquery-3.1.1.js" integrity="sha256-16cdPddA6VdVInumRGo6IbivbERE8p7CQR3HzTBuELA=" crossorigin="anonymous"></script>
	<script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js"></script>
	<link rel="stylesheet" href="style.php">
</head>
<body>
<?php 
$mysite -> gxBNav();
?>

</body>
</html>