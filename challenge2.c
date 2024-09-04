#include<stdio.h>
#include<stdlib.h>

int main(){
int nbr;
printf("entrer le nombre de tableu");
scanf("%d",&nbr);

int tab[nbr],i;

for(i=0;i<nbr+1;i++)
{
    printf("le nombre n %d",i+1);
    scanf("%d",&tab[i]);
}

for(i=0;i<nbr+1;i++)
{
    printf("%d \n",tab[i]);
}
return 0;
}
