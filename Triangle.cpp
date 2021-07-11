#include <stdio.h>

int main()
{
	int inp;
	scanf("%d",&inp);
	if (inp == 1){
		printf("#");
	}
	else{
	for(int i=0;i!=inp;i++){
		printf("#");
	}
	printf("\n");
	for(int j=0;j!=inp-2;j++){
		printf("#");
		for(int a=0;a!=inp-2;a++){
			printf(" ");
		}
		printf("#");
		printf("\n");
	}
	for(int b=0;b!=inp;b++){
		printf("#");
	}
}
}
