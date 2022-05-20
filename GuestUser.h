#include "Vaccines.h"
class GuestUser
{
protected:
int userID;
char userName[20];
char userAddress[30];
char userEmail[30];
char userphoneNumber[10]

public:
GuestUser();
GuestUser(int puserid, const char puserName[], const char
puserAddress[], const char puserEmail[] ,const char userPHno[]);
void searchvaccines(vaccines* pApt);
void registerUser();
virtual void displayDetails();
~GuestUser();
};
