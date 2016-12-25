#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>

using namespace std;

void Reverse(char *str)
{
   if(*str)
   {
	   Reverse(str+1);
	   cout<<*str;
   }
}

int main()
{
    char *a;
	a=(char*)malloc(sizeof(char));
	gets(a);
	Reverse(a);
	cout<<endl;
	return 0;
}