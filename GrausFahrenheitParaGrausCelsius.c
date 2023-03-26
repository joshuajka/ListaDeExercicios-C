#include<stdio.h>
main(){
int qtd,i=1;
float f,c;
scanf("%d",&qtd);
while(i<= qtd){
    scanf("%f",&f);

    c = 5*(f-32)/9;

    printf("%.2f FAHRENHEIT EQUIVALE A %.2f CELSIUS \n",f,truncf(c*100)/100);

i++;
}


}
