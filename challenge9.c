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
for(i=0;i<nbr/2;i++)
{
temp = tab[i];
tab[i] = tab[nbr - i-1 ];
tab[nbr - i-1] = temp;
}


//affichage

for(i=0;i<nbr;i++)
{
    printf(" %d  \n ",tab[i]);
}

return 0;
}

