#include<iostream>
#include<vector>

using namespace std;
int main(){

    int n;
    cin >> n;
    
    vector<bool> visited(n+1, false);

    int x;
    cin >> x;

    for(int i = 0; i < x; i++){
        int level;
        cin >> level;
        visited[level] = true;
    }

    int y;
    cin >> y;

    for(int i = 0; i < y; i++){
        int level;
        cin >> level;
        visited[level] = true;
    }

    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            cout << "Oh, my keyboard!"<< endl;
       
            return 0;
        }
    }
    cout << "I become the guy."<< endl;
    return 0;



}