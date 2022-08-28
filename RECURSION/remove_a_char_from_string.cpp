#include<bits/stdc++.h>
using namespace std;
// for example: we want to delete all 'a' from the string
// i.e.,ababdac\0;
// output:- bbdc

// for remove we shift characters to the left side
// to generate the output string. So,
// we need to to recursion for this.
// So lets do it.
void removeElements(char str[]){
    if(str[0] == '\0')
        return ;
    if(str[0] != 'a')
        removeElements(str + 1); 
    else {
       int i = 1;
        for( ;str[i] != '\0';i++){
            str[i-1] = str[i];
            // Consider above string i.e.,ababdac.....
            // IN this we got a in str[0] so all the characters 
            // will move towards left by line 18 to all characters untill it find null
            // babdacc\0
        }
        str[i-1] = str[i];// used to copy the null character
        removeElements(str);
         

    }
}

int main(){
    char str[100];
    cin>>str;

     removeElements(str);
    cout<<str<<endl;

}
