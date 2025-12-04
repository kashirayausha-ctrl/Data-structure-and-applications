#include <stdio.h>
#include <stdlib.h>
void heap(int a[10],int n){
    int i,k,v,flag=0,j;
    for(i=n/2;i>=1;i--){
        k=i;
        v=a[k];
        while(!flag&&2*k<=n){
            j=2*k;
            if(j<n){
                if(a[j]<a[j+1]){
                    j=j+1;
                }
            }
            if(v>=a[j]){
                flag=1;
            }
            else{
                a[k]=a[j];
                k=j;
            }
        }
        a[k]=v;
        flag=0;
    }
}
int main(){
    int n,a[10],i,c;
    for(;;){
        printf("1)Create heap\n2)Extract max\n3)Exit\nEnter your choice:");
        scanf("%d",&c);
        switch(c){
            case 1:printf("Enter number of elements:");
            scanf("%d",&n);
            for(i=0;i<n;i++){
                printf("Enter element %d:",i+1);
                scanf("%d",&a[i]);
            }
            heap(a,n);
            printf("\nElements after construction of heap:\n");
            for(i=0;i<n;i++){
                printf("%d\t",a[i]);
            }
            printf("\n");
            break;
            case 2:if(n>=1){
                printf("Key deleted is %d\n",a[0]);
                a[0]=a[n-1];
                n--;
                heap(a,n);
                printf("Heap after deletion\n");
                for(i=0;i<n;i++){
                    printf("%d\t",a[i]);
                }
                printf("\n");
            }
            else{
                printf("No heap to delete");
            }break;
            case 3:exit(0);
            default:printf("Wrong choice ,choose from[1-3]");
        }
    }
    return 0;
}
