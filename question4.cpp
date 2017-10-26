#include <iostream>
using namespace std;

char pointer_method(string name,int s);
int main(){

   	int i,s=0,j;
	string name = " ";
	cout <<"Enter your name\n";
	cin >>name;
	char *p;p = &name[0];
	s = name.size();
	pointer_method(name,s);
            cout<<"\nyour name is: ";
    for(i=0;i<s;i++)
    {
    	cout<<name[i];
    }
    
	return 0;
}
char pointer_method(string name,int s){
    char *p;
    p=&name[0];
    
    cout<<"your name is: ";
    for(int i=0;i<s;i++)
    {   cout<<*(p+i);
	
    }
    
}