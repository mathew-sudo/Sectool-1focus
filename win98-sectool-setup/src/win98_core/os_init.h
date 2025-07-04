#ifndef OS_INIT_H
#define OS_INIT_H

#include <stdbool.h>

int os_init();
void os_shutdown();

// New: Firewall system init
void initialize_firewall_system();

#endif // OS_INIT_H