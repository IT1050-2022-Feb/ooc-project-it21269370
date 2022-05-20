#include"Selling.h" 
#include"Reserving.h" 
#include"Payment.h" 
#define SIZE1 5 
#define SIZE2 5 
#define SIZE3 5 
class Report 
{ 
  private: 
	Reserving* reserve[SIZE1]; 
	Selling* sell[SIZE2]; 
	Payment* pay[SIZE3]; 
  public: 
	Report(); 
	Report(Reserving* vreserve[], Selling* vsell[], Payment* vpay[]); 
	void reservingDetailsReport(); 
	void sellingDetailsReport(); 
	void paymentDetailsReport(); 
	~Report(); 
};