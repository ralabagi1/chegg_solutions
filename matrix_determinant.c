#include <stdio.h>

int main()
{
    int detChoice,i,j,determinant ;
     printf("You chose determinate!\n\n");
               printf("Press 2 for 2x2\n OR \nPress 3 for 3x3 Matrix: \n");
               scanf("%d", &detChoice);
               printf("\n");

               if (detChoice == 2) {
                   printf("Matrix: ");
                   //scanf("%d", &detChoice);
                   int a[2][2];
                   printf("Enter elements in matrix of size 2x2: \n");

                  
                   printf("\n\nEnter the 4 elements of the array\n");
                   for (i = 0; i < 2; i++)
                       for (j = 0; j < 2; j++)
                           scanf("%d", &a[i][j]);

                   printf("\n\nThe entered matrix is: \n\n");
                   for (i = 0; i < 2; i++)
                   {
                       for (j = 0; j < 2; j++)
                       {
                           printf("%d\t", a[i][j]); // to print the complete row
                       }
                       printf("\n"); // to move to the next row
                   }

                   // finding the determinant of a 2x2 matrix
                   determinant = ((a[0][0] * a[1][1]) - (a[1][0] * a[0][1]));
                   printf("\n\nDterminant of 2x2 matrix is : %d\n", determinant);

               }
               else if (detChoice == 3) {
                   printf("Matrix: ");
                   int a[3][3];
                   printf("Enter elements in matrix of size 3x3: \n");


                   printf("\n\nEnter the 9 elements of the array\n");
                   for (i = 0; i < 3; i++)
                       for (j = 0; j < 3; j++)
                           scanf("%d", &a[i][j]);

                   printf("\n\nThe entered matrix is: \n\n");
                   for (i = 0; i < 3; i++)
                   {
                       for (j = 0; j < 3; j++)
                       {
                           printf("%d\t", a[i][j]); // to print the complete row
                       }
                       printf("\n"); // to move to the next row
                   }
      
                   // finding the determinant of a 3x3 matrix
                   determinant  = (a[0][0] * (a[1][1] * a[2][2] - a[2][1] * a[1][2]))
                                    - 
                                    (a[0][1] * (a[1][0] * a[2][2] - a[2][0] * a[1][2]))
                                    +
                                    (a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]));
                   printf("\nDeterminant of 3X3 matrix: %d", determinant );

               }
               else
                   printf("ERROR! Determinant is only available on a 2 by 2 or 3 by 3 Matricies.\n\n");
              
    return 0;
}
