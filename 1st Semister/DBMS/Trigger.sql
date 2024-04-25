Create Trigger ItemTrigger
ON Item
AFTER UPDATE
AS
Print 'Table is updated';
go

update Item
set Rate= 40
where ItemCode=1