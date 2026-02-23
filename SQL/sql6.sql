-- date function
select curdate() , current_time(), current_timestamp(), now();

select now() , adddate(now(), 2); -- added 2 days

use sakila;
select payment_date, adddate(payment_date,2) from payment; -- added 2 days on exisiting date

select now(), adddate(now(), interval 4 month);
select now(), adddate(now(), interval -4 month);  -- subtract 4 months
select now(), adddate(now(), interval 2 quarter); -- add 6 month on current date
select now(), subdate(now(), 4); -- subtract function

-- extract function
select now() , extract(month from now());
select now() , extract(day from now());

select payment_date, month(payment_date), date_format(payment_date , '%a') from payment;

select *,month(payment_date) from payment where month(payment_date) = 5;

select *,year(payment_date)  from payment where year(payment_date) = 2005;

-- AGREGATE function or multiple function => which will be used for caculation
-- kissi bhi aggregate function k sath koi or column access nhi kr sakte
-- we can't select non-aggregate column with aggregate column
-- sum() / count() / max() / min() / avg()

select sum(amount), count(amount), max(amount), min(amount), avg(amount) from payment;

select count(amount) , count(payment_id), count(*) from payment;

select month(payment_date) from payment where month(payment_date) = 5 or month(payment_date) = 6;
select month(payment_date) from payment where month(payment_date) in (5,6); -- above alternate 

-- Question : i need to find  the total amount and total transaction done for the amounnt > 5 and after march month
select sum(amount) , count(amount) from payment where month(payment_date) > 3 and amount > 5;

-- Question : you need to find the total customer and the total number of unique customer done the payment in the last day of the month where the amount is greater than $ 0.5
select payment_id,payment_date, last_day(payment_date) from payment where last_day(payment_date);
select payment_date,last_Day(payment_date) from payment where date(payment_date) = last_day(payment_date);

select distinct customer_id from payment;
select distinct customer_id , amount from payment;

-- combination of amount and staff_id should be unique;
select distinct amount, staff_id from payment;

-- combiantion of ditinct col1,col2 is possible 
-- combiantion of col1, distinct col2 is not possible
-- select customer_id,distinct amount from payment; -- before distinct you cannot choose any column
