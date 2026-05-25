#include<iostream>
using namespace std;

int main(){
    int k, n, w;
    cin >> k >> n >> w;

    int total_cost = 0;
    for(int i = 1; i <= w; i++){
        total_cost += i * k;
    }

    int res = (total_cost < n) ? 0 : total_cost - n;
    cout << res << endl;
    return 0;
}
