#include<stdio.h>
int main(){
  
   int display[2][3];

   int i, j;
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("Enter value for display[%d][%d]:", i, j);
         scanf("%d", &display[i][j]);
      }
   }

   printf("Array Elements:\n");
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("%d ", display[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }
   return 0;
}
