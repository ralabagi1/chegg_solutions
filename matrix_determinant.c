#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main(void) {
	//declare variables 
	int i, j, k, d,c;			//used for loop
	int m = 0; 
	int n= 0;
	int colA, rowA;
	int size= 0;
	int a[3][3];
	int A[10][10];
	int colB, rowB;
	int B[10][10];
	int rows, colms;
	int transpose[10][10];
	int determinate = 0;
	int scalar = 0;
	int sclrMat[20][20] = 0;
	int multiply[20][20];
	int matrix[10][10];
	int scalarChoice = 0;
	int detChoice;
	int userChoice;
	char loopAgain, loopMenu;
	int sumM[10][10];
	int sumM1 = 0;
	int sub[10][10];

	//do while loop to loop until user wants to quit
	do {


		//read in matrix A
		printf("****READING IN MATRIX****	\n\n");
		printf("What is the size of Matrix A? (Max input is: 10x10)\n\n");
		printf(" rows A =");
		scanf("%d", &rowA);
		printf(" cols A =");
		scanf("%d", &colA);


		printf("\n\n.....Matrix eneteries.....\n\n");
		for (i = 0; i < rowA; i++) {
			for (j = 0; j < colA; j++) {
				scanf("%d", &A[i][j]);
			}
		}

		printf("\n.....printing matrix A....\n\n");
		for (i = 0; i < rowA; i++) {
			for (j = 0; j < colA; j++) {
				printf("%5d", A[i][j]);
			}
			printf("\n\n");
		}

		//read in matrix B

		printf("\n\n****READING IN SECOND MATRIX****	\n\n");
		printf("What is the size of Matrix B? Max 10x10\n\n");
		printf(" rows B =");
		scanf("%d", &rowB);
		printf(" cols B =");
		scanf("%d", &colB);

		printf("\n\n.....Matrix eneteries.....\n\n");
		for (i = 0; i < rowB; i++) {
			for (j = 0; j < colB; j++) {
				scanf("%d", &B[i][j]);
			}
		}
		printf("\n.....printing matrix B....\n\n");
		for (i = 0; i < rowB; i++) {
			for (j = 0; j < colB; j++) {
				printf("%5d", B[i][j]);
			}
			printf("\n\n");
		}

		//loop menu to perform more than one operation on th same two matrices

		do {
			//Matrix Menu ----------------------------

			printf("\t\t * ***MATRIX CALCULATOR * ***\n\n\n");
			printf("Press 1 to add\n");
			printf("press 2 to Subtract\n");
			printf("Press 3 to scalar Multiply\n");
			printf("Press 4 to Matrix Multiply\n");
			printf("Press 5 to Transpose\n");
			printf("Press 6 to determinate\n");
			printf("Choice:");
			scanf("%d", &userChoice);

			switch (userChoice) {
			case 1:
				printf("You chose add!\n\n");


				if ((rowA == rowB) && (colA == colB)) {
					for (i = 0; i < rowB; i++) {
						for (j = 0; j < colB; j++) {
							sumM[i][j] = A[i][j] + B[i][j];

						}
					}
					for (i = 0; i < rowB; i++) {
						for (j = 0; j < colB; j++) {
							printf("%5d", sumM[i][j]);
						}
						printf("\n");
					}
				}
				else
					printf("Error! Unequal Matrix sizes. Add is NOT possible\n\n");

				break;
			case 2:
				printf("you chose subtract!\n\n");

				if ((rowA == rowB) && (colA == colB)) {
					for (i = 0; i < rowB; i++) {
						for (j = 0; j < colB; j++) {
							sub[i][j] = A[i][j] - B[i][j];

						}
					}
					for (i = 0; i < rowB; i++) {
						for (j = 0; j < colB; j++) {
							printf("%5d", sub[i][j]);
						}
						printf("\n");
					}
				}
				else
					printf("Error! Unequal Matrix sizes. Add is NOT possible\n\n");

				break;
			case 3:
				printf("You chose Scalar Mutiply!\n\n");		//scalar multiply
				printf("Press 1 for One scalar\n OR \n Press 2 for Two scalars: ");
				scanf("%d", &scalarChoice);

				if (scalarChoice == 1) {
					printf("scalar =");
					scanf("%d", &scalar);

					printf("Printing Scalar Multiply [A]\n");
					for (i = 0; i < rowA; i++) {
						for (j = 0; j < colA; j++) {
							sclrMat[i][j] = A[i][j] * scalar;
						}

					}
					for (i = 0; i < rowA; i++) {
						for (j = 0; j < colA; j++) {
							printf("\t%5d", sclrMat[i][j]);
						}
						printf("\n");
					}
					printf("Printing Scalar Multiply [B]\n");
					for (i = 0; i < rowB; i++) {
						for (j = 0; j < colB; j++) {
							sclrMat[i][j] = B[i][j] * scalar;
						}

					}
					for (i = 0; i < rowB; i++) {
						for (j = 0; j < colB; j++) {
							printf("\t%5d", sclrMat[i][j]);
						}
						printf("\n");
					}
				}
				else if (scalarChoice == 2) {
					printf("scalar =");
					scanf("%d", &scalar);
					printf("Printing Scalar Multiply [A]\n");
					for (i = 0; i < rowA; i++) {
						for (j = 0; j < colA; j++) {
							sclrMat[i][j] = A[i][j] * scalar;
						}

					}
					for (i = 0; i < rowA; i++) {
						for (j = 0; j < colA; j++) {
							printf("\t%5d", sclrMat[i][j]);
						}
						printf("\n");
					}
					printf("Printing Scalar Multiply [B]\n");
					for (i = 0; i < rowB; i++) {
						for (j = 0; j < colB; j++) {
							sclrMat[i][j] = B[i][j] * scalar;
						}

					}
					for (i = 0; i < rowB; i++) {
						for (j = 0; j < colB; j++) {
							printf("\t%5d", sclrMat[i][j]);
						}
						printf("\n\n");
					}

				}
				else
					printf("ERROR! Enter 1 or 2 only.\n\n");

				break;
			case 4:
				printf("You chose Matrix Mutiply!\n\n");
				printf("\033[0m");       //reset back to black
				if (colA != rowB)
					printf("Matrices with entered orders can't be multiplied with each other.\n");
				else
				{
					for (i = 0; i < rowA; i++)
					{
						for (j = 0; j < colB; j++)
						{
							for (k = 0; k < rowB; k++)
							{
								sumM1 = sumM1 + A[i][k] * B[k][j];
							}
							multiply[i][j] = sumM1;
							sumM1 = 0;
						}
					}
					printf("Product of entered matrices:-\n");
					for (i = 0; i < rowA; i++)
					{
						for (j = 0; j < colB; j++)
							printf("%d\t", multiply[i][j]);
						printf("\n\n");
					}
				}

				break;

			case 5:
				printf("You chose Transpose!\n\n");
				for (rows = 0; rows < i; rows++)
				{
					for (colms = 0; colms < j; colms++)
					{
						B[colms][rows] = A[rows][colms];
					}
				}

				printf("\n Transpose Matrix Elements are: \n");
				for (rows = 0; rows < j; rows++)
				{
					for (colms = 0; colms < i; colms++)
					{
						printf("%d \t ", B[rows][colms]);
					}
					printf("\n\n");
				}
				break;

			case 6:
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
					determinate = ((a[0][0] * a[1][1]) - (a[1][0] * a[0][1]));
					printf("\n\nDterminant of 2x2 matrix is : %d\n", determinate);

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
					determinate = (a[0][0] * (a[1][1] * a[2][2] - a[2][1] * a[1][2]))
						-
						(a[0][1] * (a[1][0] * a[2][2] - a[2][0] * a[1][2]))
						+
						(a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]));
					printf("\nDeterminant of 3X3 matrix: %d", determinate);

				}
				else
					printf("ERROR! Determinant is only available on a 2 by 2 or 3 by 3 Matricies.\n\n");


			default:
				printf("Error! Please choose from 1-6\n\n");
			}


			printf("Another operation (y/n): ");
			scanf(" %c", &loopMenu);
			loopMenu = tolower(loopMenu);

		} while (loopMenu == 'y');

		printf("Another A and B matrix (y/n)? ");
		scanf(" %c", &loopAgain);
		loopAgain = tolower(loopAgain);

	} while (loopAgain == 'y');



	return 0;

}
