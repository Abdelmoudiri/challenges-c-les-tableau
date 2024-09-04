
#include<stdio.h>
#include<stdlib.h>

int main(){
int nbr;
printf("entrer le nombre de tableu");
scanf("%d",&nbr);

int tab[nbr],i,max=0;

for(i=0;i<nbr;i++)
{
    printf("le nombre n %d",i+1);
    scanf("%d",&tab[i]);
}

for(i=0;i<nbr;i++)
{
    if(max<tab[i]){
        max=tab[i];
    }
}
printf("le max est %d",max);
return 0;
}
