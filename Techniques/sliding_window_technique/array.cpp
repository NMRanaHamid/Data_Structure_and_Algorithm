#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[]={4,1,3,5,1,2,3,2,1,1,5};
    int k = 3, sz = 11;
    for(int i=0; i<sz-k+1; i++)
    {
        int mx = arr[i];
        for(int j=1; j<k; j++)
        {
            mx = max(mx, arr[i+j]);
        }
        cout<<mx<<" ";
    }

    return 0;
}