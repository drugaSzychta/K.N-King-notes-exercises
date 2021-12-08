#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define NUM_PLANETS 8


int main(int argv, char *arg[]){ // array of pointers
	
	char *planets_arr[]={"Mercury","Wenus","Earth","Mars","Jupiter","Saturn","Neptun","Uran"};
	bool flag = false;
	
	for(int i=1;i<argv;i++){
	    for(int j=0;j<NUM_PLANETS;j++){
	        if(strcmp(arg[i],planets_arr[j])==0) // I have to focus on details
	            flag=true;
	    }
	    if(flag)
	        printf("%s is a planet\n,",arg[i]);
	    else
	        printf("%s is not a planet\n,",arg[i]);
	    
	    flag=false;
	}
	
	return 0;
}
