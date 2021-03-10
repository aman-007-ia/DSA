#include <iostream>
using namespace std;
int main() {
	int n,i,j,k;
	cin >>n;
	int a[1000];
	int currentsum = 0;
	int maximum = 0;
	int left = -1;
	int rigth = -1;
	for(int i=0 ;i<n;i++){
	    cin>>a[i];
	}
	for(i=0;i<n;i++){
	    for(j=i;j<n;j++){
	        currentsum = 0;
	        for(k=i;k<=j;k++){
	            currentsum+=a[k];
	        }if(currentsum>maximum){
	            maximum=currentsum;
	            left = i;
	            rigth = j;
	        }
	    }
	}
	cout<<" maximum "<<maximum<<endl;
	for(k=left;k<=rigth;k++){
	    cout<<a[k]<<" ";
	}
}