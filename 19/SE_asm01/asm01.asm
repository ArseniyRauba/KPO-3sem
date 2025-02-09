.model flat,stdcall
includelib kernel32.lib
includelib user32.lib
ExitProcess PROTO :DWORD
MessageBoxA PROTO :DWORD, :DWORD, :DWORD, :DWORD
wsprintfA PROTO C :VARARG

.stack 4096

.const 
Arr sdword 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15

.data
str1 DB "Мин - Макс", 0
formatStr DB "Min = %d; Max = %d", 0
buffer DB 64 DUP(0)

MB_OK EQU 0  
HW DWORD ?

min sdword ?
max sdword ?

.code
main PROC
    lea esi, Arr
    mov ecx, lengthof Arr
    mov eax, [esi]

findmin:
    cmp eax, [esi]
    jle skipmin
    mov eax, [esi]
skipmin:
    add esi, 4
    loop findmin
    mov min, eax

    lea esi, Arr
    mov ecx, lengthof Arr
    mov eax, [esi]

findmax:
    cmp eax, [esi]
    jge skipmax
    mov eax, [esi]
skipmax:
    add esi, 4
    loop findmax
    mov max, eax

    push max
    push min
    push offset formatStr
    push offset buffer
    call wsprintfA
    add esp, 16

    INVOKE MessageBoxA, HW, offset buffer, offset str1, MB_OK

    INVOKE ExitProcess, 0
main ENDP

END main
