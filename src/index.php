<html>

	<head>
	<title>Reading from text files</title>
	</head>
	<body>

    <?php
    phpinfo();
    $file_handle = fopen("test.txt", "r");
    while (!feof($file_handle)) {
   $line = fgets($file_handle);
   echo $line;

    }
    echo "hello"
    fclose($file_handle);
    ?>

	</body>
	</html>
