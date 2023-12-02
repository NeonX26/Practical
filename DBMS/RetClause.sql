select *
from Sales.Customer

select DISTINCT StoreID
from Sales.Customer


select *
from Sales.Customer
order by PersonID


select sum(StoreID) AS count
from Sales.Customer
group by StoreID


select count(personId) AS count
from Sales.Customer
group by StoreID
having StoreID>1000


select * INTO TrialTable1
from Sales.Store

select *
from TrialTable1


select substring(Name,1,5) As Abbr
from TrialTable1


select len(name) AS StringLength
from TrialTable1


