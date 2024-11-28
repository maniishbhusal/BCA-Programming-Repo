<?php
// PHP Read Single Line - fgets()
$myfile = fopen("webdictionary.txt", "r") or die("Unable to open file!");
echo fgets($myfile);
fclose($myfile);

// PHP Check End-Of-File - feof()
$myfile = fopen("webdictionary.txt", "r") or die("Unable to open file!");
// Output one line until end-of-file
while (!feof($myfile)) {
    echo fgets($myfile) . "<br>";
}
fclose($myfile);

// PHP Read Single Character - fgetc()
$myfile = fopen("webdictionary.txt", "r") or die("Unable to open file!");
// Output one character until end-of-file
while (!feof($myfile)) {
    echo fgetc($myfile);
}
fclose($myfile);

// PHP Write to File (create a new file or overwrite an existing one)
$myfile = fopen("newfile.txt", "w") or die("Unable to open file!");
$txt = "Mickey Mouse\n";
fwrite($myfile, $txt);
$txt = "Minnie Mouse\n";
fwrite($myfile, $txt);
fclose($myfile);

// PHP Append Text to File (does not overwrite, adds new content at the end)
$myfile = fopen("newfile.txt", "a") or die("Unable to open file!");
$txt = "Donald Duck\n";
fwrite($myfile, $txt);
$txt = "Goofy Goof\n";
fwrite($myfile, $txt);
fclose($myfile);
?>
