#include<bits/stdc++.h>

using namespace std;

long long int gcd_calc(long long int a ,long long int  b)
{
    if(b == 0)
    return a;

    return gcd_calc(b , a%b);

}

int main()


{
    long long int ans = 0 , a , b;
    cin>>a>>b;
    ans = gcd_calc(a , b);
    cout<<ans;
    return 0;
    
    

}
