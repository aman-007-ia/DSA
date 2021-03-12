#include <iostream>
using namespace std;

int main() {
	int b[]={1,2,3,4,5};
	cout<<b<<endl;
	char a[]={'a','b','c','d'};
	cout<<a<<endl;
	char s1[]={'h','e','l','l','o','\0'};
	char s2[]="world";
	cout<<s1 <<sizeof(s1)<<endl;
	cout<<s2 <<sizeof(s2)<<endl;
	return 0;
}
