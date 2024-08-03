#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int transpose[n][n];
    int mtrx[n][n];

    for(int i = 0; i< n; i++){
        for(int j = 0; j<n; j++){
            cin>>mtrx[i][j];
        }
    }

    for(int i = 0; i< n; i++){
        for(int j = 0; j<n; j++){
            transpose[i][j] = mtrx[j][i];
        }
    }

        for(int i = 0; i< n; i++){
        for(int j = 0; j<n; j++){
            cout<<transpose[i][j];
        }
        cout<<endl;
    }
}
