
	sub esp, 8
start:
	push ebp
	mov ebp, esp
	sub esp, 12


	mov dword [ebp + 4], 10

	mov edx, 1
	cmp edx, dword [ebp + 4]
	jne false4


	mov eax, 1
	mov ebx, 0
	int 0x80
	mov eax, 11
	mov ebx, 10
	int 0x80
	jmp endif4

false4:

endif4:
	mov dword [ebp + 4], 5

	mov edx, 1
	cmp edx, dword [ebp + 4]
	jne false8

	jmp endif8

false8:

endif8:
	mov dword [ebp + 4], 73

	mov edx, 1
	cmp edx, dword [ebp + 4]
	jne false12


	mov eax, 1
	mov ebx, 0
	int 0x80
	mov eax, 11
	mov ebx, 10
	int 0x80
	jmp endif12

false12:

endif12: