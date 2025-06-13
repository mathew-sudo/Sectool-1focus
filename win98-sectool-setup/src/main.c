#include <stdio.h>
#include "os_init.h"
#include "auto_setup.h"

int main() {
    printf("=== Win98-Sectool+1 Setup ===\n");

    // Initialize the Windows 98 core OS
    int os_status = os_init();
    if (os_status != 0) {
        fprintf(stderr, "[Error] Failed to initialize Windows 98 core OS (code %d).\n", os_status);
        return os_status;
    }
    printf("[Main] Windows 98 core OS initialized successfully.\n");

    // Trigger the automatic setup for Sectool+1
    int setup_status = auto_setup();
    if (setup_status != 0) {
        fprintf(stderr, "[Error] Automatic setup for Sectool+1 failed (code %d).\n", setup_status);
        return setup_status;
    }
    printf("[Main] Sectool+1 setup completed successfully.\n");

    printf("=== System ready. Launching environment... ===\n");
    // Optionally, launch main environment or shell here

    return 0;
}