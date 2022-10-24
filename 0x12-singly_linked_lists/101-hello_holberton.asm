section .text
global _start

section .data
msg db  'Hello, Holberton',0xa

start:

    mov ecx,msg ;message to write
    mov ebx,1   ;file descriptor (stdout)
    mov eax,4   ;system call number (sys_write)
    int 0x80    ;call kernel

    mov ebx,0   ;process' exit code
    mov eax,1   ;system call number (sys_exit)
    int 0x8
