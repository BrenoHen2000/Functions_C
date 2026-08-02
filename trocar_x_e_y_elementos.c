#include <stdio.h>


int main() {
    #define tam 5
    int a[tam] = {1,2,3,4,5};
    
    for(int i = 0; i<5;i++){
       printf("%d",a[i]);
   }
  
    printf("\n");
    
  
       int temp = a[0];
       a[0] = a[tam-1];
       a[tam-1] = temp;
   

   
    for(int i = 0; i<5;i++){
       printf("%d",a[i]);
   }
    return 0;
}
