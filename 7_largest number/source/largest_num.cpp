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

bool compare(int a,int b){
    return to_string(a)+to_string(b)>to_string(b)+to_string(a);
}

string largestNumber(vector<int>& nums) {
    sort(nums.begin(),nums.end(),compare);
    string res="";
    for(int i=0;i<nums.size();i++){
        res+=to_string(nums[i]);
    }
    return res;
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
    
    cout<<largestNumber(nums);
}
