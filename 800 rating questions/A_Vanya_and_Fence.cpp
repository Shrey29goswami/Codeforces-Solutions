#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, h;
    cin >> n >> h;

    vector<int> height(n);
    int width = 0;

    for(int i = 0; i < n; i++){
        cin >> height[i];
        if(height[i] <= h){
            width++;
        }else{
            width += 2;
        }
    }
    cout << width;
    return 0;


}