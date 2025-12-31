#include <stdio.h>
#include <stdlib.h>

int main (){

    FILE *R_file ;
    int car_actuel ;


    R_file = fopen("Ben_OTHMAN.txt" ,"r");

if(R_file == NULL){

    printf("ERREUR");
    return 1 ; 
}

car_actuel = fgetc(R_file);

while(car_actuel != EOF ){
    printf("%c" ,car_actuel);
    car_actuel = fgetc(R_file);

}

printf("\nwe read your file successfuly");


return 0 ;}