use world;
select * from city;
select * from country;

-- her ek country ki her ek district ki population ?
select cnty.name , c.district, sum(c.population) 
from city as c inner join country as cnty
where c.countrycode = cnty.code
group by cnty.name, c.district;

-- get the district name , country code , country name and the region for each district 


select cnty.name ,c.district , sum(c.population)
from city as c inner join country as cnty
on c.countrycode = cnty.code
group by cnty.name, c.district;
-- lekin country name mai groupby  lagane k baad bhi afganistan 2 se jyada baar kyu aa rha hai ??


-- Q1 find out the total populationn for each language spoken ?
-- Q2 find the total population for each language spoken either is langugae official and unofficial language ?
-- task what is subQuery and what are its advantages?


select * from country;

-- Q1
select lan.language, sum(cnty.population) from country as cnty
inner join countrylanguage as lan on cnty.code = lan.countrycode
group by lan.language;

-- Q2
select * from countrylanguage;
select  lan.language, lan.isofficial, sum(cnty.population) from countrylanguage as lan
inner join country as cnty on cnty.code = lan.countrycode
group by lan.language , isofficial; 


-- Q3 find the actor name and the total no. of movies the actor made
-- Q4 get the name of the actor and the rating of the film along with avg length of the movie
use sakila;
select * from actor;
select * from film_actor;
select * from film;

from actor inner join film_actor on code = doc inner join film on 
