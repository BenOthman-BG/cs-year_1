#include <stdio.h>

int king ( int x , int y ){
  int f ;


  if (y%2 == 0 && y!=0){
    f = (2*x)*(y/2);
  }
  else{
    f = king(x , y-1) + x ;
  }

  return f ; 
}

int main (){
  
  int a , b ;
  int s ;

  printf("veuillez saisir le nomber a : ");
  scanf("%d",&a);

  printf("veuillez saisir le nomber b : ");
  scanf("%d",&b);

  s = king(a,b);

  printf("a*b = %d " ,s);

  return 0 ;
}
