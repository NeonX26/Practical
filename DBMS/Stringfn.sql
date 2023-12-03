Select ASCII(ItemName) as ASCIICODE from Item
Select CHAR(ASCII(ItemName)) as FirstChar from Item
Select Concat(ItemName,' ',ItemName) from Item
Select len(Concat(ItemName,' ',ItemName)) as len from Item
select * from Item