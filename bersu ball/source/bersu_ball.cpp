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
    int n1;
    cin>>n1;
    vector<int> b;
    fo(i,0,n1-1){
        int in1;
        cin>>in1;
        b.pb(in1);
    }
    int n2;
    cin>>n2;
    vector<int> g;
    fo(i,0,n2-1){
        int in2;
        cin>>in2;
        g.pb(in2);
    }
    sort(all(b));
    sort(all(g));

    int ans=0;
    fo(i,0,n1-1){
        fo(j,0,n2-1){
            if(abs(b[i]-g[i])<=1){
                g[j]=INT_MAX;
                ans++;
                break;
            }
        }
    }
    cout<<ans;
}
