
### Linux to Windows CMD Command Equivalents

| **Linux Command**        | **Windows CMD Command**            | **Description**                              |
|--------------------------|------------------------------------|----------------------------------------------|
| `ls`                     | `dir`                              | List files and directories.                  |
| `cd`                     | `cd`                               | Change directory.                            |
| `pwd`                    | `cd`                               | Show current directory.                      |
| `mkdir`                  | `mkdir`                            | Create a new directory.                      |
| `rm`                     | `del`                              | Delete a file.                               |
| `rm -r`                  | `rmdir /s`                         | Delete a directory and its contents.         |
| `cp`                     | `copy`                             | Copy files.                                  |
| `mv`                     | `move`                             | Move or rename files.                        |
| `cat`                    | `type`                             | Display the contents of a file.              |
| `echo`                   | `echo`                             | Display a message or write to a file.        |
| `clear`                  | `cls`                              | Clear the terminal screen.                   |
| `man`                    | `<command> /?`                     | Show command help/documentation.             |
| `find`                   | `find`                             | Search for text in a file.                   |
| `grep`                   | `findstr`                          | Search for text in multiple files.           |
| `touch`                  | `type nul > filename`              | Create an empty file.                        |
| `chmod`                  | `attrib`                           | Change file permissions (limited in Windows).|
| `df`                     | `wmic logicaldisk get size,freespace,caption` | Display disk space usage.         |
| `du`                     | N/A (Use third-party tools)         | Show directory space usage.                 |
| `ps`                     | `tasklist`                         | List running processes.                      |
| `kill`                   | `taskkill`                         | Terminate a process by name or PID.          |
| `whoami`                 | `whoami`                           | Show the current user.                       |
| `hostname`               | `hostname`                         | Display the system hostname.                 |
| `ifconfig` / `ip addr`   | `ipconfig`                         | Show network configuration.                  |
| `ping`                   | `ping`                             | Test network connectivity.                   |
| `curl` / `wget`          | `curl` (requires installation)     | Download files or make HTTP requests.        |
| `tar`                    | N/A (Use `tar.exe` in PowerShell)  | Archive/extract files.                       |
| `zip` / `unzip`          | N/A (Use third-party tools)        | Compress or extract ZIP files.               |
| `top` / `htop`           | `taskmgr`                          | Monitor system processes.                    |
| `exit`                   | `exit`                             | Exit the command-line interface.             |

---

### Linux to PowerShell Command Equivalents

| **Linux Command**      | **PowerShell Command**               | **Description**                                |
|-------------------------|-------------------------------------|------------------------------------------------|
| `ls`                   | `ls`                                | List files and directories.                     |
| `cd`                   | `cd`                                | Change directory.                               |
| `pwd`                  | `pwd`                               | Print the current directory.                    |
| `cat`                  | `cat` or `Get-Content`              | Display the contents of a file.                 |
| `mkdir`                | `mkdir`                             | Create a new directory.                         |
| `rm`                   | `rm` or `Remove-Item`               | Delete files or directories.                    |
| `cp`                   | `cp` or `Copy-Item`                 | Copy files or directories.                      |
| `mv`                   | `mv` or `Move-Item`                 | Move or rename files or directories.            |
| `echo`                 | `echo`                              | Print text to the console.                      |
| `clear`                | `Clear-Host` (or `cls`)             | Clear the terminal screen.                      |
| `man`                  | `Get-Help`                          | Display help for a command.                     |
| `grep`                 | `Select-String`                     | Search for text in files.                       |
| `find`                 | `Get-ChildItem -Recurse`            | Search for files.                               |
| `touch`                | `New-Item -ItemType File`           | Create an empty file.                           |
| `hostname`             | `hostname`                          | Display the system hostname.                    |
| `ifconfig` / `ip addr` | `Get-NetIPAddress`                  | Display network configuration.                  |
| `whoami`               | `whoami`                            | Display the current user.                       |
| `ps`                   | `Get-Process`                       | List running processes.                         |
| `kill`                 | `Stop-Process`                      | Terminate a process.                            |
| `top` / `htop`         | `Get-Process` (or Task Manager)     | Display system processes and resource usage.    |
