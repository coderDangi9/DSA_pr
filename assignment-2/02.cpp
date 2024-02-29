#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

//function ->To set the precedence.

int precedence(char c){
    if(c=='^')
        return 3;
    
    else if(c=='/'||c=='*')
        return 2;
    
    else if(c=='+'||c=='-')
        return 1;
    
    else 
        return -1;
    
}
// function --> TO returns the associativity of the operators.
char associativity(char c)
{
	if (c == '^')
		return 'R';
	return 'L'; // Default to left associative
}
// To convert infix to postfix
void infixToPostfix(char s[]){
    char result[1000];
    int resultIndex =0;
    int len = strlen(s);
    char op_stack[1000];
    int stackIndex = -1;
    int i;
    for( i=0; i<len; i++)
    {
        char c= s[i];
    
        if((c>='a'&& c <='z')||(c>='A'&& c<='Z')||(c>='0'&& c<='9')) 
        {
            result[resultIndex ++]=c;
        }
        else if(c==')'){
            while(stackIndex >=0 && op_stack[stackIndex] !='('){
                result[resultIndex ++]= op_stack[stackIndex --];
            }
            stackIndex --; //POP'('
    }
    // If an operator is connect
        else{

            while(stackIndex >=0 && (precedence(s[i])==precedence(op_stack[stackIndex])||precedence(s[i])==precedence(s[i])=='L')){
                result[resultIndex ++] = op_stack[stackIndex --];
            }
            op_stack[++stackIndex]=c;
        
        }
    }
    
    while(stackIndex >=0){
        result[resultIndex ++]= op_stack[stackIndex --];
    }
    result[resultIndex]='\0';
    printf("\n \t Answer :-%s \n", result);
}
    int main(){
        char expression []="a+d*c/d-e";
        infixToPostfix(expression);//function call
        return 0;
    }
