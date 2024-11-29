#include <stdio.h>
void square();
int main(){
square();
}

void square(){
int a,s;
printf("enter the  number : ");
scanf("%d",&a);
s=a*a;
printf("%d",s);
}
