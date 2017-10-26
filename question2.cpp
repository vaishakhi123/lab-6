#include <iostream>
using namespace std;
int first_part(int a, int b, int *p)
{
	b = *p;
	cout <<"a is "<<a<<" "<<"b = "<<b<<" "<<"p is "<<*p<<endl;
	return 0;
	
}

int second_part(int a, int b, int *p)
{
            cout <<"a is "<<a<<" "<<"b = "<<b<<" "<<"p is "<<*p<<endl;
	return 0;
}

int third_part(int a, int b, int *p)
{
	p = &b;
	cout <<"a is "<<a<<" "<<"b = "<<b<<" "<<"p is "<<*p<<endl;
	return 0;
}

int main()
{
	int a,b;int *p;
	p=&a;
            cin>>a>>b;
            first_part(a,b,p);
	second_part(2,3,p);
	third_part(a,b,p);
	return 0;
}