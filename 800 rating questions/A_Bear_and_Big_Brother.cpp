#include<iostream> 
using namespace std;

int main(){
    int limakW, bobW;
    cin >> limakW >> bobW;

    int count = 0;
    while(limakW <= bobW){
        limakW = 3*limakW;
        bobW = 2*bobW;

        count++;
    }

    cout << count;

    return 0;

}