#include <iostream>
//Bai Tap 1
//Viet chuong trinh nhap vao ten sinh vien
//Diem cua 3 mon toan, ly, hoa 
//a.Tinh diem trung binh
//b.Xep loai hoc sinh
//c.In ra man hinh ten, diem trung binh, xep loai.
using namespace std;

main()
{
	char name[50];
	char xeploai;
	float toan,ly,hoa;
	float avr;
	
			cout<<"Moi nhap ten sinh vien: ";
			cin.getline(name,50);
			cout<<"Moi nhap diem 3 mon"<<endl;
label1:		cout<<"toan : ";
			cin>>toan;
			cout<<"ly : ";
			cin>>ly;
			cout<<"hoa : ";
			cin>>hoa;
			if(toan<0||ly<0||hoa<0||toan>10||ly>10||hoa>10)
			{
				cout<<"Ban da nhap sai diem"<<endl;
				cout<<"Moi ban nhap lai"<<endl;
				goto label1;
			}
			else
			{
				avr = (toan+ly+hoa)/3;
				cout <<"Ho va ten sinh vien : ";
				cout <<name<<endl;
				cout <<"Diem trung binh : ";
				cout <<avr<<endl;
				if(avr>=8)
				{
					cout<<"Xuat sac";
				}
				else if (avr<8&&avr>=7)
				{
					cout<<"Gioi";
				}
				else if (avr<7&&avr>=6)
				{
					cout<<"Kha";
				}
				else if (avr<6&&avr>=5)
				{
					cout<<"Trung binh";
				}
				else if (avr<5)
				{
					cout<<"Yeu";
				}
			}
}
