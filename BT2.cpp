#include <iostream>
//Bai tap 2
using namespace std;

void input (int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Moi nhap gia tri a["<<i<<"] : ";
		cin>>a[i];
	}
}

void output1 (int a[], int n)
{
	cout<<"Thu tu theo chieu thuan la : "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"] : "<<a[i]<<"\t";
	}
}
void output2(int a[], int n)
{
	cout<<endl<<"Thu tu theo chieu nghich : "<<endl;
	for(int i=n-1;i>=0;i--)
	{
		cout<<"a["<<i<<"] : "<<a[i]<<"\t";
	}
}

void outputeven (int a[],int n)
{
	cout<<endl<<"Cac gia tri chan trong mang :"<<endl;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			cout<<"a["<<i<<"] : "<<a[i]<<"\t";
		}
	}
}

void outputodd (int a[],int n)
{
	cout<<endl<<"Cac gia tri le trong mang :"<<endl;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==1)
		{
			cout<<"a["<<i<<"] : "<<a[i]<<"\t";
		}
	}
}

int sum(int a[],int n)
{
	int s = 0;
	for (int i=0;i<n;i++)
	{
		s+=a[i];
	}
	return(s);
}

bool kiemtrasonguyento(int n)
{
	if(n<=2)
	{
		return false;
	}
	else for (int i=2;i<n;i++)
	{
		if(n%i==0)
		return false;
		else return true;
	}
	
}

void songuyento (int a[], int n)
{
	cout <<endl<<"In so nguyen to"<<endl;
	bool b;
	for (int i=0;i<n;i++)
	{
		b=kiemtrasonguyento(a[i]);		
		if (b==true)
		{
			cout<<"a["<<i<<"] : "<<a[i]<<"\t";
		}
	}
}

main()
{
	int a[20],n;n=20;
	input(a,n);
	output1(a,n);
	output2(a,n);
	outputeven(a,n);
	outputodd(a,n);
	cout <<endl<<"Tong cua mang : "<<sum(a,n)<<endl;
	songuyento(a,20);
}

