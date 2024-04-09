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

string removeKdigits(string num, int k) {
        int size=num.size();
        string ans="";
        if(size==k)
            return "0";
        stack<char> sta;
        for(int i=0;i<size;i++){
            if(k==0){
                while(i<size)
                    sta.push(num[i++]);
            }
            else if(sta.size()==0)
                sta.push(num[i]);
            else if(sta.top()>=num[i]){
                while(sta.size()>0 && k>0 && sta.top()>num[i]){
                    sta.pop();
                    k--;
                }
                sta.push(num[i]);
            }
            else
                sta.push(num[i]);
        }
        while(k!=0){
            sta.pop();
            k--;
        }
        while(sta.size()){
            ans+=sta.top();
            sta.pop();
        }
        reverse(ans.begin(),ans.end());
        int sizeOfString=ans.size(),i=0;
        for(;i<sizeOfString;i++){
            if(ans[i]=='0')
                continue;
            break;
        }
        if(i==sizeOfString)
            return "0";
        return ans.substr(i);
}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string in;
    cin>>in;
    int k;
    cin>>k;
    cout<<removeKdigits(in,k);
}
