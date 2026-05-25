#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    int A_count = 0, D_count = 0;

    for(char c : s){
        if(c == 'A') {
            A_count++;
        }else{
            D_count++;
        }
    }
    if(A_count > D_count){
        cout << "Anton" << endl;
    }else if(A_count < D_count){
        cout << "Danik" << endl;
    }else{
        cout << "Friendship" << endl;
    }

    return 0;
}