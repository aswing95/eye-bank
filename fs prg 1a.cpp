#include<iostream>	
#include<string>
#include<stdlib.h>
using namespace std;
int main()		
{
	string name, rev;
	int count, i,j;

	system("clear");	
	
	cout<<"\nEnter the number of Names: \n";
	cin>>count;
	
	for(i=0;i<count;i++)
	{
		
		cout<<"\nEnter name:   ";
		cin>> name;

		rev.erase();		//clears the content of the string... C++ string class function
		
		for(j=name.length(); j>=0; j--)
			rev+=name[j];	//"+" is used for concatenation (operator overloading)
		
		cout<<"\nReverse:  "<<rev<<endl;
	}
	return 0;	//required! since return type of main is int
}
