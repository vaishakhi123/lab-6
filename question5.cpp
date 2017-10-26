#include <iostream>

using namespace std;

int main() {
	int c,i;
	char arr[10];char *p;
	cin>>arr;
	p=&arr[0];
            for (i =10; i>=0; i--) {
               cout<<"\n";
                for (c =10-i; c<10; c++) {
                        cout<<*(p+c);
                }
        }
	return 0;
}