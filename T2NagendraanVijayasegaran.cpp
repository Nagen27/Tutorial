#include <iostream>

using namespace std;

struct CarType{
	string carModel;
	float carPrice;
};

int main()
{
		int NumCar;
		cout<<"How many cars ?";
		cin>>NumCar;
		
		struct CarType *a;
		
		a = new struct CarType[NumCar];
	//	a = new struct CarType[];
		
		for(int i=0;i<NumCar;i++)
		{
			cout<<"Enter the name and of car #"<<i<<endl;
			cin>>a[i].carModel>>a[i].carPrice;
		}
		
		cout<<"-----------------------------------------";
		
			for(int x=0;x<NumCar;x++)
		{
			
			cout<<"\n"<<a[x].carModel<<" RM"<< a[x].carPrice;
		}
		
		return 0; 
		
}
