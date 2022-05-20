#include "Selling.h"
#include<cstring>
Selling::Selling()
{
SellID = 0;
strcpy(SellDate, "");
strcpy(SellDescription, "");
SelPrice = 0;
}
Selling::Selling(int psellID, const char pselldate[], const char
pselldescription[], double psellprice, int pay1, int pay2)
{
SellPrice = psellprice;
strcpy(SellDate, pselldate);
strcpy(SellDescription, pselldescription);
SellID = psellID;
}
void Selling::calculateSellPrice(int id, const char pType[], double
pAmt)
{
if (count < SIZE)
{
payment[count] = new Payment(id, pType, pAmt);
count++;
}
}
void Selling::displaySelPrice()
{
}
void Selling::addSelling()
{
}
Selling::~Selling()
{
//Destructor
for (int i = 0; i < SIZE; i++)
{
delete payment[i];
}
}
