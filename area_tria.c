#include<math.h>
int main(){
float a,b,c;

printf("enter the value of a:");
scanf("%f",&a);
printf("enter the value of b:");
scanf("%f",&b);
printf("enter the value of c:");
scanf("%f",&c);

float s=(a+b+c)/2 ;

float area=sqrt((s)*(s-a)*(s-b)*(s-c));

printf("area:%f",area);


}
