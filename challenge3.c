#include <stdio.h>
/*somme des N Nombres
Écrivez un programme C qui demande un nombre entier n
à l’utilisateur et calcule la somme des n premiers nombres 
naturels. Par exemple, pour n = 4, la somme est 1 + 2 + 3 + 4 = 10.*/


int returnresult(int nombre){
  int somme = 0,i = 1;
  while (i <= nombre)
    {
        somme += i;
        i++;
    }
    return somme;
}
int main(){
    //initialisation des variable
    int nombre,somme;
    //demande de saisir un nombre a l'utilisateur
    printf("saisir un nombre : \n");
    scanf("%d",&nombre);
    somme =  returnresult(nombre);
    //affichage de la somme
    printf("la somme des %d premier nombre egale %d \n",nombre,somme);
    
    
}