#include<stdio.h>
#include<cstdlib>

int main()
{
    int i, num1, num2, count = 0, sum = 0, option;
 	
	do{
		system("cls");
 	printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n"); 	
 	printf("	   DIVISIBLE PROGRAM			\n");
 	printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n\n\n");
 	
 	
    printf(":: Enter the value of Integer1 and Integer2 \n");
    printf(":: Integer 1 : ");
    scanf("%d", &num1);
    printf(":: Integer 2 : ");
    scanf("%d", &num2);
    
    /*Input integer1 sama Integer2 buat nentuin interval nya,
    tapi kalo ikutin contoh soal ke, coba masukin integer1 = 1
    integer2 = 100*/
 	
	 system("cls");
	printf("\n\n"); 
 	printf("----------------------------------------------------------------------\n"); 	
	printf("				RESULT			\n");  
 	printf("----------------------------------------------------------------------\n\n"); 
    printf("Integers divisible by 3 are :\n");
    for (i = num1; i < num2; i++)
    {
        if (i % 3 == 0 && i%6 !=0)
        {
            printf("( %d ),", i);
            count++;
            sum = sum + i;
        }
    }
    


    printf("\n\n:: Number of integers divisible by 6 between %d and %d = %d\n", num1, num2, count);
    printf(":: Sum of all integers that are divisible by 3 = %d\n\n", sum);
    printf("-----------------------------------------------------------------------\n\n");
    printf(":: Would you like to use the program again? (Input '1' to use again)\n:: ");
    scanf("%d", &option);
	
	}while(option == 1);
   
}
