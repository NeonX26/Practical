Declare @ItemCode int,
	   @Name varchar(50),
	   @Rate int
Declare ItemCursor cursor
For select ItemCode,ItemName,Rate
from Item


Open ItemCursor
While @@FETCH_STATUS = 0
Begin
Fetch Next From ItemCursor Into @ItemCode, @Name, @Rate
Print cast(@ItemCode as varchar)+' '+@Name+' '+cast(@Rate as varchar)
End
Close ItemCursor