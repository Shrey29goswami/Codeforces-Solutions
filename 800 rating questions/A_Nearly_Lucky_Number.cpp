#include<iostream>
#include<string>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin >> n;

    string s = to_string(n);
    int non_lucky = 0, lucky = 0;

    for(char c :s){
        if(c == '4' || c == '7'){
            lucky++;
        }
    }

    
    if(lucky == 4 || lucky == 7){
        cout << "YES" <<endl;        
    }else{
        cout << "NO" <<endl;
    }
    

    return 0;

}