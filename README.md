## 2024 전자공학과 C 멘토링

### Dev. Env.
1. WSL (Windows Subsystem for Linux)
    - Windows 기능 켜기/끄기
        - Linux용 Windows 하위 시스템
        - 가상 머신 플랫폼
    - https://aka.ms/wsl2kernel
        ```
        > wsl -set-default-version 2
        ```
    - Ubuntu 22.04.3 LTS
2. VS Code
    - Extension > WSL
    - Open folder > /home/user
    - New Terminal
3. Ubuntu update
    ```
    $ sudo apt update
    $ sudo apt upgrade
    ```
4. C
    - VS Code > Compiler install
        ```
        $ sudo sh -c 'apt update ; apt install -y build-essential'
        ```
    - first.c
    - compile and build
        ```
        $ cd mycode
        $ gcc first.c
        $ ./a.out
        ```
    - object file name
        ```
        $ gcc -o first first.c
        $ ./first
        ```
