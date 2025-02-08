### **Control Structures in JavaScript and PHP**  

Control structures dictate the flow of program execution based on conditions or repetition requirements.

---

### **Control Structures in JavaScript**

#### **1. Conditional Statements**  
Used to execute code based on specific conditions.

##### **If Statement**  
```javascript
let number = 10;
if (number > 0) {
    console.log("The number is positive.");
}
```

##### **If...Else Statement**  
```javascript
let number = -5;
if (number > 0) {
    console.log("Positive");
} else {
    console.log("Not positive");
}
```

##### **If...Else If...Else Statement**  
```javascript
let number = 0;
if (number > 0) {
    console.log("Positive");
} else if (number < 0) {
    console.log("Negative");
} else {
    console.log("Zero");
}
```

##### **Switch Statement**  
```javascript
let day = 3;
switch (day) {
    case 1:
        console.log("Monday");
        break;
    case 2:
        console.log("Tuesday");
        break;
    case 3:
        console.log("Wednesday");
        break;
    default:
        console.log("Invalid day");
}
```

---

#### **2. Looping Structures**

##### **For Loop**  
```javascript
for (let i = 1; i <= 5; i++) {
    console.log("Number: " + i);
}
```

##### **While Loop**  
```javascript
let i = 1;
while (i <= 5) {
    console.log("Number: " + i);
    i++;
}
```

##### **Do...While Loop**  
```javascript
let i = 1;
do {
    console.log("Number: " + i);
    i++;
} while (i <= 5);
```

##### **For...In Loop (for objects)**  
```javascript
let person = { name: "John", age: 30 };
for (let key in person) {
    console.log(key + ": " + person[key]);
}
```

##### **For...Of Loop (for iterable collections)**  
```javascript
let numbers = [1, 2, 3, 4];
for (let num of numbers) {
    console.log(num);
}
```

---

### **Control Structures in PHP**

#### **1. Conditional Statements**

##### **If Statement**  
```php
$number = 10;
if ($number > 0) {
    echo "The number is positive.";
}
```

##### **If...Else Statement**  
```php
$number = -5;
if ($number > 0) {
    echo "Positive";
} else {
    echo "Not positive";
}
```

##### **If...Elseif...Else Statement**  
```php
$number = 0;
if ($number > 0) {
    echo "Positive";
} elseif ($number < 0) {
    echo "Negative";
} else {
    echo "Zero";
}
```

##### **Switch Statement**  
```php
$day = 3;
switch ($day) {
    case 1:
        echo "Monday";
        break;
    case 2:
        echo "Tuesday";
        break;
    case 3:
        echo "Wednesday";
        break;
    default:
        echo "Invalid day";
}
```

---

#### **2. Looping Structures**

##### **For Loop**  
```php
for ($i = 1; $i <= 5; $i++) {
    echo "Number: " . $i . "<br>";
}
```

##### **While Loop**  
```php
$i = 1;
while ($i <= 5) {
    echo "Number: " . $i . "<br>";
    $i++;
}
```

##### **Do...While Loop**  
```php
$i = 1;
do {
    echo "Number: " . $i . "<br>";
    $i++;
} while ($i <= 5);
```

##### **Foreach Loop (for arrays)**  
```php
$numbers = array(1, 2, 3, 4);
foreach ($numbers as $num) {
    echo $num . "<br>";
}
```

---

### **Practice Questions**  
1. Write a JavaScript program using a `for` loop to display numbers from 1 to 10.  
2. Write a PHP script that checks whether a given number is odd or even using `if...else`.  
3. Create a switch statement in JavaScript that prints different messages for different days of the week.  
4. Write a PHP program that uses a `while` loop to display numbers from 5 to 1.  
5. Modify the following code snippet to avoid infinite loops:  
   **JavaScript:**  
   ```javascript
   let i = 1;
   while (i <= 5) {
       console.log(i);
   }
   ```
   **PHP:**  
   ```php
   $i = 1;
   while ($i <= 5) {
       echo $i;
   }
   ```
