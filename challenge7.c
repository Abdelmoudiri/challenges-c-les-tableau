#include<stdio.h>
#include<stdlib.h>

int main(){
int nbr,factur;
printf("entrer le nombre de tableu");
scanf("%d",&nbr);

int tab[nbr],i,j,reserve;

for(i=0;i<nbr;i++)
{
    printf("le nombre n %d :",i+1);
    scanf("%d",&tab[i]);
}

reserve=0;

     for(i=0;i<nbr-1;i++)
    {
       if(tab[i]< tab[i+1])
       {
        reserve = tab[i];
        tab[i] = tab[i+1];
        tab[i+1] = reserve ;
       }
    }
for(i=0;i<nbr;i++)
{
    printf(" %d  \n ",tab[i]);

}

return 0;
}
