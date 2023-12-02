select CURRENT_TIMESTAMP
AS TIME


select SalesOrderID AS Det
from Sales.SalesOrderDetail
MINUS
select SalesOrderID Head
from Sales.SalesOrderHeader

select ToCurrencyCode
from Sales.CurrencyRate
MINUS
select CurrencyCode
from Sales.Currency


select ToCurrencyCode, CurrencyCode
from Sales.CurrencyRate Right JOIN Sales.Currency
ON
ToCurrencyCode = CurrencyCode

