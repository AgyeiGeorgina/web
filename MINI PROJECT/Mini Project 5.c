#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char traffic_light_state;
		printf("Enter a character to show a traffic light(R,Y,G,E):"); 
		//'R' for red,'Y' for yellow,'G' for green,'E' for exit
		scanf(" %c", &traffic_light_state);
		
		switch(traffic_light_state){
			case'R':
				printf("Red means Stop\n");
				break;
				
				case'Y':
					printf("Yellow means Get ready\n");
					break;
					
					case'G':
						printf("Green means Go\n");
						break;
						
						case'E':
							printf("Drive safely\n");
							
							default:
								printf("Invalid input.Please enter R,Y,G,or E \n");
		}
		
	
	return 0;
}
