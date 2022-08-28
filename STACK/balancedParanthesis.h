#include<bits/stdc++.h>
using namespace std;
bool isBalanced(string Expression) 
{
    // Write your code here
    stack<char> s;
    int s_input_ct = 0, s_output_ct = 0;
    for(int i = 0; i<Expression.length();i++){
        if(Expression[i] == '(' || Expression[i] == '{' || Expression[i] == ']' ){
            s.push(Expression[i]);
            s_input_ct++;
        }
        if(s.empty() && (Expression[i] == ')' || Expression[0] == 'i' || Expression[i] == '}'))
            return false;

        if(Expression[i] == ')' ){
            if(s.top()=='(' )
                s.pop();
            s_output_ct++;
        }
       
       if(Expression[i] == '}' ){
            if(s.top()=='{' )
                s.pop();
            s_output_ct++;
        }
        if(Expression[i] == ']' ){
            if(s.top()=='[' )
                s.pop();
            s_output_ct++;
        }
    }
    if((s_input_ct == s_output_ct)  && s.empty())
        return true;

}