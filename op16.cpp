#include<iostream>
using namespace std;
int main()
{
 	int num=132,rev,first,mid,last;
 	first=num/100;
 	last=num%10;
 	mid=(num/10)%10;
 	cout<<"first number:"<<first<<endl;
 	cout<<"mid digit:"<<mid<<endl;
	cout<<"last digit:"<<last<<endl;
	cout<<last<<mid<<first<<endl;
	return 0;
}
 	
