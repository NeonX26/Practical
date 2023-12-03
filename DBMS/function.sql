--Creating a function to get rate multiply by 45

Create Function fn_rate(@Rate int)
returns int as
Begin
	Return @Rate*45;
End;

select ItemCode, Rate, dbo.fn_rate(Rate) as RateOf45
From Item