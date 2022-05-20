#include "Reserving.h"
#include "Selling.h"
#include "VaccinationUnit.h"
#include "RegisteredCustomer.h"
#include "StaffUnit.h"
#define SIZE1 2
#define SIZE2 2
class Vaccine
{
private:
int VaccineID;
char VaccineName[20];
double VaccinePrice;
char VaccineStatus[50];
int count = 0;

Reserving* Vaccine[SIZE1];
Selling* sell[SIZE2];
VaccinationUnit* VaccinationUnit;
RegisteredCustomer* RegisteredCustomer;
StaffUnit* staffUnit;

public:
	
  Vaccine();
  Vaccine(int sell1, int sell2, int Vaccine1, int Vaccine2,VaccinationUnit*
pVaccinationUnit, RegisteredCustomer* pRegisteredCustomer,StaffUnit* pStaffUnit);
  void VaccineDetails(int VaccineID , const char  VaccineName,
double VaccinePrice,  const char VaccineStatus, VaccinationUnit* pVaccinationUnit , RegisteredCustomer* pRegisteredCustomer , StaffUnit* pstaffUnit);
  void deleteVaccineDetails();
  void updateVaccineDetails();
  void calculateVaccinePrice();
  void searchVaccines();
  void displayVaccineDetails();
  void checkAvailability();
  ~Vaccine();
};
