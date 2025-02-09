.586
.model flat,stdcall
includelib kernel32.lib
includelib user32.lib
ExitProcess PROTO :DWORD
MessageBoxA PROTO :DWORD, :DWORD, :DWORD, :DWORD
wsprintfA PROTO C :VARARG

.stack 4096

.data
    FMT DB "Результат: %d", 0
    BUF DB 256 DUP(0)
    num1 DD 5
    num2 DD 2
    MB_OK EQU 0
    STR_TITLE DB "Сложение 5 и 2", 0

.code
main PROC
START:
    mov EAX, num1
    mov EBX, num2
    add EAX, EBX

    push EAX
    push OFFSET FMT   
    push OFFSET BUF  
    call wsprintfA
    add ESP, 12

    push MB_OK
    push OFFSET STR_TITLE 
    push OFFSET BUF       
    push 0
    call MessageBoxA

    push 0
    call ExitProcess
main ENDP

END main