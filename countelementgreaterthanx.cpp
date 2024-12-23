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
int x;
cout<<"Enter x:";
cin>>x;

int count=0;
for(int i=0;i<n;i++)
{
   if(arr[i]>x) count++;

}
cout<<count;
}
