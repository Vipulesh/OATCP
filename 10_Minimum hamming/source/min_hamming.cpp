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

int hammingDistance(int x, int y) {
    int count=0;
    for(int i=31;i>=0;i--)
    {
        int first=(x & (1<<i));
        int second=(y & (1<<i));
        if(first!=second)
        count++;
    }
    return count;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string ip;
    getline(cin,ip);
    int num=0;
    vector<int> nums;
    fo(i,0,ip.size()-1){
        if(ip[i]==' '){
            nums.pb(num);
            num=0;
        }
        else{
            num=num*10+(ip[i]-'0');
        }
    }
    nums.pb(num);
    int s=0;
    fo(i,0,nums.size()-1){
        fo(j,i+1,nums.size()-1){
            s+=hammingDistance(nums[i],nums[j]);
        }
    }
    cout<<s;
}
