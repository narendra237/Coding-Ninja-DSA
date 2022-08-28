#include<bits/stdc++.h>
using namespace std;

int length(char s[]){
    // base case for string is that our string is empty
    // if our string i s empty means we got null caharacter in beginning
    // placed at 0th index
    // null character is = '\0'
    if(s[0] == '\0')
        return 0;
    int smallStringLength = length(s+1);
    return 1 + smallStringLength;
}

int main(){
    char str[1000];
    cin>>str;

    int l = length(str);
    cout<<l<<endl;
    
}