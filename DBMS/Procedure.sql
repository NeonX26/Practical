--To create stored procedures to update a record 
Create procedure ItemUpdate1 
as
BEGIN
	Update Item
	set Rate=39
	From Item
	where ItemCode=1
    Print 'Record is Changed successfully'
End
Go

exec ItemUpdate1