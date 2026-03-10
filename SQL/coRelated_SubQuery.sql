create database regex2;
use regex2;
CREATE TABLE employee (
    eid INT PRIMARY KEY,
    name VARCHAR(50),
    dept VARCHAR(50),
    salary DECIMAL(10,2)
);


INSERT INTO employee (eid, name, dept, salary) VALUES
(101, 'Amit', 'HR', 40000),
(102, 'Neha', 'HR', 45000),
(103, 'Raj', 'IT', 60000),
(104, 'Priya', 'IT', 75000),
(105, 'Suresh', 'IT', 50000),
(106, 'Anita', 'Finance', 55000),
(107, 'Vikram', 'Finance', 65000),
(108, 'Kavita', 'Finance', 48000),
(109, 'Rohit', 'Marketing', 52000),
(110, 'Sneha', 'Marketing', 58000);

select * from employee;

-- Q1 find salary which is more than the avg salary of there department
select avg(salary) from employee;
select * from employee as emp where salary > (select avg(salary) from employee where dept = emp.dept);

-- Q2 Highest paid employeed in each department
select * from employee as emp where salary = (select max(salary) from employee where dept = emp.dept);

-- Q3 Lowest paid employees in each department
select * from employee as emp where salary = (select min(salary) from employee where dept = emp.dept);

-- Q4 
select * from employee as emp where salary > (select min(salary) from employee where dept = emp.dept);

-- --------------------DIFFERENT table USED --------------------

use world;
select * from city;
select * from country;
-- Q5 show cities whose population is higher then the average city population of their own country
select name, CountryCode from city as c where population > (select avg(population) from city where CountryCode = c.CountryCode); 
 
-- Q6 Find cities that have the maximum population within their country
select name,countrycode from city as c where population = (select max(population) from city where countrycode = c.countrycode);
 
-- Q7 get the continent name who have the total nummber of countries greater then the no. of country in south america
select continent from country group by continent having count(name) > (select count(name) from country as ct where continent = 'South america');

-- Q8 show cities and their country name whose population is higher then the average city population of their own country 
select c.name , ct.name from city as c 
join country as ct on c.countrycode = ct.code where c.population > (select avg(c2.population) from city as c2 where c2.countrycode = c.countrycode
);


select avg(salary) from employee where dept = 'HR';