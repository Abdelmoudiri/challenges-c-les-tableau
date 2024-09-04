#include<stdio.h>
#include<stdlib.h>

int main(){
int nbr,nbr2,factur;
printf("entrer le nombre de  1 tableu");
scanf("%d",&nbr);
printf("entrer le nombre de  2 tableu");
scanf("%d",&nbr2);
int tab2[nbr],tab1[nbr+nbr2],i,j,temp;

//remplissage

for(i=0;i<nbr;i++)
{
    printf(" table 1 le nombre n %d :",i+1);
    scanf("%d",&tab1[i]);
}
for(i=0;i<nbr;i++)
{
    printf(" table 2 le nombre n %d :",i+1);
    scanf("%d",&tab2[i]);
}

int somme=0;
//affichage

for(i=0;i<nbr;i++)
{
    tab1[i+nbr2]=tab2[i];
}

for(i=0;i<nbr+nbr2;i++)
{
   printf(" %d ",tab1[i]);
}

return 0;
}
