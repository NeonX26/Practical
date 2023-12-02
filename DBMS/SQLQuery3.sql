create Trigger pract
ON TrialTable1
after delete
AS
Begin
 print 'Record deleted immediately'
End

delete 
from TrialTable1
where SalesPersonId=288