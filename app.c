#include <stdio.h>
#include "app_common.h"

int main(int argc, char ** argv)
{
	app_common_print_args(argc, argv);
	app_common_print_hello();
	app_common_press_enter();
	
	return 0;
}