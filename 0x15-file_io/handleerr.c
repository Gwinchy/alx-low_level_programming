#include "main.h"
void handleError(int code, const char *message)
{
        dprintf(STDERR_FILENO, "Error: %s\n", message);
        exit(code);
}
