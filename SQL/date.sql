use world;
select * from country;

--  toatal population ?
select sum(population) from country; -- '6078749450'

select sum(population) from country where continent = 'asia'; 

select continent, sum(population) from country group by continent;

-- find population on the basis of region ?
select region, sum(population) from country group by region;

select * from country;

select continent, region , sum(population) from country group by continent , region; 

select continent , count(name) from country group by continent; -- ??? (count(name))

-- her saal kitni countries indepyear hui ?
select indepyear, count(name) from country group by indepyear;

-- find out how many contries got independent for eaach year in each continent ?
select continent , indepyear , count(name) from country group by continent , indepyear; 


-- select continent, count(name) as totalCountry from country group by continent where totalCountry > 30; -- give error
-- where clause ussi column per apply hota hai jo table mai exsist krta ho
-- where clause executed first 
-- where clause generally are not used on aggregate functions

-- as known as allias (rename)
select continent, count(name) as totalCountry from country group by continent having totalCountry > 30;
-- having clause is uised to filter the rows basd on aggregate functions
-- havinf clause is not used without group by keyword
-- having clause grroup by k baad mai lagega

-- you need to find the continent name and average population only for those continent where the avg population greater than 0.5 million ?
select continent , avg(population) as averagePopulation from country group by continent having averagePopulation > 5000000;

-- get me the avg population, total number of countries for each GovernmentForm  for the countries got the independence after 1890 and have atleast 4 countries ?
select governmentform, avg(population) , count(name) 
from country 
where  indepyear > 1890 group by governmentform having count(name) >= 4; 