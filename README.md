![Simple Shell](https://wallpaper.dog/large/20512806.jpg)

# Simple Shell

## Synopsis

In this project we created a simple command interpreter written in C, which works as the original Shell, we can execute commands and obtain its actual output.

## Shell Files

| File | Description |
| ------ | ------ |
| main.h | function prototypes |
| simple_shell.c | the main function |
| getenv.c | looks for environment string pointed by name |
| getpath.c | gets the "PATH" variable |
| tokenizer.c | separates string by delimiter and saves a copy |
| str_func.c | all functions used to interact with strings |
| 2str_func.c | more functions to interact with characters and strings |
| man_1_simple_shell | shell manual |
| AUTHORS | people who contributed to repository |

## General Requirements

- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc, using the options - - -Wall -Werror -Wextra -pedantic -std=gnu89
- All files should end with a new line
- The code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- The shell should not have any memory leaks
- No more than 5 functions per file
- All your header files should be include guarded
- Use system calls only when needed

## Learning Objectives

- Who designed and implemented the original Unix operating system
- Who wrote the first version of the UNIX shell
- Who invented the B programming language (the direct predecessor to the C programming language)
- Who is Ken Thompson
- How does a shell work
- What is a pid and a ppid
- How to manipulate the environment of the current process
- What is the difference between a function and a system call
- How to create processes
- What are the three prototypes of main
- How does the shell use the PATH to find the programs
- How to execute another program with the execve system call
- How to suspend the execution of a process until one of its children terminates
- What is EOF / “end-of-file”?

## Let's get started!

First we need to compile our shell:

```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```

Then, we just start our shell by typing:

```sh
./hsh
```
## Testing our Shell

Our Shell works like this in interactive mode:

```sh
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```
And like this in non-interactive mode:

```sh
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
```
## Overview

A shell interface gives the user a prompt, in this case we established a "$", after which the command is entered. Everything that the user types after the command is called an "argument". The shell separates these words using as a delimiter an space(" ").
After this we check if it is a built-in command or not, if it is then it is executed, and if not we search for it in the PATH environmental variable for a directory that contains an executable file by that name.

The main() function continually loops as long as should run equals 1; when the user enters exit at the prompt, the program will terminate.

## Authors
- Emiliano Rodriguez - [GitHub](https://github.com/EmilianoJZX100)
- Victoria Márquez - [GitHub](https://github.com/vicomarquez)
