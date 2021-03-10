#include <iostream>
using namespace std;
int main() {
	int a[]={1,3,5,7,10,11,12,13};
	int sum=16;
	/*brute force
	for(int i=0;i<8;i++){
	    for(int j=1;j<8;j++){
	        if(a[i]+a[j]==sum){
	            cout<<a[i]<<" "<<a[j]<<endl;
	        }
	    }
	}*/
	int i=0;
	int j = sizeof(a)/sizeof(int)-1;
	while(i<j){
	    int current_sum=a[i]+a[j];
	    if(current_sum>sum){
	        j--;
	    }
	    else if(current_sum<sum){
	        i++;
	    }
	    else if(current_sum==sum){
	        cout<<a[i]<<"  "<<a[j]<<endl;
	        i++;
	    }
	}
}