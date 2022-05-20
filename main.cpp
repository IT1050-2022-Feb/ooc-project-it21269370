#include "GuestUser.h"
#include "RegisteredUser.h"
#include "RegisteredCustomer.h"
#include "VaccinationUnit.h"
#include "Vaccine.h"
#include "Selling.h"
#include "Reserving.h"
#include "Payment.h"
#include "Report.h"
#include <iostream>
using namespace std;
int main()
{
 //---- Object creation ------

GuestUser* rg = new RegisteredCustomer(); // Object - RegisteredCustomer class
 RegisteredCustomer* vaccinationUnit = new vaccinationUnit(); // Object - vaccinationUnit class
 RegisteredUser*RegisteredCustomer  = new RegisteredCustomer(); // Object - RegisteredCustomer class
 Vaccine*Vaccine = new Vaccine(); // Object - Vaccine class
 Selling* selling = new Selling(); // Object - Selling class
 Reserving* Reserving = new Reserving(); // Object - Reserving class
 StaffUnit* staffUnit = new Staff(); // Object - StaffUnit class
 Report* report = new Report(); // Object - Report class

 //----Method Calling------
 rg->login();
 rg->displayDetails();
 
 vaccinationUnit->login();
 vaccinationUnit->displayvaccinationUnitDetails();
 RegisteredCustomer->login();
 RegisteredCustomer->displayRegisteredCustomerDetails();
 Vaccine->updateVaccineDetails();
 Vaccine->checkAvailability();
 selling->addSelling();
 selling->displaySellPrice();
 Reserving->addReserving();
 Reserving->displayOrderPrice();
 report->ReservingDetailsReport();
 report->sellingDetailsReport();
 report->paymentDetailsReport();
 //----Delete Dynamic objects------
 delete rg;
 delete vaccinationUnit;
 delete RegisteredCustomer;
 delete Vaccine;
 delete selling;
 delete Reserving;
 delete report;
 return 0;
}
