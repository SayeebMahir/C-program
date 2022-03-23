#include<stdio.h>
int main (){
int a,x,y;
printf("Enter the value of Height: ");
scanf("%d",&a);
 x=a/100;
y= a%100;

printf("%d meter %d centimeter", x,y);
}
