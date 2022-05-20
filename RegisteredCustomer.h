#include "RegisteredUser.h" 
#include "Vaccine.h" 
#define SIZE 5 
class RegCustomer : public RegisteredUser 
{
  private: 
	int NoOfVaccines; 
	Vaccine* buyVacc[SIZE]; 
  public: 
	RegCustomer(); 
	RegCustomer(int Userid[], const char Userpw[], const char 	name[], const char Telno[], const char email[], const char address[], int NoofVaccines); 
	void addbuyingvaccine(Vaccine* Buyvaccine); 
	void login(); 
	void displayCustomerDetails(); 
	~RegCustomer(); 
};
