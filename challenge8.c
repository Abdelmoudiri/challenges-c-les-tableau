#include<stdio.h>
#include<stdlib.h>

int main(){
int nbr,factur;
printf("entrer le nombre de tableu");
scanf("%d",&nbr);

int tab[nbr],i,T[nbr];

for(i=0;i<nbr;i++)
{
    printf("le nombre n %d :",i+1);
    scanf("%d",&tab[i]);
}


     for(i=0;i<nbr;i++){
        T[i]=tab[i];
     }


for(i=0;i<nbr;i++)
{
    printf(" %d    : %d \n ",tab[i],T[i]);

}

return 0;
}

