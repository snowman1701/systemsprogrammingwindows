#include <stdio.h>
#include <windows.h>

int main(int argc, const char *argv[])
{
    if (argc < 2)
    {
        printf("Usage: Show error number\n");
    }

    // sets the message to an integer value for the function
    int message = atoi(argv[1]);

    // type pointer
    // LPWSTR = long pointer to constant wide string
    LPWSTR text;

    DWORD characters = FormatMessage(
                                     FORMAT_MESSAGE_ALLOCATE_BUFFER |
                                     FORMAT_MESSAGE_FROM_SYSTEM |
                                     FORMAT_MESSAGE_IGNORE_INSERTS,
                                     NULL,
                                     message, // function requires int type for the message
                                     0,
                                     (LPWSTR)&text, // casts
                                     0,
                                     NULL);
    if (characters > 0)
    {
        // %ws is format specifier for wide string
        printf("Message %d: %ws\n", message, text);
        // free() function for windows
        LocalFree(text);
    }

    else
    {
        printf("No error exits\n");
    }

    return 0;
}
