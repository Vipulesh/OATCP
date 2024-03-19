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
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    vector<int> arr;
    fo(i,0,t-1){
        int a;
        cin>>a;
        arr.pb(a);
    }
    int s=0,curr=0;
    fo(i,0,t-1){
        s+=arr[i];
        curr+=i*arr[i];
    }
    int ans=curr;
    fo(i,1,t-1){
        curr+=s-t*arr[t-i];
        ans=max(ans,curr);
    }
    cout<<ans;
}
