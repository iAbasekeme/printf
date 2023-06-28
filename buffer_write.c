#include <stdio.h>
#include <string.h>
#include <unistd.h>
#define BUF_SIZ 1024

/**
 * buffer_write - A function used accumulate data in a
 * buffer before writing
 * @data: Type of data
 * @size: size of data
 * @fd: int
 *
 * Return: nothing
 */

void buffer_write(int fd, const char *data, size_t size)
{
	char buffer[BUF_SIZ];
	size_t buffer_pos = 0;

	if (buffer_pos + size < BUF_SIZ)
	{
		memcpy(buffer_pos + buffer, data, size);
		buffer_pos += size;
	}
	else
	{
		write(fd, buffer, buffer_pos);
		memcpy(buffer, data, size);
		buffer_pos = size;
	}
}

/**
 * buffer_flush - A function used to flush a buffer
 * @fd: file descriptor
 *
 * Return: nothing
 */

void buffer_flush(int fd)
{
	char buffer[BUF_SIZ];
	size_t buffer_pos = 0;

	write(fd, buffer, buffer_pos);
	buffer_pos = 0;
}
