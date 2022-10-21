#include<cstring>
#include<bits/stdc++.h>

void Substrings(char * arr){
    for(int start= 0;arr[start] != '\0';start++){
        for(int end = start;arr[end] != '\0';end++ ){
            for(int i = start;i<=end;i++){
                cout<<arr[i];
            }
            cout<<endl;
        }
    }
}