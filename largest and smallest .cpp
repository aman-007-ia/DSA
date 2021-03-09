#include <iostream> 
#include<climits>
using namespace std;

int main() {

	int n,key;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	int largest = INT_MIN;
	int smallest = INT_MAX;
	for(int i=0;i<n;i++){
	    largest=max(largest,a[i]);
	    smallest=min(smallest,a[i]);
	}
	cout<<largest<<" max "<<endl;
	cout<<smallest<<" min "<<endl;
	return 0;
}
