#include <iostream>
#include <cstdlib>
//BT3
using namespace std;

void output(int a[],int n)
{
	for (int i=0;i<n;i++)
	{
		cout <<"a["<<i<<"] = "<<a[i]<<"\t";
	}
}

void input (int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		a[i]=rand();
	}
	output(a,n);
}
void max (int a[], int n)
{
	int m,i;
	m=a[0];
	for (i=0;i<n;i++)
	{
		if(a[i]>=m)
		{
			m=a[i];
		}
	}
	cout<<endl<<"So lon nhat la : "<<m;
}

void min (int a[], int n)
{
	int m,i;
	m=a[0];
	for (i=0;i<n;i++)
	{
		if(a[i]<=m)
		{
			m=a[i];
		}
	}
	cout<<endl<<"So nho nhat la : "<<m;
}

void swap (int &a,int &b)
{
	int t=	a;
	a=b;
	b=t;
	
}

void raiseup(int a[],int n)
{
	cout<<endl<<"Sap xep theo thu tu tang dan :"<<endl;
	for (int i=0; i<n;i++)
	for (int j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
		{
			swap(a[i],a[j]);
		}
	}
	output(a,n);
}

void raisedown(int a[],int n)
{
	cout<<endl<<"Sap xep theo thu tu giam dan :"<<endl;
	for (int i=0; i<n;i++)
	for (int j=i+1;j<n;j++)
	{
		if(a[i]<a[j])
		{
			swap(a[i],a[j]);
		}
	}
	output(a,n);
}

main()
{
	int a[20];
	int n=20;
	input (a,n);
	max (a,n);
	min(a,n);
	raiseup(a,n);
	raisedown(a,n);
}


