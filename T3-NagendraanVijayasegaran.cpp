#include <iostream>

using namespace std;

struct CarType{
	string carModel;
	float carPrice;
	CarType * next;
};
CarType * newNode(string carModel)
{
	CarType *temp ; 
	temp->carModel = carModel;
	temp->carPrice = carPrice;
	temp->right = NULL;
	
	return temp;
}
int main ()
{
	int number;

	do
	{
		cout<<"Please choose what you want to do:"<<endl;
		cout<<"1. Add a car."<<endl;
		cout<<"2. Delet the next car."<<endl;
		cout<<"3. Go to the next car."<<endl;
		cout<<"0. Exit this program."<<endl;
		cout<<"Enter your choice:"<<endl;
		cin>> number;
		
		if(number == 1)
		{
			
		}
		else if(number == 2)
		{
		
		}
		else if(number == 3)
		{
	
		}
		else 
		{
		
		}
		
	}while(number!=0);
}
