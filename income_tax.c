#include<stdio.h>
int main(){
float income;

printf("income:");
scanf("%f",&income);

if(income<=1,50,000){
printf("no tax");
}
else if(income >= 1,50,001 && income <=3,00,000){
printf(" 10%tax");
}
else if(income >= 3,00,001 && income <=5,00,000 ){
printf("20% tax");
}

else{
printf("30% tax");
}
}
