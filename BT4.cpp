#include<iostream>
//BT4
using namespace std;

main()
{
	int a,m;
	cout<<"Nhap vao so 5 chu so nho hon 10000 : ";
	cin>>a;
	int hangnghin,hangtram,hangchuc,donvi;
	hangnghin=a/1000;
	hangtram=(a-(hangnghin*1000))/100;
	hangchuc=(a-(hangnghin*1000)-(hangtram*100))/10;
	donvi=a-(hangnghin*1000)-(hangtram*100)-(hangchuc*10);
	m=hangnghin;
	if(m<=hangtram)
	{
		m=hangtram;
	}
	if(m<=hangchuc)
	{
		m=hangchuc;
	}
	if (m<=donvi)
	{
		m=donvi;
	}
	cout<<m;
}
