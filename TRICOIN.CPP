#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

bool check(ll mid, ll n){
    ll coins=(mid*(mid+1))/2;
    if(coins<=n){
        return true;
    }
    return false;
}
int main(){

    fast

    int t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        ll low=1;
        ll high=n;
        ll ans=0;

        while(low<=high){
            ll mid=(low+high)/2;
            if(check(mid,n)){
                ans=mid;
                low=mid+1;

            }else{
                high=mid-1;
            }
        }
        cout<<ans<<endl;

    }

    return 0;
}
