

## Simple Shell Project for Holberton School 2022

### A simple Linux shell writen in C to play with system calls

This is the final project of 1st trimester Full-Stack Developer Course

This project consists of designing a shell interface that accepts user commands and then executes each command in a separate process. 

#### Allowed functions and system calls


	
#Simple Shell
In this project we created a simple command interpreter which works as the original Shell, we can execute commands and show its output.
## Shell Files

| File | Description |
| ------ | ------ |
| main.h | function prototypes |
| simple_shell.c | the main function |
| getenv.c | looks for environment string pointed by name |
| getpath.c | gets the "PATH" variable |
| tokenizer.c | separates string by delimiter and saves a copy |
| str_func.c | all functions used to interact with strings |
| man_1_simple_shell | shell manual |
| AUTHORS | people who contributed to repository |
#### Overview

A shell interface gives the user a prompt, after which the next command is entered.

The main() function continually loops as long as should run equals 1; when the user enters exit at the prompt, your program will set should run to 0 and terminate.

#### Compilation

The shell is compiled this way:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

#### Testing

Your shell should work like this in interactive mode:

$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$

But also in non-interactive mode:

$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$

