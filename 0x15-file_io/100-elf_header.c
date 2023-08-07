#include "main.h"

/**
 * main - displays the information contained in the ELF header at the start of
 * an ELF file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 98 on failure
 */

int main(int argc, char *argv[])
{
    int fd, readed;
    char buffer[5];
    char *magic = "ELF";

    if (argc != 2)
        dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);

    fd = open(argv[1], O_RDONLY);
    if (fd < 0)
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

    readed = read(fd, buffer, 5);
    if (readed < 0)
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

    if (readed != 5 || strncmp(buffer, magic, 4) != 0)
        dprintf(STDERR_FILENO, "Error: Not valid ELF file %s\n", argv[1]), exit(98);

    close(fd);

    return (0);
}
