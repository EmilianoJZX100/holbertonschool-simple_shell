#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * Return: 0
 */
typedef struct structure
{
	char h;
	int(*x)(char**);
}s_t;

/**
 * main - splits a string and returns an array of each word of the string
 * Return: 0
 */
char ** splitter(char*input, char* delim);
void commands(char**tokens, char*command);
void mv(char**buffer);

int main(void)
{
	char *input = NULL;
	char **tokens;
	size_t len = 0;
	
	while(1)
	{
		printf("$ ");
		getline(&input,&len, stdin);
		if(!input)
			return (0);
	}
	tokens = splitter(input, "\n\t\r ");
	//case part
	commands(tokens,tokens[0]);
{
	/*
	char *buffer = NULL;
	size_t len = 0;
	char *token;

	while (1)
	{
		printf("$ ");
		getline(&buffer, &len, stdin);
		printf("buffer getline: %s", buffer);

	token = strtok(buffer, " ");

	while (token)
	{
		printf("buffer strtok: %s\n", token);
		if(token=="mv "){
		printf("es mv");
	}
		token = strtok(NULL, " ");
	}
	}*/
	return (0);
}
char ** splitter(char*input,char*delim)
{
	char* token;
	int i = 0;
	char** tokens = malloc(sizeof(char) * 1024);
	token = strtok(input,delim);

	while(token != NULL)
	{
		tokens[i]=token;
		i++;
		token = strtok(NULL,delim);
	}
	tokens[i] == NULL;
	return (tokens);
}
void commands(char**tokens, char*command)
{
	s_t est[] = {
		{"mv",mv},};
   //int j=0;
  /* while (j<1){
    if(!strcmp(est[j],command)){
        est[j].x(tokens);
    }
        
    j++;
   };*/
	est[0].x(tokens);
}
void mv(char**buffer)
{
	printf("Hola Funciono\n");
}
