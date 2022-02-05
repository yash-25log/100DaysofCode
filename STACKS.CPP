#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){

    fast

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];

        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(upper_bound(ans.begin(),ans.end(),a[i])==ans.end()){
                ans.push_back(a[i]);
            }
            else{
                ans[upper_bound(ans.begin(),ans.end(),a[i])-ans.begin()]=a[i];

            }
        }
        cout<<ans.size()<<" ";
        for (int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
