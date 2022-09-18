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
int tc=1;
cin>>tc;
while(tc--){
 int n;
 cin>>n;
 vector<int> v(n);
 vector<int> v1;
 vector<int> v2;
 int sum1=0;
 int sum2=0;
 for(int i=0;i<n;i++) cin>>v[i];
   for(int i=0;i<n;i++) {
    if(i%2==0){
      v1.pb(1);
      v2.pb(v[i]);
      sum1+=1;
      sum2+=v[i];
    }
    else{
      v2.pb(1);
      v1.pb(v[i]);
      sum2+=1;
      sum1+=v[i];
    }
     
   }

   if(sum1>=sum2){
      for(auto x:v1) cout<<x<<" ";
   }
else{

   for(auto x:v2) cout<<x<<" ";
}
  cout<<"\n";
}


}




