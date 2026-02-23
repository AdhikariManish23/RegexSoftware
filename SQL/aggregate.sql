use sakila;
select * from payment;
-- group by (jitni uniques values a unka group banega)
-- group by is statment which is used to group similar values.
-- the groups will be created on the basis of unique values.
-- jiss columne ka group by aapne kra wahi hum select mai use krenge (eg: select customer_id from payment group by customer_id)
-- colllect similar value and make unique group
select customer_id from payment group by customer_id;

select customer_id, amount from payment;
select sum(amount) from payment;
select sum(amount) from payment where customer_id = 1; -- 118.68
select sum(amount) from payment where customer_id = 2; -- 128.73
select sum(amount) from payment where customer_id = 3; -- 135.74

select customer_id , sum(amount) from payment group by customer_id;

select customer_id , sum(amount) , count(customer_id) from payment  group by customer_id; -- to count number of transactions

select * from payment ;
select count(*) ,sum(amount) from payment where payment_id = 3;

select payment_id, count(*) , sum(amount) from payment group by payment_id;


-- Q1 you have to find how many time each amount value is visible ?
select amount, count(amount) from payment group by amount;

-- Q2 try to get the total amount ,the maximum amount value and the total transcations done by each customer 
select customer_id, sum(amount), max(amount), count(customer_id) from payment group by customer_id;

-- Q3 you have to find out the total amount spend by each staff along with the number of customer the number of customer they have served only after the payment id = 9
select staff_id, count(customer_id) , sum(amount) , max(amount)
 from payment where payment_id> 9  group by staff_id;

-- Q4 you have to find the total amount spend ,the average amount spend and the total transaction done in each month
select  month(payment_date) , sum(amount), avg(amount), count(payment_id) from payment group by month(payment_date);

-- Q5 get me total amount , avg amount ,maximum amount done for the 1st week of each month for may ,june and july
select *, month(payment_date), sum(amount) , avg(amount), max(amount) from payment
 where month(payment_date) in (5,6,7) and day(payment_date) between 1 and 7 group by month(payment_date);
-- when day is between 7 to 14
 select *, month(payment_date), sum(amount) , avg(amount), max(amount) from payment
 where month(payment_date) in (5,6,7) and day(payment_date) between 7 and 14 group by month(payment_date);

