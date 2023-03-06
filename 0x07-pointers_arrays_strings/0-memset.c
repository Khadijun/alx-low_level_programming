#include "main.h"
/**
  *_memset-function fills the first n bytes of the memory area
  *pointed to by s with the constant byte b
  *@s: Apointer to the memry area t be filled.
  *@c:character to fill the memory
  *@n:Number of bytes to be filled
  *Return:Returns a pointer to the memory area s
  */

void *_memset(void *s, int c, size_t n)
{
	unsigned int i;
	unsigned char *memory = s, value = c;

	for (i = 0; i < n; i++)
		memory[i] = value;

	return (memory);
}
