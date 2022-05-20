#include "Report.h" 
Report::Report() 
{ 
  for (int i = 0; i < SIZE1; i++) 
  { 
	Reserve[i] = 0; 
  } 

  for (int j = 0; j < SIZE2; j++) 
  { 
	Sell[j] = 0; 
  } 

  for (int x = 0; x < SIZE3; x++) 
  { 
	Pay[x] = 0; 
  } 
} 

Report::Report(Reserving* vReserve[], Selling* vSell[], Payment* vPay[]) 
{ 
  for (int i = 0; i < SIZE1; i++) 
  { 
	reserve[i] = vReserve[i]; 
  } 

  for (int j = 0; j < SIZE2; j++) 
  { 
	sell[j] = vSell[j]; 
  } 

  for (int x = 0; x < SIZE3; x++) 
  { 
	pay[x] = vPay[x]; 
  } 
} 

void Report::reservingDetailsReport() 
{ 

} 
void Report::sellingDetailsReport() 
{ 

} 
void Report::paymentDetailsReport() 
{ 

} 

Report::~Report() 
{ 
  for (int i = 0; i < SIZE1; i++) 
  { 
	delete reserve[i]; 
  } 

  for (int j = 0; j < SIZE2; j++) 
  { 
	delete sell[j]; 
  } 

  for (int x = 0; x < SIZE3; x++) 
  { 
	delete pay[x]; 
  } 
}