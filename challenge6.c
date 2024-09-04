

#include<stdio.h>
#include<stdlib.h>

int main(){
int nbr,factur;
printf("entrer le nombre de tableu");
scanf("%d",&nbr);

int tab[nbr],i,min=0;

for(i=0;i<nbr;i++)
{
    printf("le nombre n %d :",i+1);
    scanf("%d",&tab[i]);
}
printf("entrer le factur");
scanf("%d",&factur);

for(i=0;i<nbr;i++)
{
    printf("%d * %d =%d\n",tab[i],factur,factur*tab[i]);
}

return 0;
}
