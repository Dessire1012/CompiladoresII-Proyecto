
	sub esp, 4
start:
	push ebp
	mov ebp, esp
	sub esp, 8


	mov dword [ebp + 4], 1
while4
	mov edx, 1
	cmp edx, dword [ebp + 4]
	je while4

	mov eax, 1
	mov ebx, dword [ebp + 4]
	int 0x80
	mov eax, 11
	mov ebx, 10
	int 0x80

	mov edx, dword [ebp + 4]
	add edx, 1
	mov dword [ebp - 8], edx

	mov eax, dword [ebp - 8]
	mov dword [ebp + 4], eax
	jne endwhile4
endwhile4: