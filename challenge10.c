
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
int nbr;
printf("entrer le nombre de tableu");
scanf("%d",&nbr);

int tab[nbr],i;

//remplissage

for(i=0;i<nbr;i++)
{
    printf("le nombre n %d :",i+1);
    scanf("%d",&tab[i]);
}
int x;
printf("entre que tu va chercher ");
scanf("%d",&x);

bool y=false;

     while(y=false)
    {
        if(tab[i]=x)
        {
            printf("le nombre est trouve ");
            y=true;
        }
    }

//affichage

if (y==false)
{
    printf("element n trouver pas");
}else {
        printf("element exicte");

}
return 0;
}

