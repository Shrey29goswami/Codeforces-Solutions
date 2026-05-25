#include <iostream>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;

    int area = m*n;
    if(area % 2 == 0){
        cout << area / 2 << endl;
    }else{
        cout << (area - 1) / 2 << endl;
    }
    return 0;

}