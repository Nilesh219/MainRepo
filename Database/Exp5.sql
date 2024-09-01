
USE employee;

SELECT * FROM employee;

SELECT  salary 
FROM employee;

SELECT job_id
FROM employee
group by job_id;


-- Display total salary spent for each job category:
SELECT job_id, SUM(salary) AS Totalsalary
FROM employee
GROUP BY job_id;


-- Display the average salary for each department:
SELECT Dept_name, AVG(salary) AS AverageSalary
FROM employee
group by dept_name;


-- Display the number of employees in each job category
SELECT Job_id, COUNT(*) AS Count_emp
FROM employee
GROUP BY Job_id;


-- Display the total salary spent in each department
SELECT Dept_no, SUM(salary) AS total_s
FROM employee
GROUP BY Dept_no;

-- Display the earliest joining date for each departmen
SELECT Dept_no, MIN(joiningdate) AS earliest_joiningdate
FROM employee
GROUP BY Dept_no;
