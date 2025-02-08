// 1. Write a JavaScript program to check if a given number is positive, negative, or zero using the ternary operator.
let number = 12;
let result = number > 0 ? "Positive" : number == 0 ? "Equal" : "Negative";
console.log("The number is " + result);

// 2. Write code to demonstrate the difference between `==` and `===`.
console.log("Use of == operator: " + (12 == "12"));
console.log("Use of === operator: " + (12 === "12"));

// 3. Use logical operators to check if a number is between 10 and 20.
number > 10 && number < 20
  ? console.log("The number is between 10 and 20")
  : console.log("The number isn't in 10 and 20");

/* 4. What is the output of the following code?  
   ```javascript
   let x = 5;
   x *= 2 + 3;
   console.log(x);
   ```  
   */
// 25

// 5. Write a code snippet to concatenate two strings and display the result in the browser console.
let firstName = "Manish";
let lastName = "Bhusal";
console.log(firstName + " " + lastName);
