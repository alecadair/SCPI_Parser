/*
 * main.c
 *
 *  Created on: Sep 20, 2017
 *      Author: AAdair
 */

#include <stdlib.h>
#include "command_tree.h"


int main(){
	command_tree tree = add_scpi_command("MEAS:AC:CURRENT");

	return 0;
}
