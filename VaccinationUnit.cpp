#include "VaccinationUnit.h"
VaccinationUnit::VaccinationUnit()
{
noOfvaccines = 0;
}
VaccinationUnit::VaccinationUnit(const char userName[], const char userPassword[], int userid, 
const char username[], const char useraddress[], const char useremail[], const
char usertelno[], int pnoOfvaccines) :Registereduser(userName, 
userPassword, userid, username, useraddress, useremail, usertelno)
{
noOfvaccines = pnoOfvaccines;
}
void VaccinationUnit::addSellingvaccine(vaccines* pvacciunitApt)
{
if (noOfvaccines < SIZE)
{
vacciunitApt[noOfvaccines] = pvacciunitApt;
noOfvaccines++;
}
}
void VaccinationUnit::login()
{
}
void Seller::displayvacciunitDetails()
{
}
VaccinationUnit::~VaccinationUnit()
{
//Destructor 
}
