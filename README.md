# Sectool+1 Focus - Windows 98 Security Toolkit

A comprehensive security analysis and penetration testing toolkit with Windows 98 simulation and modern security tools.

## Features

- **Windows 98 Core Simulation**: Emulated Windows 98 environment with full GUI support
- **Security Analysis Tools**: Comprehensive penetration testing and security audit capabilities
- **Network Configuration**: IPv4/IPv6, WiFi, VNC server setup
- **Flask SQLAlchemy Integration**: Database management and web interface
- **Firewall Management**: Port scanning detection and rule management
- **Desktop Environment**: XFCE4/LXQt with VNC remote access

## Quick Start

### Prerequisites

- Termux (Android)
- Root access (optional but recommended)
- Network connectivity

### Installation

1. **Auto-Run Setup**:
   ```bash
   chmod +x auto-run-setup
   ./auto-run-setup
   ```

2. **Network Setup**:
   ```bash
   chmod +x network-setup
   ./network-setup
   ```

3. **Display Setup**:
   ```bash
   chmod +x win-display-setup
   ./win-display-setup
   ```

4. **Security Tools Installation**:
   ```bash
   chmod +x Sectool+1
   ./Sectool+1
   ```

### Build C Components

```bash
cd win98-sectool-setup
make
make run
```

## Project Structure

```
Sectool-1focus/
├── auto-run-setup              # Main setup script
├── network-setup               # Network configuration
├── win-display-setup          # Display and GUI setup
├── Sectool+1                  # Security tools installer
├── win98-sectool-setup/       # C implementation
│   ├── src/
│   │   ├── main.c
│   │   ├── win98_core/        # OS simulation
│   │   ├── setup/             # Auto setup
│   │   └── sectool_plus1/     # Security tools
│   └── Makefile
└── README.md
```

## Security Tools Included

- **Network Security**: Nmap, Wireshark, Aircrack-ng, Bettercap
- **Password Tools**: John the Ripper, Hashcat, Hydra, Medusa
- **Web Security**: Nikto, Commix, BeEF XSS Framework
- **Mobile Security**: Frida, Objection, MobSF
- **Forensics**: Foremost, Scalpel, ExifTool, Binwalk
- **And many more...**

## Usage

### VNC Server
```bash
vncserver :1 -geometry 1280x720
```

### Flask Web Interface
```bash
python flask_sqlalchemy_config.py
```

### Security Analysis
The C application automatically runs security analysis on startup.

## Configuration

Environment variables for security:
- `SECTOOL1_DB_URI`: Database connection string
- `ADMIN_USER`, `ADMIN_PASS`: Admin credentials
- `ROOT_PASS`: Root user password
- `SECTOOL_PASS`: Sectool user password

## Contributing

1. Fork the repository
2. Create a feature branch
3. Make your changes
4. Test thoroughly
5. Submit a pull request

## License

This project is for educational and authorized testing purposes only.

## Warning

⚠️ **Important**: This toolkit contains powerful security tools. Only use on systems you own or have explicit permission to test. Unauthorized access to computer systems is illegal.
