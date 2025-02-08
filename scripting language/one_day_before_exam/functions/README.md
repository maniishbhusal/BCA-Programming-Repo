### **Defining and Invoking Functions in JavaScript and PHP**

---

### **1. JavaScript Functions**

#### **Defining Functions**

##### **1. Function Declaration**
A named function that can be called before its declaration due to hoisting.
```javascript
function greet() {
    console.log("Hello, World!");
}
```

##### **2. Function Expression**
Functions defined as expressions are not hoisted.
```javascript
const greet = function() {
    console.log("Hello, World!");
};
```

##### **3. Arrow Function (ES6)**
A shorter syntax for function expressions.
```javascript
const greet = () => {
    console.log("Hello, World!");
};
```

##### **4. Function with Parameters and Return Value**
```javascript
function add(a, b) {
    return a + b;
}
let result = add(5, 3);
console.log("Sum:", result);  // Output: Sum: 8
```

##### **5. Default Parameters**
```javascript
function greet(name = "Guest") {
    console.log("Hello, " + name);
}
greet();  // Output: Hello, Guest
```

---

#### **Invoking Functions in JavaScript**
```javascript
greet();  // Calling a function without parameters
let sum = add(2, 3);  // Calling a function with parameters
```

---

### **2. PHP Functions**

#### **Defining Functions**

##### **1. Simple Function without Parameters**
```php
function greet() {
    echo "Hello, World!<br>";
}
```

##### **2. Function with Parameters**
```php
function add($a, $b) {
    return $a + $b;
}
```

##### **3. Default Parameters**
```php
function greet($name = "Guest") {
    echo "Hello, " . $name . "<br>";
}
```

##### **4. Function with Return Value**
```php
function multiply($a, $b) {
    return $a * $b;
}
$result = multiply(5, 3);
echo "Product: " . $result . "<br>";  // Output: Product: 15
```

---

#### **Invoking Functions in PHP**
```php
greet();  // Calling a function without parameters
echo add(5, 7);  // Output: 12
greet("Manish");  // Output: Hello, Manish
```

---

### **Practice Questions**

1. Write a JavaScript function that takes two numbers as parameters and returns their difference.  
2. Create a PHP function that checks whether a given number is prime or not.  
3. Write a JavaScript function that calculates the factorial of a number using recursion.  
4. Define a PHP function that concatenates two strings and returns the result.  
5. Modify the following code to provide a default value for the second parameter in the function:  
   **JavaScript:**  
   ```javascript
   function sayHello(name) {
       console.log("Hello, " + name);
   }
   ```  
   **PHP:**  
   ```php
   function sayHello($name) {
       echo "Hello, " . $name;
   }
   ```