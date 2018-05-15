#include<iostream>
#include<string>
using namespace std;
int main(){
	string name;
	cout<<"Enter same name again"<<endl;
	getline(cin,name);
	const string third="Hello "+name;
	const string first(third.size()+4,'*');
	const string spaces(third.size(),' ');
	cout<<first<<endl;
	cout<<"* "+spaces+" *"<<endl;
	cout<<"* "+third+" *"<<endl;
	cout<<"* "<<spaces<<" *"<<endl;
	cout<<first<<endl;
	
	return 0;
}