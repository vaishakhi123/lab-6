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
	cout<<"the size of interger is "<<sizeof(a)<<"and "<<"size of pointer is "<<sizeof(aa)<<"\n";
	cout<<"the size of float is "<<sizeof(f)<<" and"<<"size of pointer is "<<sizeof(ff)<<"\n";
	cout<<"the size of double is "<<sizeof(d)<<" and"<<"size of pointer is "<<sizeof(dd)<<"\n";
	cout<<"the size of character is "<<sizeof(c)<<"and "<<"size of type pointer is "<<sizeof(cc);
	
	return 0;
}