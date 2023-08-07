#ifndef MAIN_H
#define MAIN_H
#include <sys/types.h>
#include <stddef.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>
#define BUF_SIZE 1024

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void closefiles (ssize_t of_src, ssize_t of_dst);
void closefile (ssize_t of_src);
#endif /* MAIN_H */
