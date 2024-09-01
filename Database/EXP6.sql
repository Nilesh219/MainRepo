-- Types of join

-- Inner join

CREATE DATABASE college;
USE college;

CREATE TABLE student(
	id INT PRIMARY KEY,
    name VARCHAR(50)
);

INSERT INTO student (id, name)
VALUES
(101, "adam"),
(102, "bob"),
(103, "casey");

CREATE TABLE course(
	id INT PRIMARY KEY,
    course VARCHAR(50)
);

INSERT INTO course (id, course)
VALUES
(102, "english"),
(105, "math"),
(103, "science"),
(107, "computer science");


SELECT * FROM student;
SELECT * FROM course;

SELECT *
FROM  student as s
INNER JOIN course as c
ON s.id = c.id;



-- Left Join
SELECT *
FROM student AS s
LEFT JOIN course AS c
ON s.id = c.id; 


-- RIGHT JOIN
SELECT *
FROM student AS s
RIGHT JOIN course AS c
ON s.id = c.id;


-- FULL JOIN
SELECT * FROM student AS s
LEFT JOIN course AS c
ON s.id=c.id
UNION
SELECT * FROM student AS s
RIGHT JOIN course AS c
ON s.id=c.id;


-- LEFT EXCLUSIVE JOIN
SELECT * 
FROM student AS s
LEFT JOIN course AS c
ON s.id = c.id
WHERE c.id IS NULL;


-- RIGHT EXCLUSIVE JOIN
SELECT * 
FROM student AS s
RIGHT JOIN course AS c
ON s.id = c.id
WHERE s.id IS NULL;


-- FULL EXCLUSIVE JOIN
SELECT * 
FROM student AS s
LEFT JOIN course AS c
ON s.id = c.id
WHERE c.id IS NULL
UNION 
SELECT * 
FROM student AS s
RIGHT JOIN course AS c
ON s.id = c.id
WHERE s.id IS NULL;


-- SELF JOIN
CREATE DATABASE employee1;
USE employee1;

CREATE TABLE employee(
	id INT PRIMARY KEY,
    name VARCHAR(50),
    manager_id int
);

INSERT INTO employee (id, name, manager_id)
VALUES
(101, "adam", 103),
(102, "bob", 104),
(103, "casey", NULL),
(104, "donald", 103);


SELECT *FROM employee;


SELECT e.name AS manager_name, e1.name
FROM employee as e
JOIN employee as e1
ON e.id = e1.manager_id;


-- UNION 
SELECT name FROM employee
UNION 
SELECT name FROM employee; 

SELECT name FROM employee
UNION ALL
SELECT name FROM employee; 

CREATE DATABASE bank;
USE bank;

CREATE TABLE Customers (
    customer_id INT PRIMARY KEY,
    customer_name VARCHAR(255),
    city VARCHAR(255)
);

INSERT INTO Customers (customer_id, customer_name, city) VALUES
(1, 'Alice Smith', 'New York'),
(2, 'Bob Johnson', 'Brooklyn'),
(3, 'Charlie Brown', 'Seattle'),
(4, 'David Wilson', 'San Francisco');

-- Create the Branches table
CREATE TABLE Branches (
    branch_id INT PRIMARY KEY,
    branch_name VARCHAR(255)
);

-- Insert sample data into the Branches table
INSERT INTO Branches (branch_id, branch_name) VALUES
(101, 'Perryridge'),
(102, 'Parkstreet'),
(103, 'Brooklyn');

-- Create the Accounts table
CREATE TABLE Accounts (
    account_number INT PRIMARY KEY,
    customer_id INT,
    branch_id INT,
    balance DECIMAL(10, 2),
    FOREIGN KEY (customer_id) REFERENCES Customers(customer_id),
    FOREIGN KEY (branch_id) REFERENCES Branches(branch_id)
);

-- Insert sample data into the Accounts table
INSERT INTO Accounts (account_number, customer_id, branch_id, balance) VALUES
(1001, 1, 101, 5000.00),
(1002, 2, 102, 2000.00),
(1003, 3, 101, 7000.00),
(1004, 4, 103, 3000.00);

-- Create the Loans table
CREATE TABLE Loans (
    loan_number INT PRIMARY KEY,
    customer_id INT,
    branch_id INT,
    loan_amount DECIMAL(10, 2),
    FOREIGN KEY (customer_id) REFERENCES Customers(customer_id),
    FOREIGN KEY (branch_id) REFERENCES Branches(branch_id)
);


-- Insert sample data into the Loans table
INSERT INTO Loans (loan_number, customer_id, branch_id, loan_amount) VALUES
(2001, 1, 101, 10000.00),
(2002, 2, 102, 5000.00),
(2003, 3, 101, 8000.00),
(2004, 4, 103, 3000.00);

SELECT * FROM Customers;
SELECT * FROM Branches;
SELECT * FROM Accounts;
SELECT * FROM Loans;


-- 1. Find the names and loan numbers of all customers who have a loan at the Perryridge branch.
SELECT customer_name, loan_number
FROM Customers AS c
JOIN Loans AS l
ON c.customer_id = l.customer_id
JOIN Branches AS b
ON l.branch_id = b.branch_id
WHERE b.branch_name = 'Perryridge';

-- 2. Display the list in alphabetic order all customers who have a loan at the Perryridge branch.
SELECT customer_name
FROM Customers AS c
JOIN Loans AS l
ON c.customer_id = l.customer_id
JOIN Branches As b
ON l.branch_id = b.branch_id
ORDER BY customer_name;

-- 3. Find names of all branches with customers who have accounts in the bank and live in a city whose name starts with S.
SELECT DISTINCT b.branch_name
FROM Branches b
JOIN Accounts a ON b.branch_id = a.branch_id
JOIN Customers c ON a.customer_id = c.customer_id
WHERE c.city LIKE 'S%';

-- 4. For all customers who have a loan from the bank, find their names, loan numbers, and loan amount.
SELECT c.customer_name, l.loan_number, l.loan_amount
FROM Customers AS c
JOIN Loans AS l 
ON c.Customer_id = l.Customer_id;

-- 5. Find the list of all customers in alphabetic order who have a loan at the Parkstreet branch.
SELECT c.customer_name, b.branch_name
FROM Customers AS c
JOIN Loans AS l
ON c.customer_id = l.customer_id
JOIN Branches AS b
ON l.branch_id = b.branch_id
WHERE b.branch_name = "Parkstreet"
ORDER BY c.customer_name;

-- 6. For all customers who have a loan from the bank, find their names, loan numbers, and loan amount.
-- (This query is the same as query 4)

-- 7. Find the customer names, loan numbers, and loan amounts for all loans at the Perryridge branch.
SELECT c.customer_name, l.loan_number, l.loan_amount, b.branch_name
FROM Customers As c
JOIN Loans AS l 
ON c.customer_id = l.customer_id
JOIN Branches AS b
ON l.branch_id = b.branch_id
WHERE b.Branch_name = "Perryridge";

-- 8. For all customers who have a loan from the bank, find their names and loan numbers with
-- the attribute loan_number replaced by loan_id.
SELECT c.customer_name, l.loan_number AS loan_id
FROM Customers c
JOIN Loans l ON c.customer_id = l.customer_id;

-- 9. Find the name, account number, and balance of all customers who have an account.
SELECT c.customer_name, a.account_number, a.balance
FROM Customers AS c
JOIN Accounts AS a
ON c.customer_id = a.customer_id;

-- 10. Find the name, loan number, and amount of all customers who have a loan from the Perryridge branch.
SELECT c.customer_name, l.loan_number, l.loan_amount, b.branch_name
FROM Customers AS c
JOIN Loans AS l
ON  c.customer_id = l.customer_id
JOIN Branches AS b
ON l.branch_id = b.branch_id
WHERE b.branch_name = "Perryridge";

-- 11. Find the name, account number, and balance of all customers who have an account with a balance of $400 or less.
SELECT c.customer_name, a.account_number, a.balance
FROM Customers c
JOIN Accounts a ON c.customer_id = a.customer_id
WHERE a.balance <= 4000;


-- 12. List all accounts of the Brooklyn branch.
SELECT a.account_number, a.balance
FROM Accounts a
JOIN Branches b ON a.branch_id = b.branch_id
WHERE b.branch_name = 'Brooklyn';

