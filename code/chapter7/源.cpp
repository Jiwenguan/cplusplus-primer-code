#include<iostream>
using namespace std;
class Person {
	string m_name;
	string m_address;
public:
	string getPersonname(void)const{
		return m_name;
	}
	string getPersonaddress(void)const {
		return m_address;
	}
};
void add(int a,int b) {
	for (; a < b; a++)
		cout << " " << a ;
	cout << endl;
}

int main() {
	//int m=add();
	//cout<<"50加到100的结果是"<<m<<endl;
	int a = 0, b = 0;
	cin >> a >> b;
	add(a, b);
	
	
	
	while (1);
	return 0;
}