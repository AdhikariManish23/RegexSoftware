-- self join related table

CREATE TABLE employees (
    eid INT PRIMARY KEY,
    ename VARCHAR(100),
    salary DECIMAL(10,2),
    manager_id INT
);



INSERT INTO employees VALUES
(1, 'John', 90000, NULL),   -- Top-level manager (CEO)
(2, 'Alice', 75000, 1),
(3, 'Bob', 70000, 1),
(4, 'Emma', 65000, 2),
(5, 'Michael', 60000, 2),
(6, 'Sophia', 62000, 2),
(7, 'David', 58000, 3),
(8, 'Olivia', 55000, 3),
(9, 'James', 50000, 4),
(10, 'Isabella', 52000, 4);


select * from employees;

select emp.eid , emp.ename, emp.salary from employees as emp 
join employees as manager
where emp.eid = manager.eid;