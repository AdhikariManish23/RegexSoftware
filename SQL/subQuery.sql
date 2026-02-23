use world;

select * from city;
select * from country;


-- Q1 select the city name and the country code where the country code should be same as of Ede city;
select countrycode from city where name = 'amsterdam';

select name from city where countrycode = 'nld';
-- subQuery
select name , countrycode from city where countrycode = (select countrycode from city where name = 'amsterdam');

use sakila;

select * from payment;

-- Q2 all the columns with the lowest payment id
select min(payment_id) from payment;

select * from payment where payment_id = (select min(payment_id) from payment);

-- Q3 get all the payment information with the highest rental_id
select max(rental_id) from payment;

select * from payment where rental_id = (select max(rental_id) from payment); 

-- Q4 get all the payment information for the earliest payment date
select min(payment_date) from payment;

select * from payment where payment_date = (select min(payment_date) from payment); 

-- Q5 select all the paymet information where the amount is same as of amount of payment id 5
select amount from payment where payment_id = 5;

select * from payment where amount  = (select amount from payment where payment_id = 5);

-- Q6 select all the paymet information where the amount > avg(amount) from the payment table
select avg(amount) from payment;

select * from payment where amount > (select avg(amount) from payment);

-- Q7 get the highest payment_id from the payment table where the amount is same of payment_id 11 and customer id 1
select amount from payment where payment_id = 11 and customer_id = 1;

--  Single Row SubQuery
select max(payment_id) from payment where amount = (select amount from payment where payment_id = 11 and customer_id = 1);

-- Q8 get all the payment info where amount is same as of payment id 3 or customer id 6
select amount from payment where payment_id = 3 or customer_id = 6;

--  Multi Row SubQuery
select * from payment where amount in (select amount from payment where payment_id = 3 or customer_id = 6);

-- Q9 get all the payment information where the customer id is same as the customer id of payment id 3 or 250
select customer_id from payment where payment_id = 3 or payment_id = 250;

select * from payment where customer_id in (select customer_id from payment where payment_id = 3 or payment_id = 250);

