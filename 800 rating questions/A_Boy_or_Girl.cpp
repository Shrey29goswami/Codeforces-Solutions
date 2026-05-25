#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    string s;
    cin >> s;

    /*
    unordered_set<char> unique_chars;
    for(char c : s){    
        unique_chars.insert(c);   
    }
    if(unique_chars.size() % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
    */

    int mask = 0;
    for(char c : s){
        mask |= (1 << (c - 'a'));
    }

    int count = __builtin_popcount(mask);

    if(count % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;

}