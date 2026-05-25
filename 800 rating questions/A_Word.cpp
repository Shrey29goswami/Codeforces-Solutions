#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    int upper_count = 0, lower_count = 0;
    for(char c : s){
        if(isupper(c)) upper_count++;
        else lower_count++;
    }
    if(upper_count > lower_count){
        for(char c : s){
            cout << (char)toupper(c);
        }
    }else if(upper_count < lower_count){
        for(char c : s){
            cout << (char)tolower(c);
        }
    }else{
        for(char c : s){
            cout << (char)tolower(c);
        }
    }

    return 0;
     
    
}