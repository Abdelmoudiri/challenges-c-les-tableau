

#include<stdio.h>
#include<stdlib.h>

int main(){
int nbr,factur;
printf("entrer le nombre de tableu");
scanf("%d",&nbr);

int tab[nbr],i,j,temp;

//remplissage

for(i=0;i<nbr;i++)
{
    printf("le nombre n %d :",i+1);
    scanf("%d",&tab[i]);
}

int somme=0;
//affichage

for(i=0;i<nbr;i++)
{
    somme+=tab[i];
}
printf(" la somme est %d ",somme/nbr);

return 0;
}

