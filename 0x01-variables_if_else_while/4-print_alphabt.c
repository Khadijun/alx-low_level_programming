#include <stdio.h>
/**
  * main-program that prints alphabets in lowercase
  * only use putchar function
  *All letters except e and q
  * Return: 0
  */

int main(void)
{
int lw = 'a';
while (lw <= 'z')
{
if (lw == 'e' || lw == 'q')
{
lw += 1;
}
else
{
putchar(lw);
lw += 1;
}
}
putchar('\n');
return (0);
}
