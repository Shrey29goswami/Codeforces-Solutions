#include<iostream>
#include <vector>
using namespace std;

#define ll long long

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<ll> a(n+1), parity(n+2, 0);
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            parity[i] = (a[i] > 0);
        }

        parity[n+1] = 0;

        vector<int> ans;

        for(int i = n; i >= 1; --i){
            if(parity[i] != parity[i+1]){
                ans.push_back(i);
            }
        }
        cout << ans.size() << endl;
        for(auto& c : ans){
            cout << c << " ";
        }
        cout << endl;
    }

    return 0;
    
}