#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int num;
	    scanf("%d",&num);
	    int arr[num];
	    for(int i=0;i<num;i++ ){
	        scanf("%d",&arr[i]);
	    }
	    int count=0;
	    for(int i = 0; i < num; i++){
	        for(int j = i+1; j < num; j++){
	            //printf("(%d , %d) = %d \n",arr[i],arr[j],arr[i]&arr[j]);
	            int x = arr[i];
	            int y = arr[j];
	            int a_and_b = x & y;
	            if(a_and_b == x){
	                count++;
	            }
	        }
	    }
	     printf("%d\n",count);
	}
	return 0;
}
