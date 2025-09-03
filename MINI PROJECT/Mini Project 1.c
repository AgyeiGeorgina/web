#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int marks;
	int grade;
	printf("Enter your marks:");
	scanf(" %d", &marks);
	
	if(marks >= 90 && marks <= 100){
		printf("Grade:A",&grade);
		}else if(marks>=80 && marks<=89){
			printf("Grade:B",&grade);
		}else{
			if(marks>=70 && marks<=79){
				printf("Grade:C", &grade);
			}else{
				if(marks>=50 && marks<=69){
					printf("Grade:D",&grade);
				}else if(marks>=0 && marks<=50){
					printf("Grade:F\n",&grade);
				}else if(marks<=0){
					printf("Invalid marks.Marks should be between 0 and 100");
				}
		
				}
			}
		
	
	return 0;
}
