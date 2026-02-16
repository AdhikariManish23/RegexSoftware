create database rmd;
use rmd;

CREATE TABLE customers (
    customer_id INT PRIMARY KEY,
    name VARCHAR(100),
    city VARCHAR(100)
);

CREATE TABLE orders (
    order_id INT PRIMARY KEY,
    customer_id INT,
    order_amount DECIMAL(10,2)
);


INSERT INTO customers VALUES
(1, 'John', 'New York'),
(2, 'Alice', 'Los Angeles'),
(3, 'Bob', 'Chicago'),
(4, 'Emma', 'Houston'),
(5, 'Michael', 'Phoenix'),
(6, 'Sophia', 'Dallas'),
(7, 'David', 'Seattle'),
(8, 'Olivia', 'Boston'),
(9, 'James', 'Denver'),
(10, 'Isabella', 'Miami');


INSERT INTO orders VALUES
(101, 1, 250.00),
(102, 2, 300.00),
(103, 1, 150.00),
(104, 3, 400.00),
(105, 5, 500.00),
(106, 7, 700.00),
(107, 7, 200.00),
(108, 9, 350.00),
(109, 11, 600.00),  -- No matching customer
(110, 12, 800.00);  -- No matching customer

select * from customers;
select * from orders;

-- inner join mai dono table ka common data milega 
select cs.customer_id, cs.name, ods.order_id, ods.order_amount from customers as cs
inner join orders as ods
on cs.customer_id = ods.customer_id;


-- left join use krenge to jo bhi table humne join se pehle likhi hai uska pura data or common data milega 
select cs.customer_id, cs.name, ods.order_id, ods.order_amount from customers as cs
left join orders as ods
on cs.customer_id = ods.customer_id;

-- print those customer name whoes order value is null
select cs.customer_id, cs.name, ods.order_id, ods.order_amount from customers as cs
left join orders as ods
on cs.customer_id = ods.customer_id where ods.order_id is null; -- (is null) when we are finding data related to null


-- right join use krenge to jo bhi table humne join k baad likhi hai uska pura data or common data milega
select cs.customer_id, cs.name, ods.order_id, ods.order_amount from customers as cs
right join orders as ods
on cs.customer_id = ods.customer_id;

-- total amount spent for the order placed by the customer ?
select sum(ods.order_amount) from customers as cs
inner join orders as ods
on cs.customer_id = ods.customer_id;

-- Q1 get me the total number of orders which are not palced by the customers ?
-- Q2 get me the total amount spent and the average amount spent for the orders placed by customer id 3 or more than that ?

select * from customers;
select * from orders;
 
select count(ods.order_id) from customers as cs
right join orders as ods
on cs.customer_id = ods.customer_id where cs.customer_id is null;

select sum(ods.order_amount), avg(ods.order_amount) from customers as cs
inner join orders as ods
on cs.customer_id = ods.customer_id where cs.customer_id>=3;


-- ---------------------Saransh Practice Question -----------------
select * from customers;
select * from orders;

-- Q1 Show customers who have placed orders.
select customers.name from customers
left join orders on customers.customer_id = orders.customer_id;

-- Q2 Show all customers and their orders (include customers with no orders).
select customers.name, orders.order_amount 
from customers
left join orders on customers.customer_id = orders.customer_id;

-- Q3 List customer name, city, and order amount for orders greater than 300.
select customers.name,customers.city , orders.order_amount 
from customers
left join orders on customers.customer_id = orders.customer_id where orders.order_amount > 300;

-- Q4 Show all orders where the customer does NOT exist in the customers table.
select customers.name,orders.order_amount 
from customers
right join orders on customers.customer_id = orders.customer_id where  customers.name is null;

-- Q5 Find total amount spent by each customer( by id).
select * from orders;
select customer_id , sum(order_amount) from orders group by customer_id;

-- Q5 Find total amount spent by each customer(by name).
select * from customers;
select customers.name , orders.customer_id , sum(order_amount) 
from customers
join orders where customers.customer_id = orders.customer_id group by orders.customer_id;

-- Q6 Show customers who have not placed any orders.
select customers.name , orders.order_amount 
from customers
left join orders
on customers.customer_id = orders.customer_id
where orders.order_amount is null;