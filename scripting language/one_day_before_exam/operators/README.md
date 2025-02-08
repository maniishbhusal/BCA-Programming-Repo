### **Operators in JavaScript**  
Operators in JavaScript are used to perform operations on variables and values.

---

### **1. Arithmetic Operators**
Used for basic mathematical operations.

| Operator | Description | Example |
|----------|-------------|---------|
| `+`      | Addition    | `5 + 2 = 7` |
| `-`      | Subtraction | `5 - 2 = 3` |
| `*`      | Multiplication | `5 * 2 = 10` |
| `/`      | Division    | `5 / 2 = 2.5` |
| `%`      | Modulus (remainder) | `5 % 2 = 1` |
| `++`     | Increment   | `let a = 5; a++; // 6` |
| `--`     | Decrement   | `let a = 5; a--; // 4` |

---

### **2. Assignment Operators**
Used to assign values to variables.

| Operator | Description | Example |
|----------|-------------|---------|
| `=`      | Assignment  | `let x = 5;` |
| `+=`     | Add and assign | `x += 3; // x = x + 3` |
| `-=`     | Subtract and assign | `x -= 3;` |
| `*=`     | Multiply and assign | `x *= 3;` |
| `/=`     | Divide and assign | `x /= 3;` |
| `%=`     | Modulus and assign | `x %= 3;` |

---

### **3. Comparison Operators**
Used to compare values and return a boolean (`true` or `false`).

| Operator | Description | Example | Output |
|----------|-------------|---------|--------|
| `==`     | Equal to    | `5 == '5'` | `true` |
| `===`    | Strict equal | `5 === '5'` | `false` |
| `!=`     | Not equal   | `5 != '5'` | `false` |
| `!==`    | Strict not equal | `5 !== '5'` | `true` |
| `>`      | Greater than | `5 > 3` | `true` |
| `<`      | Less than   | `5 < 3` | `false` |
| `>=`     | Greater than or equal | `5 >= 5` | `true` |
| `<=`     | Less than or equal | `5 <= 5` | `true` |

---

### **4. Logical Operators**
Used to perform logical operations.

| Operator | Description | Example | Output |
|----------|-------------|---------|--------|
| `&&`     | Logical AND | `true && false` | `false` |
| `||`     | Logical OR  | `true || false` | `true` |
| `!`      | Logical NOT | `!true` | `false` |

---

### **5. String Operators**
Used to work with strings.

| Operator | Description | Example |
|----------|-------------|---------|
| `+`      | Concatenation | `'Hello' + ' World!'` |
| `+=`     | Append        | `let str = 'Hello'; str += ' World';` |

---

### **6. Ternary Operator**
A shorthand for `if...else`.

| Operator | Description | Example | Output |
|----------|-------------|---------|--------|
| `? :`    | Ternary     | `let result = (5 > 3) ? 'Yes' : 'No';` | `Yes` |

---

### **7. Type Operators**
Used to check data types.

| Operator | Description | Example | Output |
|----------|-------------|---------|--------|
| `typeof` | Returns type | `typeof 5` | `number` |
| `instanceof` | Checks instance of an object | `[] instanceof Array` | `true` |

---

### **Practical Examples**  
**Example 1: Arithmetic and Comparison Operators**  
```javascript
let a = 10, b = 5;
console.log(a + b);  // 15
console.log(a > b);  // true
```

**Example 2: Logical and Assignment Operators**  
```javascript
let x = true, y = false;
console.log(x && y);  // false

let z = 10;
z += 5;  // z = z + 5
console.log(z);  // 15
```

**Example 3: Ternary Operator**  
```javascript
let age = 18;
let canVote = (age >= 18) ? "Yes" : "No";
console.log("Can vote? " + canVote);  // Yes
```

---

### **Practice Questions**
1. Write a JavaScript program to check if a given number is positive, negative, or zero using the ternary operator.  
2. Write code to demonstrate the difference between `==` and `===`.  
3. Use logical operators to check if a number is between 10 and 20.  
4. What is the output of the following code?  
   ```javascript
   let x = 5;
   x *= 2 + 3;
   console.log(x);
   ```  
5. Write a code snippet to concatenate two strings and display the result in the browser console.
