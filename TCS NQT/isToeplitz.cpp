#include<bits/stdc++.h>
using namespace std;

bool isToeplitz(const vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    for(int i = 0; i < rows - 1; i++) {
        for(int j = 0; j < cols - 1; j++) {
            if(matrix[i][j] != matrix[i + 1][j + 1]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int rows, cols;

    cin >> rows;
    cin >> cols;


    vector<vector<int>> matrix(rows, vector<int>(cols));
    for(int i = 0; i < rows; i++) {
        for(int j = 0;  j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    if(isToeplitz(matrix)) {
        cout << "The matrix is a Toeplitz matrix." << endl;
    } else {
        cout << "The matrix is not a Toeplitz matrix." << endl;
    }

    return 0;
}