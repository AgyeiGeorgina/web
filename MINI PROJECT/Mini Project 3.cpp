#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int age;
	char citizen;
	
	printf("Enter your age:");
	scanf("%d", &age);
	
	printf("Are you a citizen?:");
	scanf(" %c", &citizen);
	if(age>=18 && citizen=='Y') {
		printf("You are eligible to vote.\n");
	}else{
		if(age>=18 && citizen=='N'){
			printf("You are not eligible to vote.");
		}else{
			printf("You are not eligible to vote\n");
		}
}
			
		
	return 0;
}
