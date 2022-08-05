# Simple Shell
![Simple Shell](https://wallpaper.dog/large/20512806.jpg)

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

A shell interface gives the user a prompt, in this case we established a "$", after which the next command is entered.

The main() function continually loops as long as should run equals 1; when the user enters exit at the prompt, your program will set should run to 0 and terminate.

## Authors
- Emiliano Rodriguez - [GitHub](https://github.com/EmilianoJZX100)
- Victoria Márquez - [GitHub](https://github.com/vicomarquez)
