
	sub esp, 4
start:
	push ebp
	mov ebp, esp
	sub esp, 4


for4:
	mov edx, dword [ebp + 4]
	cmp edx, 100
	jg endfor4

	mov eax, 1
	mov ebx, dword [ebp + 4]
	int 0x80
	mov eax, 11
	mov ebx, 10
	int 0x80
	add dword [ebp + 4], 1
	jmp for4
endfor4: