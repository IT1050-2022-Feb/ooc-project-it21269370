#include "RegisteredUser.h" 
#include <cstring> 
RegisteredUser::RegisteredUser() 
{ 
	strcpy( UserID, ""); 
	strcpy( UserPassword, "");
} 
RegisteredUser::RegisteredUser(int UID, const char UPassword[], const char UName[], const char UserAddress[], const char TelNo[], const char UserEmail[]) : GuestUser(guestid, guestName, guestAddress, guestEmail, guestPNo) 
{ 
  strcpy(UserID, guestUsername); 
  strcpy(UserPassword, guestPassword); 
} 
void RegisteredUser::displayDetails() 
{ 

} 
void RegisteredUser::login() 
{ 

} 
void RegisteredUser::logout() 
{ 

} 
char RegisteredUser::checkLoginDetails() 
{ 
  return 0; 
} 
RegisteredUser::~RegisteredUser() 
{ 
	cout << “Destructor runs” << endl;
}
