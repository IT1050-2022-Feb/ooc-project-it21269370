#include "Registereduser.h"
#include "vaccines.h"
#define SIZE 5
class VaccinationUnit :public Registereduser
{
private:
 int noOfvaccines;
 vaccines* VaccinationUnitApt[SIZE];
public:
 VaccinationUnit ();
VaccinationUnit( int userid[], const char userPassword[], int userid, const
char username[], const char useraddress[], const char useremail[], const char
usertelno [], int pnoOfvaccines);
 void addSellingvaccine(vaccines* pvacciunitApt);
 void login();
 void displayvacciunitDetails();
 ~vaccinationUnit();
};
