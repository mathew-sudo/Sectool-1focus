#!/bin/bash
# Setup proper file permissions for all scripts
# This script is designed to automate the setup of file permissions for various scripts in a Termux environment.

echo "Setting up file permissions..."

# Make all main scripts executable
chmod +x auto-run-setup
chmod +x network-setup
chmod +x win-display-setup
chmod +x Sectool+1

# Make this script executable
chmod +x setup-permissions.sh

# Set proper permissions for VNC startup scripts if they exist
if [ -d "$HOME/.vnc" ]; then
    chmod +x "$HOME/.vnc/xstartup" 2>/dev/null || true
fi

# Set permissions for PRoot scripts if they exist
if [ -d "$HOME/.termux/boot" ]; then
    chmod +x "$HOME/.termux/boot/"*.sh 2>/dev/null || true
fi

echo "File permissions set successfully."
echo "You can now run: ./auto-run-setup"
