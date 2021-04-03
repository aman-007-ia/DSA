#include <iostream>
#include<string>
using namespace std;

int main() {
	string s0;
	string s1("hello");
	string s2=s1;
	string s3(s2);
	char a[]={'h','e','l','l','o','\0'};
	string s4(a);
	string s5="hello world";
	cout<<s0<<endl;
	cout<<s1<<endl;
	cout<<s2<<endl;
	cout<<s3<<endl;
	cout<<s4<<endl;
	cout<<s5<<endl;
	if(s0.empty()){
	    cout<<" s0 is empty "<<endl;
	}
	s0.append("i love c++");
	cout<<s0<<endl;
	s0+=" and python";
	cout<<s0<<endl;
	cout<<s0.length()<<endl;
	s0.clear();
	cout<<s0.length()<<endl;
	s0="apple";
	s1="mango";
	cout<<s0.compare(s1)<<endl;
	cout<<s1.compare(s0)<<endl;
	cout<<s1.compare(s1)<<endl;
	if(s0<s1){
	    cout<<" mango is greater than apple"<<endl;
	}
	cout<<s0[0]<<endl;
	string s=" i want to have apple juice";
	int idx=s.find("apple");
	cout<<idx<<endl;
	string word="apple";
	int len=word.length();
	cout<<s<<endl;
	s.erase(idx,len+1);
	cout<<s<<endl;
	for(int i=0;i<s1.length();i++){
	    cout<<s1[i]<<" ,";
	}
	cout<<endl;
	/*for(auto it=s1.begin();it<s1.end();it++){
	    cout<<(*it)<<" .";
	}*/
	for(string::iterator it=s1.begin();it!=s1.end();it++){
	    cout<<(*it)<<" ;";
	}
	cout<<endl;
	for(char c:s1){
	    cout<<c<<" :";
	}
	
	return 0;
}
