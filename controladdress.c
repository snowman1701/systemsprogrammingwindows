#include <stdio.h>
#include <windows.h>

int main(void)
{
    SYSTEM_INFO my_test_computer;
    GetNativeSystemInfo(&my_test_computer);
    // lowest address
    int lowest_address = my_test_computer.lpMinimumApplicationAddress;
    int highest_address = my_test_computer.lpMaximumApplicationAddress;

    printf("Lowest Address for user programs = %p\n", my_test_computer.lpMinimumApplicationAddress);
    printf("Maximum address for user programs = %p\n", my_test_computer.lpMaximumApplicationAddress);

    int *address;
    address = (void *)0x03000000;

    // start
    char *character = "%c";
    char *signed_int = "%d";
    char * scientific = "%e";
    char * floater = "%f";
    char * G_value = "%g";
    char * my_signed_int = "%hi";
    char * unsigned_short_int = "%hu";
    char * unsigned_int = "%i";
    char * Long = "%l";
    char * Double = "%lf";
    char * long_double = "%Lf";
    char * unsigned_long = "%lu";
    char * long_long = "%lld";
    char * unsigned_long_long = "%llu";
    char * octal = "%o";
    char * pointer = "%p";
    char * string = "%s";
    char * my_unsigned_int = "%u";
    char * hex = "%x";
    char * nothing = "%n";
    char * endvalue = "hello";
    //finish
    //char *m[20];
    char *m[] = {character, my_signed_int, scientific, floater, G_value, signed_int, unsigned_short_int, unsigned_int, Long,
    Double, long_double, unsigned_long, long_long, unsigned_long_long, octal, pointer, string, my_unsigned_int, hex, nothing, endvalue};

    int thing=22;
    int i;
    for (i = 0; m[i] != endvalue; i++)
    {
        char *format_specifier;
        //format_specifier = m[i];
        // address is 0x03000000
        printf("The format specifier is %s ", m[i]);
        //printf(m[i], address);
        printf(m[i], thing);
        printf("\n");
    }
    return 0;
}
