#include <stdio.h>

/*Compteur de Chiffres
Écrivez un programme C qui demande à l’utilisateur un entier 
positif et compte le nombre de chiffres dans cet entier. 
Par exemple, pour n = 12345, affichez : Nombre de chiffres = 5.*/
int main(){
    //initialistion des variables
    int nombre,somme = 0,count = 1; 
    printf("saisir un nombre : \n");
    scanf("%d",&nombre);
    
   if (nombre == 0) printf("le nombre de chifres de %d et %d",0,0);
    
   else if (nombre > 0)
    {
        somme = nombre/10;
        while (somme != 0)
        {
            somme /= 10;
            count++;
        }
        printf("le nombre de votre chifre est : %d",count);
    }
    
    else if(nombre < 0) printf("le nombre entrer et negative");
    
}