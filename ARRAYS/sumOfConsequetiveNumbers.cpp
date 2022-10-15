// Given an array of integers of size ‘n’, Our aim is to calculate the maximum sum of ‘k’ consecutive elements in the array.

#include<bits/stdc++.h>
using namespace std;

int consequetiveSum(int *array, int n, int k){
    int window_sum = 0;
    for(int i = 0;i<k;i++)
        window_sum += array[i];
    
    int new_sum = window_sum;

    for(int i = k;i<n;i++){
        window_sum = window_sum + array[i] - array[i-k];
        new_sum = max(window_sum,new_sum);
    }
    
    return new_sum;
}

int main(){
    int array[100] ;
    int n;
    cin>>n;
    for(int i = 0;i<n;i++)
        cin>>array[i];
    
    int k;
    cin>>k;

    int sum = consequetiveSum(array, n, k);
    cout<<sum;
}