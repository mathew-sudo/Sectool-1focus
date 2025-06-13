#include "sectool.h"
#include <stdio.h>
#include <stdbool.h>

// Example: Simple firewall rule structure
typedef struct {
    int port;
    bool allow;
} FirewallRule;

#define MAX_RULES 10
static FirewallRule firewall_rules[MAX_RULES];
static int rule_count = 0;

// Improved: Initialize Sectool+1 with firewall defaults
void initialize_sectool() {
    printf("[Sectool] Initializing Sectool+1...\n");
    // Default: block all, allow only port 22 (SSH) as example
    firewall_rules[0].port = 22;
    firewall_rules[0].allow = true;
    rule_count = 1;
    printf("[Sectool] Default firewall rule: allow port 22\n");
}

// Improved: Run security analysis, including firewall check and port scan detection
void run_sectool_analysis() {
    printf("[Sectool] Running security analysis...\n");
    // Example: Check for open ports (dummy logic)
    int open_ports[] = {22, 80, 443, 8080};
    int open_count = 4;
    for (int i = 0; i < open_count; ++i) {
        bool allowed = false;
        for (int j = 0; j < rule_count; ++j) {
            if (firewall_rules[j].port == open_ports[i] && firewall_rules[j].allow) {
                allowed = true;
                break;
            }
        }
        if (!allowed) {
            printf("[Firewall] ALERT: Port %d is open but not allowed by firewall rules!\n", open_ports[i]);
        }
    }
    // Example: Port scan detection algorithm (very basic)
    if (open_count > 3) {
        printf("[Algorithm] Possible port scan detected: %d open ports\n", open_count);
    }
}

// Improved: Display results and suggest actions
void display_sectool_results() {
    printf("[Sectool] Security analysis complete.\n");
    printf("[Sectool] Review firewall rules and open ports for best security.\n");
}

// New: Add firewall rule
void add_firewall_rule(int port, bool allow) {
    if (rule_count < MAX_RULES) {
        firewall_rules[rule_count].port = port;
        firewall_rules[rule_count].allow = allow;
        rule_count++;
        printf("[Firewall] Rule added: %s port %d\n", allow ? "allow" : "block", port);
    } else {
        printf("[Firewall] Rule limit reached!\n");
    }
}