#include <iostream>
using namespace std;
int print_normal_method(int arr[]);
int pointer_method(int arr[]);
int main() {
   int arr[10];
    int i;
    for(i=0;i<10;i++)
       cin>>arr[i];
       cout<<"the array is\n";
     print_normal_method(arr);
     pointer_method(arr);
	return 0;
}
int print_normal_method(int arr[])
{ 
	cout<<"the array is \n";
	for(int i=0;i<10;i++)
	    cout<<arr[i]<<"\n";
}
int pointer_method(int arr[])
{ 
	int *p;int i;
	p=&arr[0];
	for(i=0; i<10; i++)
        cout<<*(p+i)<<"\n";
    
}