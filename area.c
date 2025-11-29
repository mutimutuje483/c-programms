#include <stdio.h>
int main(){
int a;
int i;
int product;
printf("enter a number: ");
scanf("%d",&a);
for(i=1;i<11;i++){
        product =a*i;
    printf("%d\n",product);
}

return 0;
}
