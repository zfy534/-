#include<iostream>
#include<sstream> 
using namespace std;
int main(){
	int a =12;
	//����һ 
	stringstream ss;
	cout<<a<<endl;
	ss<<a;
	string a_str = ss.str();
	cout<<"����һ��"<<a_str<<endl;
	
	//������
	cout<<"----------------�ָ���----------------"<<endl; 
	a_str = std::to_string(a);
	cout<<"��������"<<a_str<<endl;
	
	
	return 0;
} 
