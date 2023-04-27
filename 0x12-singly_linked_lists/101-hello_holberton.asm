;64-bit "Hello World"
;NOTE: By the way to make this clear, I DONT KNOW ASSEMBLY
;Literally grabbed this off reddit.
;Also if you dont use main as the entry point gcc will complain.
global main ; Program entry point

section .text
main:

mov rax,  1         ; sys_write
mov rdi, 1         ; stdout
mov rsi,  message ; msg address
mov rdx,  length ;msg string length

syscall

mov rax,  60        ;sys_exit
xor rdi, rdi          ; return 0
syscall

section .data
message: db 'Hello, Holberton!',0Ah,0Dh ; message & newline
length: equ $-message ;NOTE: This is how nasm reads the instruction kids
