#include<iostream>
#include<vector>

#include<algorithm>  //for sort function
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(9);
    v.push_back(1);
    v.push_back(7);
    v.push_back(2);
    v.push_back(3);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
     cout<<endl;
    return 0;

}