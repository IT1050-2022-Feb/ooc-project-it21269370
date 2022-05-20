#include "GuestUser.h"
#include <cstring>
GuestUser::GuestUser()
{
userID = 0;
strcpy(userName, "");
strcpy(userAddress, "");
strcpy(userEmail, "");
strcpy(userphoneNumber, "0000000000");
}
GuestUser::GuestUser(int pusertid, const char puserName[], const char
puserAddress[], const char puserEmail[], const char userPHno[])
{
userID = puserid;
strcpy(userName, puserName);
strcpy(userAddress, puserAddress);
strcpy(userEmail, puserEmail);
strcpy(userphoneNumber, userPHno);
}
void GuestUser::searchvaccines(vaccines* pApt)
{
}
void GuestUser::registerUser()
{
}
void GuestUser::displayDetails()
{
}
GuestUser::~GuestUser()
{
//Destructor 
}
