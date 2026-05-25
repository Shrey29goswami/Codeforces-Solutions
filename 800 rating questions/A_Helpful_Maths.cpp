#include<iostream>
using namespace std;


int main(){
    string str;
    cin >> str;

    string temp = "";
    for(char c : str){
        if(c == '+') continue;
        temp += c;
    }
    int low = 0, mid = 0, high = temp.size() - 1;

    while(mid <= high){
        if(temp[mid] == '1'){
            swap(temp[low++], temp[mid++]);
        } else if(temp[mid] == '2'){
            mid++;
        } else if(temp[mid] == '3'){
            swap(temp[high--], temp[mid]);
        }
    }
    
    if(temp.size() > 1){
        string result = "";
        for(int i = 0; i < temp.size(); i++){
            result += temp[i];
            if(i != temp.size() - 1){
                result += '+';
            }
        }
        temp = result;
    }

    cout << temp;

    return 0;
}