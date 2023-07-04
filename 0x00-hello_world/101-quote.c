#include <unistd.h>
#include <strings.h>

/**
 *main-prints rsult to the stdout.
 *Return: 1
 */

int main(void)
{
const char* a = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

write(2, a, strlen(a));
return (1);
}
