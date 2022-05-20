class Payment
{
private:
int payID;
char payType[20];
double payAmount;
public:
Payment();
Payment(int ppayID,const char ppayType[],double ppayAmount);
void checkPayment();
void confirmPayment();
void displayPaymentDetails();
~Payment();
}; 
