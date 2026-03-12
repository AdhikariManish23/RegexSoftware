create database windowdb;
use windowdb;

CREATE TABLE Sales (
    sale_id INT PRIMARY KEY,
    customer_name VARCHAR(100),
    sale_date DATE,
    amount DECIMAL(10,2)
);

INSERT INTO Sales (sale_id, customer_name, sale_date, amount) VALUES
(1, 'Alice',   '2024-01-05', 250.00),
(2, 'Bob',     '2024-01-06', 180.50),
(3, 'Charlie', '2024-01-07', 320.75),
(4, 'Alice',   '2024-01-10', 150.00),
(5, 'Bob',     '2024-01-12', 400.00),
(6, 'David',   '2024-01-15', 275.25),
(7, 'Eve',     '2024-01-18', 500.00),
(8, 'Charlie', '2024-01-20', 220.00),
(9, 'Alice',   '2024-01-22', 330.40),
(10, 'David',  '2024-01-25', 145.75),
(11, 'Eve',    '2024-02-01', 600.00),
(12, 'Bob',    '2024-02-03', 210.30),
(13, 'Charlie','2024-02-05', 390.60),
(14, 'Alice',  '2024-02-07', 120.00),
(15, 'David',  '2024-02-10', 310.00),
(16, 'Eve',    '2024-02-12', 450.00),
(17, 'Bob',    '2024-02-15', 275.00),
(18, 'Charlie','2024-02-18', 500.00),
(19, 'Alice',  '2024-02-20', 200.00),
(20, 'David',  '2024-02-22', 350.00),
(21, 'Eve',    '2024-02-25', 700.00),
(22, 'Bob',    '2024-02-27', 150.00),
(23, 'Charlie','2024-03-01', 425.50),
(24, 'Alice',  '2024-03-03', 275.75),
(25, 'David',  '2024-03-05', 500.00);


select * from sales;

-- over use
select * ,sum(amount) over() from sales;

-- partition by
select *, sum(amount) over(partition by customer_name) from sales;

select *, sum(amount) over(partition by customer_name,month(sale_date)) from sales;

select *, month(sale_date) ,sum(amount) over(partition by customer_name,month(sale_date)) from sales;

-- Q1 calculate minimum amount per customer and per month
select *,month(sale_date) , min(amount) over(partition by customer_name,month(sale_date)) from sales;

-- Q2 calculate count of transaction per customer per month
select *,count(amount) over(partition by customer_name,month(sale_date)) from sales;

-- order by()
-- find the sum of unique values if value is same then it will give the aggregate answer . What is value here where you apply order

-- Q3 Find running same
select * , sum(amount) over(order by sale_id) from sales; -- (it works beacuse we apply order by on sales_id)

-- Q4 For each sale, display the customer name, sale amount, total amount spent by that customer, average purchase amount of that customer, and the difference between the customer’s total spending and their average purchase amount.
select * , sum(amount) over(order by customer_name) - avg(amount) over(order by customer_name) from sales; -- here we only print the Difference

-- BRUTE force(to print total and average also)
select *, sum(amount) over(partition by customer_name) as Total_amount_spent,
avg(amount) over(partition by customer_name) as avg_purchase_amount,
sum(amount) over(partition by customer_name) - avg(amount) over(partition by customer_name) as difference
from sales;

-- Optimised(to print total and average also)
select *, Total_amount_spent-avg_purchase_amount as difference from
(select *, sum(amount) over(partition by customer_name) as Total_amount_spent,
avg(amount) over(partition by customer_name) as avg_purchase_amount from sales) as Tmp;

-- Q5 Get avg amt of each user if the user amt > avg(amt);

select * , avg(amount) over(partition by customer_name) as result from
 (select *,avg(amount) over() amt from sales) as t where amount > amt;


use windowdb;
select * from  sales;
-- roll_number window function
select *, row_number() over(partition by customer_name order by amount desc) from sales;

-- rank window function
select *, rank() over(order by amount desc) from sales;

-- dense_rank()
select *, dense_rank() over( order by customer_name) from sales;

-- Q1 Get the 2nd highest amount of each Customer 
select * from 
(select *, dense_rank() over(partition by customer_name order by amount desc) as ran from sales) as raju where ran = 2;

-- Q2 Running Total for each Customer

select *, sum(amount) over(partition by customer_name order by sale_id)  from 
(select *, dense_rank() over(partition by customer_name order by amount ) as chu from sales) as ranking;

