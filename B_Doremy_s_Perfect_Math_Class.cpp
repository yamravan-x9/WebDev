#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        set<int> s;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<n;i++){
           for(int j=n-1;j>=0;j--){
            if(j != i && v[j]-v[i] != v[j]){
                int p = v[j]-v[i];
                s.insert(p);
            }
           }
        }
        cout<<s.size()<<endl;
    }
}