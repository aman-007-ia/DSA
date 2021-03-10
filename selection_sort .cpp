#include <iostream>
using namespace std;
void selection_sort(int a[],int n){
    for(int i=0;i<=n-1;i++){
        int index_mid=i;
        for(int j=i;j<=n-1;j++){
            if(a[j]<a[index_mid]){
                index_mid=j;
            }
        }swap(a[i],a[index_mid]);
    }
}
int main() {
	int n,key;
	cin >>n;
	int a[1000];
	for(int i=0 ;i<n;i++){
	    cin>>a[i];
	}
	selection_sort(a,n);
	for(int i=0;i<n;i++){
	    cout<<a[i]<<"  ";
	}
}
