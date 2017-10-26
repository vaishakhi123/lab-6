#include <iostream>
#include<string>
using namespace std;

int main() {
	int len,j,i;
	char arr[10],*p;
	cin>>arr;
	p=&arr[0];
            for (i =0; i<=10; i++) {
               cout<<"\n";
                for (j=10-i; j<10; j++) {
                        cout<<*(p+j);
                }
        }
	return 0;
}