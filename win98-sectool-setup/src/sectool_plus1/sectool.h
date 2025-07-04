#ifndef SECTOOL_H
#define SECTOOL_H

#include <stdbool.h>

// Function declarations for Sectool+1
void initialize_sectool();
void run_sectool_analysis();
void display_sectool_results();
void add_firewall_rule(int port, bool allow);

#endif // SECTOOL_H