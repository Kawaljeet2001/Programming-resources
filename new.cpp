#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++)
    cin>>v[i];

    int min_indx = INT_MAX;

    vector<int> idx_arr(20);

    for(int i=0;i<n;i++)
    idx_arr[i] = -1;

    //main logic

    for(int i=0;i<n;i++)
    {
        if(idx_arr[v[i]] == -1)
        {
            //means it is a new element
            idx_arr[v[i]] = i;
        }

        else
        {
            if(min_indx > idx_arr[v[i]])
            min_indx = i;
        }
    }

    cout<<v[min_indx];

    return 0;
}