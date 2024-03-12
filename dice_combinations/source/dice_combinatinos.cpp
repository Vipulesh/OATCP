#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pob pop_back
#define f first
#define s second
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define fo(i,a,b) for(ll i=a;i<=b;i++)
#define revfo(i,a,b) for(ll i=a;i>=b;i--)
#define all(s) s.begin(),s.end()
#define printSet(s1) for(auto it=s1.begin();it!=s1.end();it++) cout<<*it<<" ";

using namespace std;
ll mod=1e9+7;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n;
    cin>>n;
    vector<ll>dp(n+1,0);
  //Tabulation Approach
    dp[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;(j<=6)&&(i-j>=0);j++){
            dp[i]=dp[i]%mod+dp[i-j]%mod;
        }
    }
    ll ans=dp[n];
    cout<<ans%mod;
}
