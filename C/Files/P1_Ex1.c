#include <stdio.h>
#include <stdlib.h>


int main (){

    FILE *EX1 ;

 EX1 = fopen("File2_EX1.txt" ,"w");

 if (EX1 == NULL){
  printf("ERREUR , cann't creat your file .");
  exit(1);
 }

 fprintf(EX1 ,"Othman benyahya is the best player in the world \n Hamza is more creative now \n the world cann't servive without othman and his broder \n I know The power that they have \n they have a special power \n they can chane the world \n");

 fclose(EX1);

printf("\nThe file was created saccessfuly\n");

return 0 ;}