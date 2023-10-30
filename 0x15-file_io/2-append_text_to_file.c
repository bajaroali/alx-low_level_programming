#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strlen - this function counts string length
 * @str: string to be used
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * append_text_to_file - function that appends text,
 * at the end of a file
 * @filename: the name of the file
 * @text_content: the text content to be appended
 *
 * Return: 1(success) , -1 (otherwise)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, wrote;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		wrote = write(file, text_content, _strlen(text_content));
		if (wrote == -1)
		{
			close(file);
			return (-1);
		}
		close(file);
		return (1);
	}
	else
	{
		close(file);
		return (1);
	}
}
