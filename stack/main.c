#include<stdio.h>

#define MAX_SIZE  100
int top = -1;
int stack[MAX_SIZE];

void push(int data){
   if(top == MAX_SIZE - 1){
    printf("\nStack Overflow");
    return;
   } 
   stack[++top] = data;
   printf("\n%d added to stack", data);
}

void pop(){
    if(top == -1){
        printf("\nStack Underflow");
        return;
    }
    int poppedData =  stack[top--];
    printf("\n%d popped", poppedData);
}

int main(){
    for(int i = 0; i < MAX_SIZE + 10; i++){
        push(i*i);
    }
    for(int i = 0; i < MAX_SIZE -10; i++){
        pop();
    }
    printf("\ntop = %d", top);
}