#include <iostream> 
using namespace std;

int main() {

	int n,key;
	cin>>n;
	int a[1000];
	for (int i=0;i<n;i++) {
	    cin>>a[i];
	}
	cout<<" enter the number = ";
	cin>>key;
	int i;
	for(i=0;i<n;i++){
	    if(a[i]==key){
	        cout<<key<<" found at "<<i<<" index ";
	        break;
	    }
	}
	if(i==n){
	    cout<<key<<" is not found at "<<endl;
	}
	return 0;
}
