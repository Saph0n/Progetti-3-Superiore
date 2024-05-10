#include <iostream>
using namespace std;

void swap(int a, int b) {
   int temp;
  
   temp = a;
   a = b;
   b = temp;
}

int main()
{
	int x, y;
	cout<<"Inserisci il numero x:";
	cin>>x;
	cout<<"Inserisci il numero y:";
	cin>>y;

	swap(x,y);

	cout<<x;
	cout<<y;
return 0;
}
