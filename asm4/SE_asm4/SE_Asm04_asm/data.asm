.586
.model flat, stdcall
includelib kernel32.lib

ExitProcess PROTO :DWORD
MessageBoxA PROTO :DWORD, :DWORD, :DWORD, :DWORD

.STACK 4096

.DATA
MB_OK db 0
HW db ?
str1 db 356 dup(32), 0
str2 db 'Окно', 0
char0 db '5', 0

char1 db 'B', 0

char2 db 'C', 0

.CODE
main PROC
mov esi, 0
mov al, char0
mov [str1 + esi], al
inc esi
mov al, char1
mov [str1 + esi], al
inc esi
mov al, char2
mov [str1 + esi], al
inc esi
mov byte ptr [str1 + esi], 0
Invoke MessageBoxA, 0, offset str1, offset str2, MB_OK
push 0
call ExitProcess
main ENDP
end main
