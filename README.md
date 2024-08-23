# Debug C++ with GDB/LLDB in VSCode

This project demonstrates how to debug a C++ project in VSCode.

It includes configurations for both `gdb` and `lldb` debuggers, allowing you to choose either one.

When you open this directory in VSCode, pressing `F5` should enter Debug mode, but it's recommended to set a breakpoint in the `main` function.

## Prerequisite for GDB

You need to install the `C/C++` extension for VSCode.

Additionally, you need to have `clang++` & `gdb` installed on your system. Here are the installation instructions for several system:

### Debian/Ubuntu:
```shell
sudo apt install clang gdb
```

### Fedora:
```shell
sudo dnf install clang gdb
```

### Arch Linux:
```shell
sudo pacman -S clang gdb
```

### openSUSE:
```shell
sudo zypper install clang gdb
```

### macOS

```shell
brew install clang gdb
```

## Prerequisites for LLDB

You need to install the `C/C++` & `LLDB DAP` extensions for VSCode.

Additionally, you need to have `clang++` & `lldb-dap` installed on your system. Here are the installation instructions for several system:

### Debian/Ubuntu:
```shell
sudo apt install clang lldb
```

### Fedora:
```shell
sudo dnf install clang lldb
```

### Arch Linux:
```shell
sudo pacman -S clang lldb
```

### openSUSE:
```shell
sudo zypper install clang lldb
```

### macOS

```shell
brew install clang lldb
```
