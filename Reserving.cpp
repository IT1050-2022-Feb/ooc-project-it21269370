#include "Payment.h" 
#include "Reserving.h" 
#include<cstring>
Reserving::Reserving()
{ 
	strcpy(OrderID, ""); 
	strcpy(OrderDate, ""); 
	strcpy(OrderDescription, ""); 
	OrderPrice = 0; 
} 
Reserving::Reserving(const char vOrderID[], const char vOrderDate[],const char 	vOrderDescription[], double vOrderPrice, int payt);
{ 
	strcpy(OrderID, vOrderID); 
	strcpy(OrderDate, vOrderDate); 
	strcpy(OrderDescription, vOrderDescription); 
	OrderPrice = 0; 
} 
void Reserving::calculateOrderPrice(int id, char payt[], double vamount) 
{ 
  if (count < SIZE)
  { 
	payment[count] = new Payment(id, payt, vamount); 
	count++; 
  } 
} 
void Reserving::displayOrderPrice() 
{
 
} 
void Reserving::addReserving() 
{
 
} 
Reserving::~Reserving() 
{ 
  for (int i = 0; i < SIZE; i++) 
  { 
	delete payment[i]; 
  } 
}