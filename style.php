<?php
    header("Content-type: text/css; charset: UTF-8");
?>

<?php

echo "body {\n";
echo "color: " . $mysite -> site_color . ";\n";
echo "background-color: " . $mysite -> site_backgroundColor . ";\n";
echo "\n}\n\n";

echo $mysite -> gxBCSS();
?>