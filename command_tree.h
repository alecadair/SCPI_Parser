/*
 * command_tree.h
 *
 *  Created on: Sep 20, 2017
 *      Author: AAdair
 */

#ifndef COMMAND_TREE_H_
#define COMMAND_TREE_H_

#include <stdlib.h>
#include <string.h>

#define QUERY 0
#define SET 1

//#include <stdlib.h>

/*linked list for command parameters*/
typedef struct params_list{
	char parameter[4];
	struct params_list* next_param;
}params_list;

typedef struct tree_node{
	char command[4];
	char type_of_command;
	params_list parameters;
	struct tree_node** children; //array of children nodes
	char is_leaf_node;
}tree_node;


/*linked list for children of a tree node*/
//typedef struct children_list{
//	tree_node node;
//	char command[4];
//}children_list;


typedef struct command_tree{
	tree_node root_node;
}command_tree;

command_tree add_scpi_command(char* scpi_commands);



typedef struct string_list{
	char* string;
	struct string_list* next_string;
}string_list;

string_list create_string_list_node();
unsigned add_string_to_list(string_list* list, char* string_to_add);
//command_tree tree;

#endif /* COMMAND_TREE_H_ */
