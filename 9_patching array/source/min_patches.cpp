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

int minPatches(vector<int>& nums, int n) {
        int n2=nums.size();
        long long maxreach=0;
        int ans=0;
        for(int i=0;i<n2;i++){
            while(nums[i]>(maxreach+1)){
                maxreach=2*maxreach+1;
                ans++;
                if(maxreach>=n){
                    return ans;
                }
            }
            maxreach+=nums[i];
            if(maxreach>=n){
                return ans;
            }
        }
        while(maxreach<n){
            maxreach=2*maxreach+1;
            ans++;
        }
        return ans;
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
    int n;
    cin>>n;
    cout<<minPatches(nums,n);
}
