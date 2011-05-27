/* filename: app_common.c */
#include <stdio.h>
#include "app_common.h"

int app_common_factorial(int n){
    if(n!=1){
	return(n * app_common_factorial(n-1));
    }
    else return 1;
}

void app_common_print_hello(){
	printf("Hello, World!\n");
}

void app_common_print_args(int argc, char ** argv){
	if(argc > 1){
		printf("%d Command-Line Argument(s)\n", argc - 1);
		int c = 0;
		int lim = argc - 1;
		for(c = 0; c < lim; c++){
			printf("> %s\n", argv[c + 1]);
		}
	}else{
		printf("No Command-Line Arguments\n");
	}
}

void app_common_press_enter(){
	char  b2[] = "ABCD";
	puts("Please press ENTER.");
	fgets(b2, 5, stdin);  // 5 is the size of buffer b2
	if (b2[strlen(b2)-1] == '\n') b2[strlen(b2)-1] = '\0';
}

void app_common_title(char *title){
	puts(title);
	int l = strlen(title);
	int i = 0;
	for(i = 0; i < l; i++){
		printf("=");
	}
	printf("=\n");
}

