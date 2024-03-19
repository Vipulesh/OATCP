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

ll n;
ll mod=1e9+7;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin>>n;
    vector<ll> nums;
    fo(i,0,n-1){
        ll a;
        cin>>a;
        nums.pb(a);
    }
    int maxi=INT_MIN;
    int prd=1;
    for(int i=0;i<nums.size();i++){
        prd=prd%mod*nums[i]%mod;
        maxi=max(maxi,prd);
    }
    cout<<maxi;
}
