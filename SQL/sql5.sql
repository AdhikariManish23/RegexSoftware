use sakila;

select first_name , concat('Mr', first_name), substr(first_name, 2) from actor;

select first_name, substr(first_name, -2), substr(first_name, -4,-2) from actor;

-- trim (select,value). <= only for testing purpose
select ' ram';
-- trim removes the spaces right side or left side of the string not in between
select char_length(' ram') ; -- char_length function is used to calculate the length of string
select trim(' ram');
select char_length(trim(' ram'));

select trim(both 'a' from 'aaaanamanaaa');  -- trim is used which print naman
select replace('aaaanamanaaa' , 'a',''); -- replace with space

-- apply on column
select first_name, trim(both 'E' from first_name) from actor;

-- lpad / rpad (left padding / right padding) <= add something from right/left side
select lpad('10248','6' ,'@'); -- syntax(string , how much length you want, add character to acheive the length of string )

-- concat/substr/trim/char_length/lpad/rpad  ( Important Function )

-- Number function  => (round)
select 14.45, round(14.68), round(15.5);

select 23.68, round(23.68) , round(23.67 ,1);
select round(23.678 ,2);
select round(23.6 ,2);

-- now round off before decimal
select round(23.67 ,-1); -- round off tens place 
select round(189.67 ,-2);
select round(23.67 ,-2);

-- truncate (it extract values after decimal)
select round(23.67 , 1) , truncate(14.685 , 2); -- it will not work before decimal

-- floor and ceil
select floor(5.99999) , ceil(5.000001);

-- distinct function will give you all unique values
select distinct(amount) from payment;

-- function count(rows)
select count(first_name) from actor;

select count(distinct(first_name)) from actor;

