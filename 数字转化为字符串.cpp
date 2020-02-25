#include<iostream>
#include<sstream> 
using namespace std;
int main(){
	int a =12;
	//方法一 
	stringstream ss;
	cout<<a<<endl;
	ss<<a;
	string a_str = ss.str();
	cout<<"方法一："<<a_str<<endl;
	
	//方法二
	cout<<"----------------分割线----------------"<<endl; 
	a_str = std::to_string(a);
	cout<<"方法二："<<a_str<<endl;
	
	
	return 0;
} 
