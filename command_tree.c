/*
 * command_tree.c
 *
 *  Created on: Sep 20, 2017
 *      Author: AAdair
 */
#include "command_tree.h"


command_tree add_scpi_command(char* scpi_commands){
	char* command;
	string_list commands;
	commands.next_string = NULL;
	commands.string = NULL;
	unsigned command_count = 0;
	//commands = strtok(scpi_commands, ";");

	command_tree tree;
	return tree;
}

unsigned add_string_to_list(string_list* list, char* string_to_add){
	char* current_string = list->string;
	if(current_string  == NULL){
		list->string = string_to_add;
		return 1;
	}else{
		string_list* temp = list;
		//iterate until end of linked list
		while(temp->next_string != NULL){
			temp = temp->next_string;
		}
		string_list new_node = create_string_list_node();
		new_node.string = string_to_add;
		temp->next_string = &new_node;
		return 1;
	}
}

string_list create_string_list_node(){
	string_list new_node;
	new_node.string = NULL;
	new_node.next_string = NULL;
	return new_node;
}
