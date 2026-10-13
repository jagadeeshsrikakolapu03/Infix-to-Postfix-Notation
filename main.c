#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"precedence.c"
char out[100];//output string
char stack[100];
int top=-1;
int j=0;
void push(char ch);
char pop();
int precedence(char ch);
int main()
{
        char str[100];//input infix string
        int store,ret;
        printf("enter the infix\n");
        fgets(str,100,stdin);
        for(int i=0;str[i];i++)
        {
                if(str[i]=='('||str[i]=='{'||str[i]=='[')
                {
                        push(str[i]);
                }
                else if(((str[i]>=97)&&(str[i]<=122))||((str[i]>=65)&&(str[i]<=90)))
                {
                        out[j]=str[i];
                        j++;
                }
                else if(str[i]==')')
                {
                        while(stack[top]!='(')
                        {
                        out[j]=pop();
                        j++;
                        }
                        if(top>-1)
                                pop();
                }
                else if(str[i]==']')
                {
                        while(stack[top]!='[')
                        {
                        out[j]=pop();
                        j++;
                        }
                        if(top>-1)
                                pop();
                }
                else if(str[i]=='}')
                {
                        while(stack[top]!='{')
                        {
                        out[j]=pop();
                        j++;
                        }
                        if(top>-1)
                                pop();
                }
                else if(str[i]=='^'||str[i]=='*'||str[i]=='/'||str[i]=='-'||str[i]=='+')
                {
                        while(precedence(stack[top])>=precedence(str[i]))
                        {
                                out[j]=pop();
                                j++;
                        }
                                push(str[i]);
                }

        }
        while(stack[top]!='\0')
        {
                out[j]=pop();
                j++;
        }
        puts(out);
}
void push(char ch)
{
        top++;
        stack[top]=ch;
}
char pop()
{
        char temp;
        temp=stack[top];
        top--;
        return temp;
}