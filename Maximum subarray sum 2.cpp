#include <iostream>
using namespace std;
int main() {
	int n,i,j,k;
	cin >>n;
	int a[1000];
	int cumsum[1000]={0};
	int currentsum = 0;
	int maximum = 0;
	int left = -1;
	int rigth = -1;
	cin>>a[0];
	cumsum[0]=a[0];
	for(int i=0 ;i<n;i++){
	    cin>>a[i];
	    cumsum[i]=cumsum[i-1]+a[i];
	}
	for(i=0;i<n;i++){
	    for(j=i;j<n;j++){
	        currentsum = 0;
	        currentsum=cumsum[j]-cumsum[i-1];
	        if(currentsum>maximum){
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