CREATE TABLE EMPLOYEE1(
    Eid INT PRIMARY KEY,
    Ename varchar(10),
    salary INT,
    age INT
);

CREATE TABLE DEMPARTEMENT1(
    Did INT PRIMARY KEY,
    Dname varchar(10)
);

CREATE TABLE COMPANY1(
    Eid INT,
    Did INT,
    Cname varchar(10),
    PRIMARY KEY(Eid, Did),
    FOREIGN KEY (Eid) REFERENCES EMPLOYEE1(Eid),
    FOREIGN KEY (Did) REFERENCES DEMPARTEMENT1(Did)   
);




-- Insert data
INSERT INTO EMPLOYEE1 VALUES (1, 'John', 35000, 25);
INSERT INTO EMPLOYEE1 VALUES (2, 'Jane', 40000, 30);
INSERT INTO EMPLOYEE1 VALUES (3, 'Bob', 28000, 35);
INSERT INTO EMPLOYEE1 VALUES (4, 'Alice', 32000, 40);
INSERT INTO EMPLOYEE1 VALUES (5, 'Smith', 30000, 28);
INSERT INTO EMPLOYEE1 VALUES (6, 'Sara', 42000, 32);

SELECT * FROM EMPLOYEE1;


INSERT INTO DEMPARTEMENT1 VALUES (1, 'IT');
INSERT INTO DEMPARTEMENT1 VALUES (2, 'HR');

SELECT * FROM DEMPARTEMENT1;


INSERT INTO COMPANY1 VALUES (1, 1, 'TCS');
INSERT INTO COMPANY1 VALUES (2, 1, 'Infosys');
INSERT INTO COMPANY1 VALUES (3, 2, 'TCS');
INSERT INTO COMPANY1 VALUES (4, 2, 'Infosys');
INSERT INTO COMPANY1 VALUES (5, 1, 'Google');
INSERT INTO COMPANY1 VALUES (6, 2, 'Microsoft');

SELECT * FROM COMPANY1;


-- 1. Find all employees with salary above 30000.
SELECT * FROM EMPLOYEE1 WHERE salary > 30000;


-- 2. Find the names of employees who have working in IT department of TCS Company.
SELECT E.Ename
FROM EMPLOYEE1 E
JOIN COMPANY1 C ON E.Eid = C.Eid
JOIN DEMPARTEMENT1 D ON C.Did = D.Did
WHERE Dname = 'IT' AND Cname = 'TCS';

-- 3. Find the Eid’s of all employees who have working in Infosys but not TCS.
SELECT E.Eid
FROM EMPLOYEE1 E
JOIN COMPANY1 C ON E.Eid = C.Eid
JOIN DEMPARTEMENT1 D ON C.Did = D.Did
WHERE C.Cname = 'Infosys' AND C.Cname NOT IN ('TCS');

-- 4. Find employees whose age is greater than some employee called Smith.
SELECT * FROM EMPLOYEE1 WHERE age > (SELECT age FROM EMPLOYEE1 WHERE Ename = 'Smith');

-- 5. Select FIRST n records from a table.
SELECT * FROM EMPLOYEE1 WHERE ROWNUM <= 3;


-- 6. Remove all employees having age less than 37.
DELETE FROM EMPLOYEE1 WHERE age < 37;


-- 7. Select all records where employee name starts with ‘S’ and its length is 5 char.
SELECT * FROM EMPLOYEE1 WHERE Ename LIKE 'S%' AND LENGTH(Ename) = 5;


-- 8. Write cursor code for Print the number of rows deleted from the Employee table.
DECLARE
  v_rows_deleted NUMBER;
BEGIN
  DELETE FROM EMPLOYEE1 WHERE age < 37 RETURNING COUNT(*) INTO v_rows_deleted;
  DBMS_OUTPUT.PUT_LINE('Number of rows deleted: ' || v_rows_deleted);
END;
