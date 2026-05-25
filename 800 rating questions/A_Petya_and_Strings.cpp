#include<iostream>
using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    
    int size = s1.size();

    for(int i = 0; i < size; i++){
        if(tolower(s1[i]) != tolower(s2[i])){
            
            if(tolower(s1[i]) < tolower(s2[i])){
                cout << -1 << endl;
                return 0;
            } else if(tolower(s1[i]) > tolower(s2[i])){
                cout << 1 << endl;
                return 0;

            }
            
        }
    }
    cout << 0 << endl;

    return 0;
}