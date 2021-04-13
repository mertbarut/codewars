	.file	"longest_palindrome_exp.c"
	.text
	.globl	ft_strlen
	.type	ft_strlen, @function
ft_strlen:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L2
.L3:
	addl	$1, -4(%rbp)
.L2:
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L3
	movl	-4(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	ft_strlen, .-ft_strlen
	.globl	longest_palindrome
	.type	longest_palindrome, @function
longest_palindrome:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$40, %rsp
	movq	%rdi, -40(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	ft_strlen
	movl	%eax, -8(%rbp)
	cmpl	$0, -8(%rbp)
	jne	.L6
	movl	$0, %eax
	jmp	.L7
.L6:
	movl	$1, -24(%rbp)
	movl	$0, -20(%rbp)
	movl	$0, -12(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	call	ft_strlen
	movl	%eax, -16(%rbp)
	jmp	.L8
.L18:
	movl	-20(%rbp), %eax
	movslq	%eax, %rdx
	movq	-40(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	cmpb	$32, %al
	jne	.L10
	addl	$1, -20(%rbp)
	jmp	.L10
.L12:
	subl	$1, -16(%rbp)
.L10:
	movl	-20(%rbp), %eax
	movslq	%eax, %rdx
	movq	-40(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %edx
	movl	-16(%rbp), %eax
	movslq	%eax, %rcx
	movq	-40(%rbp), %rax
	addq	%rcx, %rax
	movzbl	(%rax), %eax
	cmpb	%al, %dl
	je	.L11
	cmpl	$0, -16(%rbp)
	jg	.L12
.L11:
	movl	-20(%rbp), %eax
	movl	%eax, -4(%rbp)
	jmp	.L13
.L15:
	addl	$1, -20(%rbp)
	subl	$1, -16(%rbp)
	addl	$2, -12(%rbp)
	movl	-16(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jne	.L13
	addl	$1, -12(%rbp)
.L13:
	movl	-20(%rbp), %eax
	cltq
	leaq	1(%rax), %rdx
	movq	-40(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %edx
	movl	-16(%rbp), %eax
	cltq
	leaq	-1(%rax), %rcx
	movq	-40(%rbp), %rax
	addq	%rcx, %rax
	movzbl	(%rax), %eax
	cmpb	%al, %dl
	jne	.L14
	movl	-16(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jg	.L15
.L14:
	movl	-20(%rbp), %eax
	subl	-16(%rbp), %eax
	cmpl	$1, %eax
	je	.L16
	movl	-20(%rbp), %eax
	subl	-16(%rbp), %eax
	cmpl	$-1, %eax
	je	.L16
	movl	-20(%rbp), %eax
	cmpl	-16(%rbp), %eax
	jne	.L17
.L16:
	movl	-12(%rbp), %eax
	cmpl	-24(%rbp), %eax
	jle	.L17
	movl	-12(%rbp), %eax
	movl	%eax, -24(%rbp)
.L17:
	movl	$0, -12(%rbp)
	movl	-4(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -20(%rbp)
	movl	-8(%rbp), %eax
	movl	%eax, -16(%rbp)
.L8:
	movl	-20(%rbp), %eax
	movslq	%eax, %rdx
	movq	-40(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L18
	movl	-24(%rbp), %eax
.L7:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	longest_palindrome, .-longest_palindrome
	.section	.rodata
.LC0:
	.string	"a"
.LC1:
	.string	"%d = 1\n"
.LC2:
	.string	"aa"
.LC3:
	.string	"%d = 2\n"
.LC4:
	.string	"baa"
.LC5:
	.string	"aab"
.LC6:
	.string	"zyabyz"
.LC7:
	.string	"baabcd"
.LC8:
	.string	"%d = 4\n"
.LC9:
	.string	"zzbaabcd"
.LC10:
	.string	"baablkj12345432133d"
.LC11:
	.string	"%d = 9\n"
.LC12:
	.string	"aaaaabaaaaaaaaaaaaa"
.LC13:
	.string	"I like racecars that go fast"
.LC14:
	.string	"%d = 7\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	leaq	.LC0(%rip), %rdi
	call	longest_palindrome
	movl	%eax, %esi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	.LC2(%rip), %rdi
	call	longest_palindrome
	movl	%eax, %esi
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	.LC4(%rip), %rdi
	call	longest_palindrome
	movl	%eax, %esi
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	.LC5(%rip), %rdi
	call	longest_palindrome
	movl	%eax, %esi
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	.LC6(%rip), %rdi
	call	longest_palindrome
	movl	%eax, %esi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	.LC7(%rip), %rdi
	call	longest_palindrome
	movl	%eax, %esi
	leaq	.LC8(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	.LC9(%rip), %rdi
	call	longest_palindrome
	movl	%eax, %esi
	leaq	.LC8(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	.LC10(%rip), %rdi
	call	longest_palindrome
	movl	%eax, %esi
	leaq	.LC11(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	.LC12(%rip), %rdi
	call	longest_palindrome
	movl	%eax, %esi
	leaq	.LC11(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	.LC13(%rip), %rdi
	call	longest_palindrome
	movl	%eax, %esi
	leaq	.LC14(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
