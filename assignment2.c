#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define MAX 10 // Altering this value changes size of stack created
int st[MAX], top = -1;

void push(int st[], int val) {
    if (top == MAX - 1) {
        printf("\n STACK OVERFLOW");
    }
    else{
        top++;
        st[top] = val;
    }
}

int pop(int st[]) {
    int val;
    if (top == -1) {
        printf("\n STACK UNDERFLOW");
        return -1;
    }
    else {
        val = st[top];
        top--;
        return val;
    }
}


int peek(int st[]) {
    if (top == -1){
        printf("\n STACK IS EMPTY");
        return -1;
    }
    else
        return (st[top]);
}

int prefixevaluate(char s[]){
    int arr[20];
    for(int i=strlen(s)-1;i>=0;i--) {
        if(s[i]>='0'&& s[i]<='9') {
            push(arr,s[i]-'0');
        }
        else {
            int opr1=pop(arr);
            int opr2=pop(arr);
            switch(s[i]){
                case '+':
                push(arr,opr1+opr2);
                break;
                case '-':
                push(arr,opr1-opr2);
                break;
                case '*':
                push(arr,opr1*opr2);
                break;
                case '/':
                push(arr,opr1/opr2);
                break;

            }
        }
    }
    return peek(arr);
}

int postfixevaluate(char s[]){
    int arr[20];
    for(int i=0;i<strlen(s);i++) {
        if(s[i]>='0'&& s[i]<='9') {
            push(arr,s[i]-'0');
        }
        else {
            int opr2=pop(arr);
            int opr1=pop(arr);
            switch(s[i]){
                case '+':
                push(arr,opr1+opr2);
                break;
                case '-':
                push(arr,opr1-opr2);
                break;
                case '*':
                push(arr,opr1*opr2);
                break;
                case '/':
                push(arr,opr1/opr2);
                break;

            }
        }
    }
    return peek(arr);
}


int main()
{
    printf("-3/6*6+54 = %d\n",prefixevaluate("-3/6*6+54"));
    printf("4572+-* = %d",postfixevaluate("4572+-*"));
    return 0;
}