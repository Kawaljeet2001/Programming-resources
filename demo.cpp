#include<bits/stdc++.h>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt" , "r" , stdin);
        freopen("output.txt" , "w" , stdout);
    #endif

   
    int n , sum=0 , n2=0, last = 0;
    cin>>n;
    n2 = n;
    while(n>0)
    {   
        last = n%10;
        sum += pow(last , 3);
        n=n/10;
    }

    

    if(n2 == sum)
    cout<<"Armstrong Number";

    else
    cout<<"Not an armstrong number";
    

    return 0;
}