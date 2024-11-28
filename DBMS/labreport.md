# Lab Report – I (Working with Database and Tables)

Write SQL commands to perform following operations:

### 1. Display all the available databases.
```sql
SHOW DATABASES;
```

### 2. Create a database named `BCA_yourName` (replace `yourName` with your actual name).
```sql
CREATE DATABASE BCA_yourName;
```

### 3. Use the database called `test`.
```sql
USE test;
```

### 4. Delete the database called `sample`.
```sql
DROP DATABASE sample;
```

### 5. Create a table called `workers` with the specified columns.
```sql
CREATE TABLE workers (
    id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(50),
    address VARCHAR(100),
    email VARCHAR(100),
    post VARCHAR(50),
    department VARCHAR(50)
);
```

### 6. Insert details of 5 people into the `workers` table.
```sql
INSERT INTO workers (name, address, email, post, department) VALUES
('Alice', '123 Main St', 'alice@example.com', 'Manager', 'HR'),
('Bob', '456 Elm St', 'bob@example.com', 'Developer', 'IT'),
('Charlie', '789 Oak St', 'charlie@example.com', 'Analyst', 'Finance'),
('Diana', '321 Pine St', 'diana@example.com', 'Consultant', 'Marketing'),
('Eve', '654 Maple St', 'eve@example.com', 'Supervisor', 'Operations');
```

### 7. List all the available tables.
```sql
SHOW TABLES;
```

### 8. Display the structure of the table called `workers`.
```sql
DESCRIBE workers;
```

### 9. Delete the table called `Demo_table`.
```sql
DROP TABLE Demo_table;
```

### 10. Display the data of the `workers` table.
```sql
SELECT * FROM workers;
```

These SQL commands will perform the requested database operations. Replace placeholders like `yourName` as needed!

---
# Lab Report – III (DDL: ALTER Command)

Assume the table and fields by yourself and use ALTER command to perform
the following operations:
Here is how to use the `ALTER` command to perform the specified operations. Assume a table named `employees` with fields: `id (INT)`, `name (VARCHAR(50))`, and `email (VARCHAR(100))`.

---

### 1. Add a column
Add a `phone` column to the `employees` table.
```sql
ALTER TABLE employees 
ADD phone VARCHAR(15);
```

---

### 2. Remove a column
Remove the `email` column from the `employees` table.
```sql
ALTER TABLE employees 
DROP COLUMN email;
```

---

### 3. Modify data type
Change the data type of the `phone` column to `BIGINT`.
```sql
ALTER TABLE employees 
MODIFY phone BIGINT;
```

---

### 4. Modify data type length
Increase the length of the `name` column from `VARCHAR(50)` to `VARCHAR(100)`.
```sql
ALTER TABLE employees 
MODIFY name VARCHAR(100);
```

---

### 5. Add constraints
Add a `NOT NULL` constraint to the `phone` column and a `UNIQUE` constraint to the `id` column.
```sql
ALTER TABLE employees 
MODIFY phone BIGINT NOT NULL;

ALTER TABLE employees 
ADD CONSTRAINT unique_id UNIQUE (id);
```

---

### 6. Remove constraints
Remove the `UNIQUE` constraint on the `id` column.
```sql
ALTER TABLE employees 
DROP INDEX unique_id;
```

---

### 7. Rename a column
Rename the `phone` column to `contact_number`.
```sql
ALTER TABLE employees 
CHANGE phone contact_number BIGINT;
```

---

### 8. Rename a table
Rename the `employees` table to `staff`.
```sql
ALTER TABLE employees 
RENAME TO staff;
```

---

# Lab Report – IV (Inserting and Retrieving data)

Write SQL commands for the following:

---

### **1. Create a table named `books`**
```sql
CREATE TABLE books (
    b_id INT AUTO_INCREMENT PRIMARY KEY,
    b_name VARCHAR(100),
    b_author VARCHAR(100),
    b_price DECIMAL(10, 2)
);
```

---

### **2. Insert 3 records (one at a time) into the `books` table**
```sql
INSERT INTO books (b_name, b_author, b_price) VALUES ('Python Basics', 'John Doe', 400.00);
INSERT INTO books (b_name, b_author, b_price) VALUES ('Data Science', 'Jane Smith', 550.00);
INSERT INTO books (b_name, b_author, b_price) VALUES ('Database Systems', 'Sima', 300.00);
```

---

### **3. Insert 3 more records (multiple records at once)**
```sql
INSERT INTO books (b_name, b_author, b_price) VALUES
('Advanced Python', 'Shiv Kumar', 800.00),
('Programming Concepts', 'Sima', 250.00),
('Governance and Ethics', 'Alex Johnson', 600.00);
```

---

### **4. Select all the details of the `books` table**
```sql
SELECT * FROM books;
```

---

### **5. Select the book name and author name**
```sql
SELECT b_name, b_author FROM books;
```

---

### **6. Select the name of the books in descending order of the `b_price`**
```sql
SELECT b_name FROM books 
ORDER BY b_price DESC;
```

---

### **7. Select all the books whose writer is "Sima"**
```sql
SELECT * FROM books 
WHERE b_author = 'Sima';
```

---

### **8. Select all the books whose price is less than 500**
```sql
SELECT * FROM books 
WHERE b_price < 500;
```

---

### **9. Select the names of all the books except the one written by "Shiv Kumar"**
```sql
SELECT b_name FROM books 
WHERE b_author != 'Shiv Kumar';
```

---

### **10. Select all the books with the title either "Python", "Development", "DBMS", "Governance", or "Programming"**
```sql
SELECT * FROM books 
WHERE b_name IN ('Python Basics', 'Development', 'Database Systems', 'Governance and Ethics', 'Programming Concepts');
```

---

# Lab Report – V (Restricting and Sorting Data)

Write SQL commands for the following:
Here are the SQL commands for each of the tasks outlined in your lab report:

---

### 1. Find the `id` and `name` of all the students whose name contains characters `h` and `i` from the `student` table:
```sql
SELECT id, name
FROM student
WHERE name LIKE '%h%' AND name LIKE '%i%';
```

---

### 2. Select all the students whose marks are less than 80 and address is Pyuthan:
```sql
SELECT *
FROM student
WHERE marks < 80 AND address = 'Pyuthan';
```

---

### 3. Select all the students who live in Ghorahi, Lamahi, Tulsipur, and Salyan:
```sql
SELECT *
FROM student
WHERE address IN ('Ghorahi', 'Lamahi', 'Tulsipur', 'Salyan');
```

---

### 4. Find the `name` and `id` of the students whose department id is between 15 and 30:
```sql
SELECT id, name
FROM student
WHERE department_id BETWEEN 15 AND 30;
```

---

### 5. Find the `name` and `address` of all the students living in Kathmandu in descending order of their name:
```sql
SELECT name, address
FROM student
WHERE address = 'Kathmandu'
ORDER BY name DESC;
```

---

### 6. Select all the details of the students whose name is exactly 5 letters:
```sql
SELECT *
FROM student
WHERE LENGTH(name) = 5;
```

---

### 7. Select `name` and `address` of those students whose name ends with the letter `y`:
```sql
SELECT name, address
FROM student
WHERE name LIKE '%y';
```

---

Here are the SQL commands for Lab Reports VI and VII:

---

## **Lab Report – VI: Table with Foreign Key**

### **1. Create a table `student` with `tid` as a foreign key:**
```sql
CREATE TABLE teacher (
    tid INT PRIMARY KEY,
    tname VARCHAR(50),
    taddress VARCHAR(100),
    tsalary DECIMAL(10, 2)
);

CREATE TABLE student (
    sid INT PRIMARY KEY,
    sname VARCHAR(50),
    saddress VARCHAR(100),
    sage INT,
    tid INT,
    FOREIGN KEY (tid) REFERENCES teacher(tid)
);
```

---

### **2. Create the `teacher` table:**
This is already included in the above command.

---

### **3. Populate both tables with at least three tuples of data:**

```sql
-- Insert data into teacher table
INSERT INTO teacher (tid, tname, taddress, tsalary)
VALUES
    (1, 'Alice', 'New York', 50000),
    (2, 'Bob', 'Los Angeles', 60000),
    (3, 'Carol', 'Chicago', 55000);

-- Insert data into student table
INSERT INTO student (sid, sname, saddress, sage, tid)
VALUES
    (101, 'John', 'New York', 20, 1),
    (102, 'Emma', 'Chicago', 22, 2),
    (103, 'Liam', 'Los Angeles', 19, 3);
```

---

## **Lab Report – VII: Joins in SQL**

### **1. Find the natural join:**
```sql
SELECT *
FROM student
NATURAL JOIN teacher;
```
> This assumes both tables have a column with the same name (`tid`), which is the joining key.

---

### **2. Find the cross product:**
```sql
SELECT *
FROM student
CROSS JOIN teacher;
```

---

### **3. Find the cross product with some condition:**
```sql
SELECT *
FROM student
CROSS JOIN teacher
WHERE student.tid = teacher.tid;
```

---

### **4. Find the left join:**
```sql
SELECT *
FROM student
LEFT JOIN teacher
ON student.tid = teacher.tid;
```

---

### **5. Find the left join with some condition:**
```sql
SELECT *
FROM student
LEFT JOIN teacher
ON student.tid = teacher.tid
WHERE teacher.tsalary > 55000;
```

---

### **6. Find the right join:**
```sql
SELECT *
FROM student
RIGHT JOIN teacher
ON student.tid = teacher.tid;
```

---

### **7. Find the full outer join:**
```sql
SELECT *
FROM student
FULL OUTER JOIN teacher
ON student.tid = teacher.tid;
```

---

# Lab Report – VIII (Views in SQL)
Write SQL commands for performing following operations:

---

### **1. Create a view for the `student` table named `std_summary` showing only the `name` and `id` of the students:**
```sql
CREATE VIEW std_summary AS
SELECT sid, sname
FROM student;
```

---

### **2. Add one more column (`address`) in the `std_summary` view:**
You cannot directly modify a view to add a column. Instead, you need to drop and recreate it:
```sql
DROP VIEW std_summary;

CREATE VIEW std_summary AS
SELECT sid, sname, saddress
FROM student;
```

---

### **3. Display the data of the `std_summary` view:**
```sql
SELECT *
FROM std_summary;
```

---

### **4. Store the details of all students and teachers who share similar data in a view called `std_teacher`:**
Assuming "similar data" refers to matching `tid` (teacher ID in both tables):
```sql
CREATE VIEW std_teacher AS
SELECT student.sid, student.sname, student.saddress, teacher.tname, teacher.taddress, teacher.tsalary
FROM student
JOIN teacher
ON student.tid = teacher.tid;
```

---

### **5. Delete the `std_summary` view:**
```sql
DROP VIEW std_summary;
```

---

### **6. Create a view named `top_students` to store the details of the top five students with the highest marks:**
```sql
CREATE VIEW top_students AS
SELECT *
FROM student
ORDER BY marks DESC
LIMIT 5;
```

---

### **7. Select all students whose subjects are `C`, `C++`, and `Java`, and create a view named `programmer_std`:**
Assuming there’s a column `subject` in the `student` table:
```sql
CREATE VIEW programmer_std AS
SELECT *
FROM student
WHERE subject IN ('C', 'C++', 'Java');
```

---

### **8. View all the data available in `programmer_std`:**
```sql
SELECT *
FROM programmer_std;
```

---

### **Lab Report – IX: Stored Procedures**

---

### **1. Create a procedure `demo_select_procedure` to select students who don’t live in Ghorahi:**
```sql
DELIMITER $$

CREATE PROCEDURE demo_select_procedure()
BEGIN
    SELECT *
    FROM student
    WHERE saddress != 'Ghorahi';
END$$

DELIMITER ;
```

---

### **2. Call the procedure `demo_select_procedure` to view the student list:**
```sql
CALL demo_select_procedure();
```

---

### **3. Modify `demo_select_procedure` to select students who don’t live in Ghorahi and scored less than 60:**
To modify a procedure, you must drop and recreate it:
```sql
DROP PROCEDURE demo_select_procedure;

DELIMITER $$

CREATE PROCEDURE demo_select_procedure()
BEGIN
    SELECT *
    FROM student
    WHERE saddress != 'Ghorahi' AND marks < 60;
END$$

DELIMITER ;
```

---

### **4. Drop the procedure `demo_select_procedure`:**
```sql
DROP PROCEDURE demo_select_procedure;
```

---

### **5. Create a procedure `demo_create_procedure` to create a table and execute it:**
```sql
DELIMITER $$

CREATE PROCEDURE demo_create_procedure()
BEGIN
    CREATE TABLE demo_table (
        id INT PRIMARY KEY,
        name VARCHAR(50),
        address VARCHAR(100)
    );
END$$

DELIMITER ;

-- Execute the procedure
CALL demo_create_procedure();

-- Check the structure of the created table
DESCRIBE demo_table;
```

---

# **Lab Report – X: Stored Procedures with Dynamic Data**

---

### **1. Create a procedure `address_procedure` to select students living in a city passed by the user:**
```sql
DELIMITER $$

CREATE PROCEDURE address_procedure(IN city_name VARCHAR(100))
BEGIN
    SELECT *
    FROM student
    WHERE saddress = city_name;
END$$

DELIMITER ;
```

---

### **2. Call the procedure `address_procedure` to view the student list:**
```sql
CALL address_procedure('Kathmandu');
```

---

### **3. Create a procedure `demo_procedure` to select students based on marks entered by the user:**
```sql
DELIMITER $$

CREATE PROCEDURE demo_procedure(IN min_marks INT)
BEGIN
    SELECT *
    FROM student
    WHERE marks >= min_marks;
END$$

DELIMITER ;
```

---

### **4. View the list of all available procedures:**
```sql
SHOW PROCEDURE STATUS WHERE Db = 'your_database_name';
```

Replace `your_database_name` with the name of your database.

---

### **Lab Report – XI: Triggers and Indexes**

---

### **1. Create a trigger `demo_trigger` to store deleted data in `student_backup`:**
Assuming the `student_backup` table exists with the same structure as `student`:
```sql
DELIMITER $$

CREATE TRIGGER demo_trigger
AFTER DELETE ON student
FOR EACH ROW
BEGIN
    INSERT INTO student_backup (sid, sname, saddress, sage, tid)
    VALUES (OLD.sid, OLD.sname, OLD.saddress, OLD.sage, OLD.tid);
END$$

DELIMITER ;
```

---

### **2. List the triggers created in the database:**
```sql
SHOW TRIGGERS;
```

---

### **3. Delete the trigger `demo_trigger`:**
```sql
DROP TRIGGER demo_trigger;
```

---

### **4. Create an index `st_index` on the `student` table based on the `sname` column:**
```sql
CREATE INDEX st_index ON student(sname);
```

---

### **5. Check the created index:**
```sql
SHOW INDEX FROM student;
```

---

### **6. Drop the index `st_index`:**
```sql
DROP INDEX st_index ON student;
```

---
