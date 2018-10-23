#include<iostream>
#include<conio.h>

void main()
{
clrscr();
int i,j,n,a[80],sum=0;
cout<<"Enter the number of elements you want in your array (max 80) : ";
cin>>n;
cout<<"\nEnter the elements : ";
for(i=0;i<n;i++)
{
cin>>a[i];
}
for(j=0;j<n;j++)
{
sum+=a[j];
}
cout<<"\nThe sum the elements of the array is : "<<sum;
getch();
}
