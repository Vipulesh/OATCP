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

int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end()); 
        for(int i=0 ;i<costs.size(); ++i)
            if( (coins-=costs[i])<0) return i; 
        return costs.size(); 
}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n_coins;
    cin>>n_coins;
    vector<int> coins(n_coins);
    fo(i,0,n_coins-1) cin>>coins[i];
    int total_price;
    cin>>total_price;
    cout<<maxIceCream(coins,total_price);
}
