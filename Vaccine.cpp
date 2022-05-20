#include "Vaccine.h"
#define SIZE1 2
#define SIZE2 2
Vaccine::Vaccine()
{
}
Vaccine::Vaccine(int sell1, int sell2, int Vaccine1, int Vaccine2,
VaccinationUnit* pVaccinationUnit, RegisteredCustomer* pRegisteredCustomer, StaffUnit* pstaffUnit)
{
sell[0] = new Selling(sell1);
sell[1] = new Selling(sell2);
Order[0] = new Reseving(Order1);
Order[1] = new Reseving(Order2);
VaccinationUnit = pVaccinationUnit;
RegisteredCustomer = pRegisteredCustomer;
staffUnit = pstaffUnit;
}
void Vaccine::VaccineDetails(int VaccineID, const char VaccineName,
double VaccinePrice,const char VaccineStatus, VaccinationUnit* pVaccinationUnit, RegisteredCustomer* RegisteredCustomer, StaffUnit* pstaffUnit)
{
}
void Vaccine::deleteVaccineDetails()
{
}
void Vaccine::updateVaccineDetails()
{
}
