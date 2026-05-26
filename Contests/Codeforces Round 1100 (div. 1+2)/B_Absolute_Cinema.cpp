#include<iostream>
#include <vector>
using namespace std;

#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        vector<ll> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        

        ll high_element = 0;
        ll sum = 0;

        for(int i = 0; i < n; i++){
            ll b;
            cin >> b;
            sum += max(a[i], b);
            high_element = max(high_element, min(a[i], b));
        }

        cout << sum + high_element << endl;

    }

    return 0;

}