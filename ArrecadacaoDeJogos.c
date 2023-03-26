#include<stdio.h>
#include<math.h>
main(){

int jogos,total,i,j=0;
float pp,pg,pa,pc;

scanf("%d",&jogos);
float arrecadado[jogos];

while(j<jogos){
scanf("%d %f %f %f %f",&total,&pp,&pg,&pa,&pc);

pp = total*(pp/100);
pg = total*(pg/100)*5;
pa = total*(pa/100)*10;
pc = total*(pc/100)*20;

arrecadado[j] = pp + pg + pa + pc;






j++;
}

for(i=0;i<jogos;i++){
    printf("A RENDA DO JOGO N. %d E = %.2f \n",i,truncf(arrecadado[i]*100)/100);

}

}
