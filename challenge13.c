
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


//affichage

for(i=0;i<nbr;i++)
{
    if (tab[i] % 2 != 0) {
        printf(" %d  \n ",tab[i]);
    }
}

return 0;
}

