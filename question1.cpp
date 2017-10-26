#include <iostream>
using namespace std;

int main() {
	int a;float f;double d;char c;
	cout<<"enter integer,float,double and character values\n";
	cin>>a>>f>>d>>c;
	int *aa;float *ff;double *dd; char *cc;
	aa=&a;
	ff=&f;
	dd=&d;
	cc=&c;
	cout<<"the size of interger type pointer is "<<sizeof(aa)<<"\n";
	cout<<"the size of float type pointer is "<<sizeof(ff)<<"\n";
	cout<<"the size of double type pointer is "<<sizeof(dd)<<"\n";
	cout<<"the size of character type pointer is "<<sizeof(cc);
	
	return 0;
}