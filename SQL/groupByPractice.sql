CREATE DATABASE company_db;
USE company_db;
CREATE TABLE employees (
    emp_id INT PRIMARY KEY,
    emp_name VARCHAR(50),
    department VARCHAR(50),
    salary INT,
    join_date DATE,
    city VARCHAR(50)
);
INSERT INTO employees (emp_id, emp_name, department, salary, join_date, city) VALUES
(101, 'Alice', 'HR', 50000, '2021-01-15', 'New York'),
(102, 'Bob', 'IT', 70000, '2020-03-10', 'London'),
(103, 'Charlie', 'IT', 65000, '2019-07-23', 'London'),
(104, 'Diana', 'HR', 52000, '2021-06-01', 'New York'),
(105, 'Edward', 'Finance', 80000, '2018-11-12', 'Sydney'),
(106, 'Fiona', 'Finance', 75000, '2020-02-20', 'Sydney'),
(107, 'George', 'IT', 72000, '2022-04-18', 'New York');

select * from employees;

-- Q1 Find the total salary paid per department
select department, sum(salary) from employees group by department ;

-- Q2 Find the number of employees in each department
select department, count(emp_id) from employees group by department;

-- Q3 First 3 Character of each employee name in capital letter
select upper(left(emp_name,3)) from employees;

-- 4. Find the employee who have more than 6 character in their name
select emp_name from employees where emp_name like '______%';

-- alternate approach
select emp_name from employees group by emp_id having length(emp_name)>6;

-- 5. Find employees who joined after November 2020.
select emp_name from employees where year(join_date) > 2020 or (month(join_date) > 11 and year(join_date) = 2020);

-- 6. Display the number of years since joining (assuming current year = 2025).
select emp_name , 2025 - year(join_date) from employees;

-- 7. Display salary rounded to nearest thousand.
select emp_name, round(salary, -3) from employees; 

-- 8. Find cities having more than 2 employees.
select * from Employees;
select city ,count(*) as counting from employees group by city having counting > 2;

-- 9. Find cities where the average salary is between 60,000 and 75,000.
select city from employees where salary between 60000 and 75000;

-- 10.Find the department and city combination where the average salary is highest.
select department ,city , avg(salary) from employees group by department, city order by avg(salary) desc limit 1; 
-- GROUP BY department, city → groups employees by department and city.
-- AVG(salary)               → calculates the average salary for each group.
-- ORDER BY avg(salary) DESC → sorts results from highest to lowest average salary.
-- LIMIT 1                   → ensures only the top row (highest average salary) is returned.

-- 11. Display departments where more than one city is present.
select * from employees;
select department,  count( distinct city) from employees group by department having count(distinct city) > 1;