#ifndef AUTO_SETUP_H
#define AUTO_SETUP_H

#include <stdbool.h>

int auto_setup();
bool configure_components();
bool install_dependencies();
bool install_sectool();
bool setup_security_algorithms();

#endif // AUTO_SETUP_H