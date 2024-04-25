Select ASCII(ItemName) as ASCIICODE from Item
Select CHAR(ASCII(ItemName)) as FirstChar from Item
Select Concat(ItemName,' ',ItemName) from Item
Select len(Concat(ItemName,' ',ItemName)) as len from Item
select * from Item


ALL functions 
ASCII
CHAR
CHARINDEX
CONCAT
CONCAT_WS
FORMAT
DIFFERENCE
LEFT
LEN
LOWER
NCHAR
REPLACE
REPLICATE
REVERSE
SOUNDEX
STR
STRING_AGG
STRING_SPLIT
STUFF
TRANSLATE
TRIM
UPPER
SUBSTRING
