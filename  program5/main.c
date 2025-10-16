#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
struct queue{
int f,r,data[SIZE];
};
typedef struct queue QUEUE;
void eq(QUEUE *q,int item){
if(q->r==SIZE-1){
   printf("Queue is full");
   }
   else{
    q->r=q->r+1;
    q->data[q->r]=item;
    if(q->f==-1){
        q->f=0;
    }
   }
}
void dq(QUEUE *q){
if(q->f==-1){
   printf("Queue is empty");
   }
else{
    printf("Element deleted is %d\n",q->data[q->f]);
    if(q->f==q->r){
        q->f=-1;
        q->r=-1;
    }
    else{
        q->f=q->f+1;
    }
}
}
void d(QUEUE q){
int i;
if(q.f==-1){
   printf("\nQueue is empty");
   }
   else{
    printf("\nQueue contents are\n");
    for(i=q.f;i<=q.r;i++){
        printf("%d\t",q.data[i]);
    }
   }
}
int main(){
int item,ch;
QUEUE q;
q.f=-1;
q.r=-1;
for(;;){
    printf("1)Insert\n2)Delete\n3)Display\n4)Exit\nEnter your choice:");
    scanf("%d",&ch);
    switch(ch){
case 1:printf("Enter element to be inserted:");
scanf("%d",&item);
eq(&q,item);break;
case 2:dq(&q);break;
case 3:d(q);break;
default:exit(0);}
}
return 0;
}
