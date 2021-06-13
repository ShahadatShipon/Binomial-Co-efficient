#include<bits/stdc++.h>
using namespace std;
#define llu unsigned long long
llu binomialCoefficient(llu n,llu k)
{
    llu ans =1;
    if(k>(n-k)) k=n-k;

    for(llu i=0;i<k;i++){
        ans*=(n-i);
        ans/=(i+1);
    }
    return ans;
}
int main()
{
    llu n,c;
    cin >> n >> c;
    cout <<"Answer of nCr is : "<<binomialCoefficient(n,c)<<endl;
    return 0;
}
