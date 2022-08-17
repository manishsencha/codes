#include <stdio.h>

int main(void) {
	// your code goes here
	int t,players,winner,position,defeat;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&players,&position);
	    int arr[players],count=1000000000;
	    for(int i=0;i<players;i++){
	        scanf("%d",&arr[i]);
	        defeat = position%arr[i];
	        if(defeat==0){
	            int tempcount=(position/arr[i]);
	            if(tempcount<count){
	                count=tempcount;
	                winner=arr[i];
	            }
	        }
	    }
	    if(count<=1 || count==1000000000){
	        printf("-1\n");
	    }
	    else{
	        printf("%d\n",winner);
	    }
	}
	return 0;
}
