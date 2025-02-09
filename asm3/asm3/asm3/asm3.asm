.586
.model flat,stdcall

includelib kernel32.lib
includelib user32.lib

ExitProcess PROTO :DWORD
MessageBoxA PROTO :DWORD, :DWORD, :DWORD, :DWORD

.stack 4096

.data
    str1 BYTE "true",0
    str2 BYTE "false",0
    str3 BYTE "Program",0

    myBytes BYTE 10h, 20h, 30h, 40h
    myWords WORD 8ah, 3Bh, 44h, 5Fh, 99h
    myDoubles DWORD 1, 2, 3, 4, 5, 6
    myPointer DWORD myDoubles

    mass DWORD 1, 0, 3, 4, 5, 6, 7

.code

main PROC

    mov ESI, OFFSET myWords
    mov ax, [ESI + 0]
    mov bx, [ESI + 2]

mov ESI, 0
mov EAX, 0
mov ECX, 7

sum_loop:
    add eax, mass[esi]    
    add esi,1

    loop sum_loop
    
mov ECX, 7
mov ESI, 0

check:
	cmp [mass + ESI], 0 
	je zero
	add ESI, 1

	loop check

	mov EBX, 0
	jmp no_zero


zero:
mov EBX, 0
	INVOKE MessageBoxA, 0, OFFSET str1, OFFSET str3, 1
	jmp endprogram

no_zero:
	INVOKE MessageBoxA, 0, OFFSET str2, OFFSET str3, 1
	jmp endprogram

endprogram:
    push 0
    call ExitProcess

main ENDP
END main