use AdventureWorks2019


select FirstName, MiddleName, LastName
from Person.Person
where MiddleName !=
(
  select FirstName
  from Person.Person
  where BusinessEntityID=1
 );




select *
from Sales.SalesOrderDetail



select count(RevisionNumber) AS count 
from Sales.SalesOrderHeader


select sum(OrderQty) AS TotalOrder
from Sales.SalesOrderDetail



select MIN(UnitPrice) AS LowestPrice
from Sales.SalesOrderDetail



select MAX(UnitPrice) AS HighestPrice
from Sales.SalesOrderDetail



select AVG(UnitPrice) AS AveragePrice
from Sales.SalesOrderDetail

select *
from Person.Person