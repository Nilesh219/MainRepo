show Databases;
use employee
CREATE TABLE EMPLOYEE(
Emp_no INT,
E_name VARCHAR(255),
E_address VARCHAR(255),
E_ph_no VARCHAR(255),
Dept_no INT,
Dept_name VARCHAR(255),
Job_id VARCHAR(10),
Salary DECIMAL(10,2)
);

DESC employee

//Add a new column HIRDATE
ALTER TABLE employee
ADD HIREDATE DATE;

ALTER TABLE employee
modify job_id varchar(2)

//change the name of column
alter table employee
rename column emp_no to E_no;

//Modify column width
alter table employee
Modify job_id varchar(20);

//2 problem

create database emp;

show databases;




CREATE TABLE emp(
empno int primary key,
ename varchar(20) not null,
job varchar(10) not null,
deptno int,
sal decimal(7,2)
);

desc emp;

insert into emp(empno, ename, job, deptno, sal) values (101, 'John Doe', 'Manager', NULL, 5000);

select * from emp;

insert into emp(empno, ename, job, deptno, sal) values (50, 'Jane Smith', 'Cleark', 20, 3000);

insert into emp(empno, ename, job, deptno, sal) values (102, 'Bob Johanson', 'Analyst', 10, 4500);
insert into emp(empno, ename, job, deptno, sal) values (103, 'Alice White', 'Designer', 10, 4800);

insert into emp(empno, ename, job, deptno, sal) values (101, 'Charlie Brown', 'Engineer', 30, 5500);
insert into emp(empno, ename, job, deptno, sal) values (105, 'Eva Green', 'Manager', 20, 6000);

