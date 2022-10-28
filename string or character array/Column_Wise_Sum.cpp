// My Code is correct code.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[100][100];
    int rows, col;
    cin>>rows>>col;
    for(int i = 0;i<rows;i++){
        for(int j = 0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    
    for(int j = 0;j<col;j++){
        int col_sum = 0;
        for(int i = 0;i<rows;i++){
            col_sum = col_sum + arr[i][j];
        }
        cout<<col_sum<<" ";
    } 
}

// CN code
/* 
#include<iostream>
using namespace std;
int main(){
    int row, col;
    cin>>row>>col;
    int arr[row][col];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++ ){
            cin>>arr[i][j];
        }
    }
    int j = 0;
    while(j < col){
    	int i = 0;
    	int col1 = 0;
    	for(i; i < row; i++){
        	col1 = col1 +arr[i][j];
    	}
    	j++;
    	cout<< col1 << " ";
	}
}*/