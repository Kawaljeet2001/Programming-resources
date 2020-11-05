#include<bits/stdc++.h>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt" , "r" , stdin);
        freopen("output.txt" , "w" , stdout);
    #endif

    int n;
    cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++)
    cin>>v[i];

    int sum;
    cin>>sum;

    int s = 0 , en = 0;
    int curr = 0;

    while(sum < curr + v[en] && en<n)
    {
        curr+=v[en];
        en++;
    }

    while(curr!=sum)
    {
        curr-=v[s];
        s++;
    }

    cout<<s+1<<" "<<en+1;

}