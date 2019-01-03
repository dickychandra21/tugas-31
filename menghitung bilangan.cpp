#include <iostream>
using namespace std;
int main()
{
	int bil1, bil2, bil3, terbesar;
	cout<<"masukkan bilangan 1 : ";
	cin>>bil1;
	cout<<"masukkan bilangan 2 : ";
	cin>>bil2;
	cout<<"masukkan bilangan 3 : ";
	cin>>bil3;
	
	{
		if(bil1 > bil2)
		terbesar = bil1;
		
		else
		terbesar = bil2;
		
		if(bil3 > terbesar)
		terbesar = bil3;
		
		cout<<endl;
		cout<<"nilai terbesar = "<<terbesar;cout<<endl;}
		
		return 0;
		
}

