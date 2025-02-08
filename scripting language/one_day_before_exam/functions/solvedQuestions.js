// 1. Write a JavaScript function that takes two numbers as parameters and returns their difference.
function subtract(a, b) {
  return a - b;
}
let a = 12,
  b = 1;
console.log(
  "The difference between " + a + " and " + b + " is " + subtract(a, b)
);

// 3. Write a JavaScript function that calculates the factorial of a number using recursion.
function calculateFactorial(num) {
    if (num <= 1) return 1;  // Base case: factorial of 1 or 0 is 1
    return num * calculateFactorial(num - 1);  // Recursive case
  }
  
  console.log("The factorial of 7 is " + calculateFactorial(7));  // Output: The factorial of 7 is 5040
  

/*
5. Modify the following code to provide a default value for the second parameter in the function:  
   **JavaScript:**  
   ```javascript
   function sayHello(name="Manish") {
       console.log("Hello, " + name);
   }
   ```  
   **PHP:**  
   ```php
   function sayHello($name="Manish") {
       echo "Hello, " . $name;
   }
       */
