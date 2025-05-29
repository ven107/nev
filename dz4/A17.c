#include <stdio.h> 

int main(){
	
	int number;
	scanf("%i",&number);
	if (number==1||number==2||number==12)
	printf("winter");
	
	 if(number>=3&&number<=5)
	 
	printf("spring");
	else if (number>=6&&number<=8)
	printf("summer");
	else if (number>=9&&number<=11)
	printf("autumn");

	printf("\n");

   return 0;
}
	



