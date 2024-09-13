USE [FYMCA2023]


CREATE TABLE Item(
	ItemCode int NOT NULL,
	ItemName varchar](20) NOT NULL,
	UnitMeasure varchar(10),
	Rate int,
	MaxStock int,
	MinStock int,
	Stock int,
	DrawingSP varchar(10),
PRIMARY KEY CLUSTERED 
(
	[ItemCode] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]


ALTER TABLE [dbo].[Item] ADD  DEFAULT ('DR1000') FOR [DrawingSP]


ALTER TABLE [dbo].[Item]  WITH CHECK ADD CHECK  (([Stock]>=[MinStock] AND [Stock]<=[MaxStock]))


ALTER TABLE Item  WITH CHECK ADD CHECK  (([UnitMeasure]='nos' OR [UnitMeasure]='ltr' OR [UnitMeasure]='tonn' OR [UnitMeasure]='kg' OR [UnitMeasure]='mtr'))


