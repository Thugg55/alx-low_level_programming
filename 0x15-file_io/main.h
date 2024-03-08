#ifndef MAIN_H
#define MAIN_H

#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * File: main.h
 * Auth: Edogun Peter Uyi
 * Desc: The header file, contains prototypes for 
 * all functions written in 0x15-file_io directory.
 */

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);

#endif /* MAIN_H */
