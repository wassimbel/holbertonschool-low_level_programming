section .data
msg db "Hello, Holberton", 10
l equ $-msg

section .text

global main
main:

_start:
mov rax,1
mov rdi,1
mov rsi,msg
mov rdx,l
syscall

mov rax,60
mov rdi,0
syscall
end:
