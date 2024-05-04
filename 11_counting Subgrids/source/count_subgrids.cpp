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

int counting_subgrid(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    vector<int> row(n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            row[i] |= matrix[i][j] << (m - j);
        }
    }
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int bits = __builtin_popcount(row[i] & row[j]);
            int count = bits * (bits - 1);
            ans += count / 2;
        }
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin>>n;
    vector<vector<int>> grid(n,vector<int>(n));
    fo(i,0,n-1){
        fo(j,0,n-1){
            cin>>grid[i][j];
        }
    }
    int ans=0;
    ans=counting_subgrid(grid);
    cout<<ans;
}
