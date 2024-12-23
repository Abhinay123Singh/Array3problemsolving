#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter array size:";
cin>>n;
// int arr[n];

 int arr[n];
 cout<<"Enter array elements:"<<endl;
 for(int i=0;i<n;i++)
 {
    cin>>arr[i];
 }
 int mx=INT_MIN;
 int smx=INT_MIN;
 int tmx=INT_MIN;
 for(int i=0;i<n;i++)
 {
    if(arr[i]>mx) mx=arr[i];
 }
 for(int i=0;i<n;i++)
{
    if(arr[i]>smx && smx!=arr[i];
}