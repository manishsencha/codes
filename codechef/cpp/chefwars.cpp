#include <stdio.h>

int main(void) {
	// your code goes here
	int t,power, health;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&health,&power);
	    while(power){
	        health=health-power;
	        power=power/2;
	//	printf("%d\n",power);
	//	printf("%d\n",health);
		}
	if(health>0){
	    printf("0\n");
	}
	else{
	    printf("1\n");
	}
	}
	return 0;
}

