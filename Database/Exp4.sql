use account;

SELECT * FROM account;
SELECT * FROM loan;

-- Find the average account balance at the Perryridge branch:
SELECT AVG(balance) AS average_balance
FROM account
WHERE branch_name = "Perryridge";

-- Find the maximum amount of any loan in the bank
SELECT MAX(balance) AS max_balance
FROM account;

-- List numbers of accounts with balances between 700 and 900:
SELECT COUNT(branch_name) AS count_branch_name
FROM account
WHERE balance BETWEEN 100 AND 800;

-- List the total number of account holders in the 'Capital Bank' Branch: 
SELECT COUNT(account_number) as count_account_number
FROM account
WHERE branch_name = "Perryridge";

-- List the total number of unique customer city names:
SELECT COUNT(DISTINCT branch_name) AS c_branch_name
FROM account;

-- Find the number of branches that currently have loans:
SELECT COUNT(DISTINCT branch_name) AS c_branch_name
FROM loan;
