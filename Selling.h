#include"Payment.h"
#define SIZE 2
class Selling {
private:
int SellID;
char SellDate[20];
char SellDescription[50];
double SellPrice;
int count = 0;
Payment* payment[SIZE];
public:
Selling();
Selling(int psellID, const char pselldate[], const char
pselldescription[], double psellprice, int pay1, int pay2);
void calculateSellPrice(int id, const char pType[], double
pAmt);
void displaySellPrice();
void addSelling();
~Selling();
};