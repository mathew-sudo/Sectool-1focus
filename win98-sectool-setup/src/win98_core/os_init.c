#include "os_init.h"
#include <stdio.h>

// Forward declarations for missing functions
void setup_memory();
void initialize_hardware();
void load_drivers();
void initialize_file_system();
void prepare_application_environment();

// Improved: Add security system initialization
void initialize_firewall_system();

int os_init() {
    printf("[Win98 OS] Initializing core OS...\n");
    setup_memory();
    initialize_hardware();
    load_drivers();
    initialize_file_system();
    prepare_application_environment();
    initialize_firewall_system();
    printf("[Win98 OS] Initialization complete.\n");
    return 0;
}

// New: Initialize firewall system (placeholder)
void initialize_firewall_system() {
    printf("[Win98 OS] Firewall system initialized.\n");
}