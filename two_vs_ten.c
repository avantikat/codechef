#include <stdio.h>
int main() {
	int T, a;
	scanf("%d\n",&T);
	while(T--)
	{
	    scanf("%d\n",&a);
	    if(a%10==0){
	        printf("0\n");
	    }
	    else if(a%5==0){
	        printf("1\n");
	    }
	    else{
	        printf("-1\n");
	    }
	}
	return 0;
}
