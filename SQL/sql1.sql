create database testdb;
 use testdb;
 
 CREATE TABLE customers (
    customerid INT PRIMARY KEY,
    name VARCHAR(50),
    city VARCHAR(50)
);

CREATE TABLE orders (
    orderid INT PRIMARY KEY,
    productid INT,
    pname VARCHAR(50),
    price DECIMAL(10,2),
    customerid INT
);

INSERT INTO customers (customerid, name, city) VALUES
(1, 'Alice', 'New York'),
(2, 'Bob', 'London'),
(3, 'Charlie', 'Mumbai'),
(4, 'Diana', 'Sydney'),
(5, 'Ethan', 'Toronto');

INSERT INTO orders (orderid, productid, pname, price, customerid) VALUES
(101, 201, 'Laptop', 800.00, 1),
(102, 202, 'Mouse', 25.00, 1),
(103, 203, 'Keyboard', 45.00, 2),
(104, 204, 'Monitor', 200.00, 2),
(105, 205, 'Printer', 150.00, 3),
(106, 206, 'Tablet', 300.00, 3),
(107, 207, 'Mobile', 500.00, 4),
(108, 208, 'Headphones', 75.00, 4),
(109, 209, 'Camera', 600.00, 5),
(110, 210, 'Speaker', 120.00, 5);

select * from orders;

select orders.orderid , orders.productid, orders.pname, orders.price , orders.customerid from orders;

select customers.customerid, customers.name from customers; 

-- JOIN two tables 

select orders.orderid , orders.productid, orders.pname, orders.price , orders.customerid ,
customers.customerid, customers.name from orders
join customers where orders.customerid = customers.customerid;

-- decalare column name shortcut

select o.orderid , o.productid, o.pname, o.price , o.customerid ,
c.customerid, c.name from orders as o
join customers as c where o.customerid = c.customerid;



use world;

select * from city;
select * from country;

-- Ques1 - get the city id , city name and the country code for the city
-- Ques2 - get the country code , country name, conitnent and the population for each country.
-- Ques3 -  get the city id , ciy name and the country name for each city they are present

select city.id, city.name, city.countrycode from city;
select country.code, country.name , country.continent , country.population from country;

select city.id, city.name , country.name , country.population from city 
join country 
where city.countrycode = country.code and country.name = 'argentina';

-- question
select * from country;
select * from countrylanguage; 

-- you need to find out the country name and all the languages is spoken in that country
select lan.language , country.name from countrylanguage as lan
join country where lan.countrycode = country.code and language = 'english';

-- using the new syntax
select lan.language , country.name from countrylanguage as lan
inner join country on lan.countrycode = country.code where language = 'english';
