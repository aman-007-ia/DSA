#include<iostream>
using namespace std;
int main() {
    int n;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int cs=a[0];
    for(int i=1;i<n;i++){
		if(cs<a[i])
		cs=a[i];
	}
	cout<<cs;
	return 0;
}