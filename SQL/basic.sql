show databases;

create database adhikari;

use adhikari;

show tables;

create table students( sId int , sName char(10));
show tables;

-- to use database
use sakila;

show tables;

-- explain the structure of table
describe actor;

-- how to select the data from column select(access data)
-- select column     from       table_name  

select *from actor;  -- prints all column data 
select actor_id ,first_name from actor;  -- print single column data 
select actor_id , first_name , actor_id *10 from actor; -- select will not change the original data

select *from actor;

-- how to access rows 
-- select *from where condition
select	* from actor where actor_id = 3;
select	* from actor where actor_id > 3;
select	* from actor where actor_id != 3;

-- opertaors >=,<=,=,!= (<>)

-- finding string data
select * from actor where first_name = 'NICK';
select * from actor where first_name = 'A'; 

-- logical operator(and, or)
select * from actor where actor_id > 3 and actor_id < 7;
select * from actor where actor_id = 3 and actor_id = 5; -- No output

select * from actor where actor_id = 3 or actor_id = 5; 

select * from actor where actor_id > 2 and actor_id >4 or actor_id = 7;

-- ------------concatinatin ------------
use sakila;
select * from actor; -- to saw all the columne
select actor_id,first_name , last_name , concat(actor_id,'_',first_name,' ' ,last_name) from actor;
select first_name, last_name, concat(first_name,' @ ',last_name,first_name,last_name) from actor; 

-- concat with seperator
select first_name, last_name, concat(first_name,last_name),
concat_ws(' rand ','MR' ,first_name, last_name) from actor;

select first_name, last_name,concat_ws(' @ ',' M ' ,first_name, last_name,first_name,last_name) 
from actor; -- first is seperator and second is just a word that you wan to add

-- substr => extract kuch portion ko ( extract data basis of position )
select first_name, last_name, substr(last_name, 2) from actor;  -- positive rakhoge toh aage se 
select first_name, last_name, substr(last_name, -2) from actor;  -- negative rakhoge toh peeche se
select first_name, last_name, substr(last_name, 1, 3) from actor; -- range kaha se kaha tk print krna hai 
select first_name, last_name, substr(last_name, -3,1) from actor; -- first num is direction and second is how many times it will run


-- finding name start with A or E
select * from actor
where first_name like '%A' or first_name like 'E%';

select *, substr(first_name,1,1) from actor 
where substr(first_name ,1,1) = 'A' or substr(first_name,1,1) = 'E';

use sakila;
-- replace character 
select first_name, replace (first_name, 'A' ,'@') from actor; -- remove A and and place @ on A place
select first_name, replace (first_name, 'E' ,'') from actor; -- remove E 
