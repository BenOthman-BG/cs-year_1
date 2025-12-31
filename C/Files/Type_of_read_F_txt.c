#include <stdio.h>
#include <stdlib.h>

// Type of reading a file.txt 

int main(){

    FILE *p ;
    char NomF[50];
    //char srt[50];
    char c ;


    printf("Bonjour , ce programme va lire un fichier.txt\n");
    printf("Entrer le nom de fichier.txt\n");
    scanf("  %[^\n]s" ,NomF);

    //open the file 

    p = fopen(NomF ,"r");

    if(p ==NULL){
        printf("cann't open  your file .");
        exit(1);
    }

    // lire le fichier 
    // 1er mithode (fgets)
   /* while(fgets(srt,50,p) != NULL){
        printf("%s" ,srt);
    }

    printf("your file readed successfuly\n");

    fclose(p);
    */

    //2eme mithode (fgetc)

    do{
        c = fgetc(p);
        printf("%c" ,c);
    }while(c != EOF);

    printf("\nyour file readed successfuly\n");

    fclose(p);


return 0 ;}