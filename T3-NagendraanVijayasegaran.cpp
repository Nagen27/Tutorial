#include <iostream>

using namespace std;

struct CarType{
	string carModel;
	float carPrice;
	CarType * next;
};
CarType * newNode(string carModel)
{
	CarType * temp ; //= newNode;
	temp->carModel = carModel;
	temp->carPrice = carPrice;
	temp->next = NULL;
	
	/*cout<<"Enter the name and of car #"<<i<<endl;
	cin>>a[i].carModel>>a[i].carPrice;	*/	
	
	return temp;
}

