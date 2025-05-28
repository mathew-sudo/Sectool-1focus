#include <stdio.h>
#include "os_init.h"
#include "auto_setup.h"

int main() {
    // Initialize the Windows 98 core OS
    if (os_init() != 0) {
        fprintf(stderr, "Failed to initialize Windows 98 core OS.\n");
        return 1;
    }

    // Trigger the automatic setup for Sectool+1
    if (auto_setup() != 0) {
        fprintf(stderr, "Automatic setup for Sectool+1 failed.\n");
        return 1;
    }

    printf("Sectool+1 setup completed successfully.\n");
    return 0;
}