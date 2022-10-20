/*
Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
Ninjas Coding to Welcome
*/
#include<string.h>

void reverseWords(char*input, int i ,int j){
    while(i<j){
        char temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }
}

void reverseWordWise(char input[]){
    //reverse the whole string
    int i=0,j = strlen(input)-1;
    while(i<j){
        char temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }
    // reverse individual words in the string.
    int start = 0, end = 0;
    for( i = 0;i<strlen(input);i++){
        if(input[i] == ' '){
            end = i-1;
            reverseWords(input, start,end);
            start = i+1;
            end = i+1;
        }    
    }
    end = i-1;
    reverseWords(input, start,end); 
    // it is used for last word beacuse in previous for loop we came out from loop because there is no space i.e., 
    // a word for the last word. So we handled the last case here.
}