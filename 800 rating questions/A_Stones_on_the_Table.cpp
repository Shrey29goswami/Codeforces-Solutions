#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    cin >> n;

    string s;
    cin >> s;

    int count = 0, max_count = INT_MAX;
    for(int i = 0; i < s.size()-1; i++){
        if(s[i] == s[i+1]){
            count++;
            count = min(count, max_count); 
        }
    }
    cout << count << endl;
    return 0;
}