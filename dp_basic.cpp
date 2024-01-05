#include<bits/stdc++.h>
using namespace std;
int const mx=1e5+123;
int arr[mx];
int dp[mx];
int n;
int ok(int i)
{
    if(dp[i]!=-1)
    {
        return dp[i];
    }
    if(i==n)
    {
        return 0;
    }
    int first=1e9,second=1e9;
    if(i+1<=n)
    {
        first=abs(arr[i]-arr[i+1])+ok(i+1);
    }
    if(i+2<=n)
    {
        second=abs(arr[i]-arr[i+2])+ok(i+2);
    }


    dp[i]=min(first,second);

    return dp[i];
}
int main()
{
  cin>>n;
  for(int i=1;i<=n;i++)
  {
      cin>>arr[i];
  }
  memset(dp,-1,sizeof(dp));
  cout<<ok(1)<<endl;
  return 0;
}
