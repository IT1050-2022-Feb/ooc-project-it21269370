#include"GuestUser.h" 
class RegisteredUser : public GuestUser 
{ 
  protected:
	int UserID; 
	char UserPassword[15]; 
  public: 
	RegisteredUser(); 
	RegisteredUser(int UID, const char UPassword[], const char UName[], const char UserAddress[], const char TelNo[], const char UserEmail[]);
	void login();
	void displayDetails();
	void logout();
	char checkLoginDetails();
	~RegisteredUser();
};
