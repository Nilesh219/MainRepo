show databases;
USE account;

SHOW TABLES;



CREATE TABLE loan(
branch_name varchar(20),
balance int
);

-- Add 2% interest to all bank account balances with a balance of 500 or less 
UPDATE account
SET balance = balance*1.02
WHERE balance<=500;

-- Transfer the accounts and loans of Perryridge branch to Downtown branch
UPDATE account
SET branch_name = "Downtown"
WHERE branch_name = "Perryridge";

UPDATE loan
SET branch_name = "downtown"
WHERE branch_name = "Perryridge";




INSERT INTO account 
(account_number, branch_name, balance) 
VALUE 
("B4389743", "mide street", 400),
("C4389745", "side street", 500),
("D4345974", "right street", 600),
("E4585454", "Perryridge", 120000),
("101", "newacc", 600),
("215", "newacc1", 700);

INSERT INTO loan
(branch_name, balance)
VALUE
("Perryridge", 5000);

-- Transfer Rs. 100 from account A-101 to A-215:
UPDATE account
SET balance = balance - 100
WHERE branch_name = "newacc";

UPDATE account
SET balance = balance + 100
WHERE branch_name = "newacc1";

-- Delete the branch Perryridge:
DELETE FROM account
WHERE branch_name = "perryridge";

-- Remove all the customers who live in “Downtown”:
DELETE FROM loan
WHERE branch_name = "downtown";


-- Remove all the accounts:
DELETE FROM account;

-- List all branch names and their assets:
SELECT branch_name, balance
FROM account;

-- List all loans with an amount greater than 1000:
SELECT * 
FROM loan
WHERE balance>1000;

-- Find bank accounts with a balance under 700
SELECT *
FROM account 
WHERE balance> 1000;

-- List all accounts of Perryridge branch with a balance less than 1000:
SELECT *
FROM account 
WHERE branch_name = "Perryridge" AND balance > 1000; 



SELECT * FROM account;
SELECT * FROM loan;
SET SQL_SAFE_UPDATES = 0;