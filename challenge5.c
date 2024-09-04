

#include<stdio.h>
#include<stdlib.h>

int main(){
int nbr;
printf("entrer le nombre de tableu");
scanf("%d",&nbr);

int tab[nbr],i,min=0;

for(i=0;i<nbr;i++)
{
    printf("le nombre n %d",i+1);
    scanf("%d",&tab[i]);
}
//min=__INT_MAX__;
min=tab[0];
for(i=0;i<nbr;i++)
{
    if(min>tab[i]){
        min=tab[i];
    }
}
printf("le min est %d",min);
return 0;
}
