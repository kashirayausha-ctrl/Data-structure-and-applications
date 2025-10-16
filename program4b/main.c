#include <stdio.h>
#include <stdlib.h>
void tofh(int n,char s,char d,char t){
if(n>1){
   tofh(n-1,s,t,d);
printf("\nMove %d disc from %c to %c",n,s,d);
tofh(n-1,t,d,s);}
else{
    printf("\n Move %d disc from %c to %c",n,s,d);
}
}
int main(){
int n;
printf("Read number of disc:");
scanf("%d",&n);
tofh(n,'S','D','T');
return 0;
}
