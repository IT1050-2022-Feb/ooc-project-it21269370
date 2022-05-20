#include"Payment.h" 
#define SIZE 2 
class Reserving
{
  private: 
	char OrderID[10]; 
	char OrderDate[15]; 
	char OrderDescription[100]; 
	double OrderPrice; 
	int count = 0; 
	Payment* payment[SIZE]; 
  public: 
	Reserving(); 
	Reserving(const char vOrderID[], const char vOrderDate[],const char 	vOrderDescription[], double vOrderPrice, int payt); 
	void calculateOrderPrice( char vType[], int vAmount); 
	void displayOrderPrice(); 
	void addReserving(); 
	~Reserving(); 
};