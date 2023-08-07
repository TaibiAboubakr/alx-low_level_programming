#include "main.h"
/**
 * closefiles - function that close files.
 * @of_src: file descriptor of file to close
 * @of_dst: file descriptor of file to close
 */
void closefiles(ssize_t of_src, ssize_t of_dst)
{
ssize_t cf_src, cf_dst;

cf_src = close(of_src);
if (cf_src == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", of_src);
exit(100);
}
cf_dst = close(of_dst);
if (cf_dst == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", of_dst);
exit(100);
}
}
/**
 * main - program that copies the content of a file to another file.
 * @argc: The number of command-line arguments
 * @argv: An array of strings representing the arguments
 * Return: Always 0.
  */
int main(int argc, char *argv[])
{
ssize_t of_src, of_dst, wf_dst, rf_src = BUF_SIZE;
char buffer[BUF_SIZE], *file_dst, *file_src;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
file_src = argv[1];
file_dst = argv[2];
of_src = open(file_src, O_RDONLY);
if (of_src == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_src);
exit(98);
}
umask(0);
of_dst = open(file_dst, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (of_dst == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_dst);
exit(99);
}
while (rf_src == BUF_SIZE)
{
rf_src = read(of_src, buffer, BUF_SIZE);
if (rf_src  == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_src);
exit(98);
}
wf_dst = write(of_dst, buffer, rf_src);
if (wf_dst == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_dst);
exit(99);
}
}
closefiles(of_src, of_dst);
return (0);
}
