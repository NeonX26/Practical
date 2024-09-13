select sum(stock) as Stock,rate FROM Item
group by rate
Having Rate>100