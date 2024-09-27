#include <stdio.h>

/*Affichage de la Suite de Fibonacci
Écrivez un programme C qui génère les n premiers termes 
de la suite de Fibonacci, où n est entré par l’utilisateur. 
La suite de Fibonacci est définie comme suit : 
F(0) = 0, F(1) = 1, et F(n) = F(n-1) + F(n-2).*/

int main(){

    int nombre,i,j,terme; 
    printf("saisir un nombre : \n");
    scanf("%d",&nombre);
    for (i = 0; i <= nombre; i++)
    {
    
       if (i == 0 || i == 1) printf("F(%d) = %d\t",i,i);
       else {
        terme = (i-1) + (i-2);
        printf("F(%d) = %d\t",i,terme);
       }
       
    }
    

}