#include "mainh"

/**
 * create_file - creates a file,
 * The created file must have those permissions: rw-------. If the file
 * already exists, do not change the permissions.
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
    int fd, written, len = 0;

    if (filename == NULL)
        return (-1);

    fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

    if (fd < 0)
        return (-1);

    if (text_content != NULL)
    {
        while (text_content[len] != '\0')
            len++;

        written = write(fd, text_content, len);
        if (written != len)
            return (-1);
    }

    close(fd);

    return (1);
}