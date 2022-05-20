#include "RegisteredCustomer.h" 

RegCustomer::RegCustomer() 
{ 
	NoOfVaccines = 0; 
} 

RegCustomer::RegCustomer (int Userid[], const char Userpw[], const char 	name[], const char Telno[], const char email[], const char address[], int NoofVaccines):RegisteredUser(int UID, const char UPassword[], const char UName[], const char UserAddress[], const char TelNo[], const char UserEmail[]) 
{ 
	NoofVaccines = NoOfVaccines;
} 

void RegCustomer::addbuyingvaccine(Vaccine* vbuyVacc)
{ 
  if (NoofVaccines < SIZE) 
  { 
	buyvacc[NoofVaccines] = vbuyvacc; 
	NoofVaccines ++; 
  } 
} 

void RegCustomer::login() 
{ 

} 

void RegCustomer::displayCustomerDetails() 
{ 

} 

RegCustomer::RegCustomer() 
{ 
  for (int i = 0; i < SIZE; i++) 
  { 
	delete buyvacc[i]; 
  } 
}
