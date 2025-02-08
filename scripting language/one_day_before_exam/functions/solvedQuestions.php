<!-- // 2. Create a PHP function that checks whether a given number is prime or not. -->
function checkPrime($num) {
    if ($num < 2) {
        echo "The number is not a prime number";
        return;
    }
    
    for ($i = 2; $i < $num; $i++) {
        if ($num % $i == 0) {
            echo "The number is not a prime number";
            return;
        }
    }
    
    echo "The number is a prime number";
}

checkPrime(4);  // Output: The number is not a prime number

<!-- // 4. Define a PHP function that concatenates two strings and returns the result. -->
function concatenateStrings($string1, $string2) {
    return $string1 . $string2;
}

$result = concatenateStrings("Hello, ", "World!");
echo $result;  // Output: Hello, World!
