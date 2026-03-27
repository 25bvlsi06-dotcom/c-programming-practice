#include<stdio.h>
int main (){
          int is_sunday;
    int is_snowing;
            printf("Is it Sunday? (1 for yes, 0 for no): ");
    scanf("%d", &is_sunday);
    printf("Is it snowing? (1 for yes, 0 for no): ");
    scanf("%d", &is_snowing);
          if (is_sunday==1 && is_snowing==1)
          printf("you can enjoy and have some fun\n");

          if (is_sunday==1 && is_snowing==0)
          printf("you have to do work then enjoy holiday\n");
          if (is_sunday==0 && is_snowing==1)
          printf("you have to stay at home and enjoy the snow\n");
              if (is_sunday==0 && is_snowing==0)
              printf("you have to go to work and do not stay at home\n");
             
            return 0;
          
}
