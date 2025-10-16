#include<stdlib.h>
#include<stdio.h>
#define size 5
int top=-1;
int data[size];
void push(int element){
    if(top!=size-1)
        {
        top=top+1;
        data[top]=element;
    }
    else{
        printf("Stact is full");
    }
}
void pop(){
if(top!=-1){
    printf("Element poped is %d\n",data[top]);
    top=top-1;
           }
else{
    printf("Stack is empty\n");
}
}
void display(){
if(top==-1){
        printf("Stack is empty");
    }
else{
    for(int i=top;i>=0;i--){
        printf("%d\n",data[i]);
    }
}
}
int main(){
int ch,element;
for(;;){
    printf("1)Push\n 2)Pop\n 3)Display\n 4)Exit\n");
    printf("Enter your choice:");
    scanf("%d",&ch);
    switch(ch){
case 1:printf("Enter element to stack:");
scanf("%d",&element);
push(element);
break;
case 2:pop();break;
case 3:display();break;
default:exit(0);
}
}
return 0;
}
