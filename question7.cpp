#include <iostream>
using namespace std;

void Strcpy(char str[]);
void Strlen(char str[]);
void Strcat(char str1[],char str2[]);
void Strcom(char str1[],char str2[]);
void Strchr(char str[],char c);
void Strstr(char str[],char sub[]);



int main() {
	char str1[5],str2[5],sub[5];char c;
	cout<<"input two strings\n";
	cin>>str1>>str2;
	cout<<"enter a character to check it occurence"<<endl;
	cin>>c;
	cout<<"enter a substring"<<endl;
	cin>>sub;
              Strcpy( str1);
              Strlen(str1);
              Strcat( str1, str2);
              Strcom( str1,str2);
              Strchr( str1,c);
              Strstr(str1,sub);

	return 0;
}
void Strcpy(char str[]){
	char arr[100];int i;
	for(i=0;str[i]!='\0';i++)
	{
		arr[i]=str[i];
	}
	arr[i]='\0';
	cout<<"the copied string is "<<arr<<"\n";
}
void Strlen(char str[])
{
	int len=0,i;
	for(i=0;str[i]!='\0';i++)
	{
		len++;
	}
	cout<<"the length of the string is "<<len;
}
void Strcat(char str1[],char str2[]){
	int i,j;
	for(i = 0; str1[i] != '\0'; i++);

    for(j = 0; str2[j] != '\0'; j++, i++)
    {
        str1[i] = str2[j];
    }
	cout<<"\nthe combined string is "<<str1;
}
void Strcom(char str1[],char str2[]){
	int i,j,c=0;
	for(i=0;(str1[i]!='\0'||str2[i]!='\0');i++)
	{
	       if(str1[i] != str2[i])
	       {
	            c = 1;
	             break;
             	}


	}
	if(c == 0)
	cout<<"\nBoth strings are same.";
	else
	cout<<"\nBoth strings not same."<<endl;
	
}
void Strchr(char str[],char c)
{
char* p = NULL;
    int i ;
    for(i = 0; str[i]!='\0';i++)
    {
        if(str[i] == c)
        {
            p = &str[i];
            break;
        }
    }
   cout<<"the character "<<c<<" is found at position "<<i; 
}
void Strstr(char str[],char sub[])
{
    
    int i = 0, j = 0;
   
    while ((str[j] != '\0')||(sub[i] != '\0')) 
    {
        if (sub[i] != str[j])
        {
            j++;
            i = 0;
        }
        else {
            i++;
            j++;
        }
    }
    if (sub[i] == '\0')
        cout<<"\nSubstring found in "<<str;
    else
        cout<<"\nSubstring not found";
}
