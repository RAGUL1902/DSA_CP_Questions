#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int i =0 , j= n-1;

        while(i<j)
        {
            cout<<arr[i++]<<" "<<arr[j--]<<" ";
            

        }
        if(n%2 == 1) cout<<arr[n/2]<<" ";
        cout<<endl;
    }

}