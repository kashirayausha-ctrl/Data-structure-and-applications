#include <stdio.h>
#include <stdlib.h>
int gcd(int a,int b){
if(b==0){
    return a;
}
else{
    return gcd(b,a%b);
}
}
int main(){
    int a,b;
    printf("\nRead values for a&b:");
    scanf("%d %d",&a,&b);
    printf("gcd(%d,%d)is %d\n",a,b,gcd(a,b));
    return 0;
}
