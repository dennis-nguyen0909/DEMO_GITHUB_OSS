#include <iostream>

using namespace std;
int tong(int a, int b){
	return a+b;
}
int hieu(int a, int b)
{
	return a-b;

int tich(int a, int b){
	return a*b;
}
float thuong(int a, int b);

int main()
{	
	int x,y;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";

	cout << "Nhap x :"  << endl;
	cin >>x;
	cout << "Nhap y:" << endl;
	cin >>y;
	int tinhTong = tong(a+b);
	cout <<"Tong la : " << tinhTong<<endl;
	cout<<"Hieu la: "<<hieu(x,y)<<endl;
	cout << "Tich la: " << tich(x,y) << endl;
	system("pause");
	return 0;
}