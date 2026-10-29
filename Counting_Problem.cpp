#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	// code submitted by yamravan@_x9
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    ll t; cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    ll a[n];
	    ll sum1 = 0,sum2 = 0;
	    for(ll i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(ll i=0;i<n;i++){
	        if((a[i]%2 != 0) && (a[i+1]%2 != 0)){
	            sum1 += a[i];
	            sum2 += a[i+1];
	        }
	    }
	    if((sum1*sum2)%2 != 0){
	        cout<<"Yes/n";
	    }
	    else {
	        cout<<"No/n";
	    }
	}
}
