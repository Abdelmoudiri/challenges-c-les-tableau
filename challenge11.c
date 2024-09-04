
#include<stdio.h>
#include<stdlib.h>

int main(){
int nbr,factur;
printf("entrer le nombre de tableu");
scanf("%d",&nbr);

int tab[nbr],i,Avaleur,Nvaleur;

//remplissage

for(i=0;i<nbr;i++)
{
    printf("le nombre n %d :",i+1);
    scanf("%d",&tab[i]);
}
printf("entre la  valeur tu veux changer :");
scanf("%d",&Avaleur);
printf("entre la novelle valeur :");
scanf("%d",&Nvaleur);
for(i=0;i<nbr;i++)
{
if(tab[i]==Avaleur)
{
    tab[i]=Nvaleur;
}
}


//affichage

for(i=0;i<nbr;i++)
{
    printf(" %d  \n ",tab[i]);
}

return 0;
}

