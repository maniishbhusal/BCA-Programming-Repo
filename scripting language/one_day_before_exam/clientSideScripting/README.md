### **JavaScript Introduction**  
JavaScript is a lightweight, interpreted programming language primarily used to add interactivity and dynamic behavior to websites. It is one of the core technologies of web development alongside HTML and CSS.

---

### **Why Do We Need a Client-Side Scripting Language?**  
1. **Interactivity:** Enables dynamic content such as form validation, animations, and user interactions without needing to refresh the page.  
2. **Performance:** Reduces the load on the server by performing some operations on the client-side.  
3. **Enhanced User Experience:** Faster responses and better engagement.  
4. **Customization:** Allows user-specific customizations on the front end.  

---

### **Formatting and Coding Conventions in JavaScript**
1. **Indentation:** Use two or four spaces for indentation.  
2. **Naming:** Use camelCase for variable names and function names.  
3. **Semicolons:** Optional but recommended for consistency.  
4. **Curly Braces:** Place opening braces on the same line as the statement (K&R style).  
   ```javascript
   if (condition) {
       // code
   }
   ```
5. **Comments:** Use comments to improve code readability.  

---

### **JavaScript Files (`.js`)**  
- JavaScript code can be written in an external file with the `.js` extension.  
- This approach separates logic from structure and design, improving code maintainability.  
- **Example:** `script.js`  
   ```javascript
   console.log('Hello, World!');
   ```  
   To link this file in HTML:  
   ```html
   <script src="script.js"></script>
   ```

---

### **Comments in JavaScript**  
- **Single-line comments:** Use `//`.  
   ```javascript
   // This is a single-line comment
   ```  
- **Multi-line comments:** Use `/* */`.  
   ```javascript
   /* This is a
      multi-line comment */
   ```

---

### **Embedding JavaScript in HTML**
1. **Internal JavaScript:** Code directly within `<script>` tags.  
   ```html
   <script>
       alert('Hello, World!');
   </script>
   ```
2. **External JavaScript:** Link an external `.js` file using the `src` attribute in the `<script>` tag.  
   ```html
   <script src="script.js"></script>
   ```

---

### **Using the `<noscript>` Tag**
- Provides alternative content if the browser does not support or has disabled JavaScript.  
- Example:  
   ```html
   <noscript>
       Your browser does not support JavaScript or it is disabled.
   </noscript>
   ```

---

### **Practice Questions**
1. What are the main advantages of using JavaScript for client-side scripting?  
2. Write an example that embeds JavaScript within an HTML file using internal and external methods.  
3. What is the role of the `<noscript>` tag? Provide a practical use case.  
4. Explain the importance of comments and formatting in JavaScript. Write code demonstrating both single-line and multi-line comments.  
5. Write a basic JavaScript code snippet that logs "Hello, Scripting Languages Exam!" to the console and link it to an HTML file using an external `.js` file.  
