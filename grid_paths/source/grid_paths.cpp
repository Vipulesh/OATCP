#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pob pop_back
#define f first
#define s second
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define fo(i,a,b) for(int i=a;i<=b;i++)
#define revfo(i,a,b) for(ll i=a;i>=b;i--)
#define all(s) s.begin(),s.end()
#define printSet(s1) for(auto it=s1.begin();it!=s1.end();it++) cout<<*it<<" ";
using namespace std;

bool check[1001][1001];
ll dp[1001][1001];
ll mod=1e9+7;

// Memoization Approach
// int dp(int x, int y, vector<vector<int>>paths){
//     if(x<0 || y<0)
//     return 0;
//     if(x==0 && y==0)
//     paths[x][y]=1;
//     if(paths[x][y]!=-1)
//     return paths[x][y];
//     if(check[x][y]){
//         if(x>0) paths[x][y]=dp(x-1,y,paths)+1;
//         if(y>0) paths[x][y]=dp(x,y-1,paths)+1;
//     }
//     else paths[x][y]=0;
//     return paths[x][y];
// }

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin>>n;
    fo(i,0,n-1){
        string temp;
        cin>>temp;
        fo(j,0,n-1){
            if(temp[j]=='.') check[i][j]=true;
            else check[i][j]=false;
        }
    }
    // vector<vector<int>> paths(1001,vector<int>(1001,-1));
    // int x=n-1;
    // int y=n-1;
    // int res=dp(x,y,paths);
    // cout<<res;
  
  //Tabulation Approach
    dp[0][0]=1;
    fo(i,0,n-1){
        fo(j,0,n-1){
            if(check[i][j]){
                if(i>0) dp[i][j]+=dp[i-1][j];
                if(j>0) dp[i][j]+=dp[i][j-1];
                dp[i][j]%=mod;
            }
            else dp[i][j]=0;
        }
    }
    cout<<dp[n-1][n-1];
}
