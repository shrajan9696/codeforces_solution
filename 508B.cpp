#include "bits/stdc++.h"
using namespace std;

#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define all(x)            (x).begin(),(x).end()
#define rall(x)            (x).rbegin(),(x).rend()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define sz(x)             (int)((x).size())
#define fr                first
#define sc                second
#define pii               pair<int,int> 


 
int32_t main()
{
 ios_base::sync_with_stdio(false);
    cin.tie(0);
string s;
cin>>s;
int n = s.length();
vector<pair<char,int>> v;

for(int i=0;i<n;i++){
   
   int n = s[i]-'0';
   if(n%2==0)
   {
      v.pb({s[i],i});
   }

}
if(v.size()==0) cout<< -1;
else{
  int flag=0;
  for(int i=0;i<v.size();i++)
  {
  
   if(v[i].first<s[s.length()-1]){
       flag=1;
      swap(s[s.length()-1],s[v[i].second]);
      break;
   }
  }

  if(flag==0){
   swap(s[s.length()-1],s[v[v.size()-1].second]);
  }
  
   
  
 cout<<s; 
  
}
cout<<"\n";
}




