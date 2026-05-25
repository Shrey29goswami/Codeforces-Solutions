#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> matrix(5, vector<int>(5));
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> matrix[i][j];
        }
    }
    int row, col;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(matrix[i][j] == 1){
                row = i;
                col = j;
                cout << abs(row - 2) + abs(col - 2) << endl;
                return 0;
            }
        }
    }
    
}
