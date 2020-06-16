#include <iostream>
 
 using namespace std;
 int sum(int a);
 bool prime(int x);
 int main()
 {
 	int n;
 	cout << "enter the number :  ";
 	cin>> n;
 	
 	sum(n);
 	return 0;
 }
 int sum (int a)
 {
 	int i,j;
 	for(i=2;i<a;i++)
 	{
	if (prime(i))
	 {
 	 	for(j=i;j<a;j++)
 		{
 		  if (prime(j))
		   {
 			  if(i+j==a)
 			 {
 				cout << i << "+" << j << "=" << a << "\n";
			 }
		   }
	    }
     }
   }
}

bool prime(int x)
{
	int i;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		return false;
	}
		return true;
	
}
