#include <stdio.h>
#include <windows.h>

int main(void)
{
    // SYSTEM__INFO is a struct defined in the windows.h library
    SYSTEM_INFO my_system;

    // function call to get the info for the system
    GetNativeSystemInfo(&my_system);

    printf("Number of processors: %i\n", my_system.dwNumberOfProcessors);
    printf("Page size: %i total bytes\n", my_system.dwPageSize);
    printf("Processor Mask: %p\n", my_system.dwActiveProcessorMask);
    printf("Lowest process address: %p\n", my_system.lpMinimumApplicationAddress);
    printf("Maximum process address: %p\n", my_system.lpMaximumApplicationAddress);

    return 0;
}
