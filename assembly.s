.section .text
.global assembly
assembly:
mov x1, #10
mov x2, #1 //i=1
mov x3, #0  //sum=0
loop:
	and x4, x2, #1
	cmp x4, #0
	beq sum_even
	bne continue
sum_even:
	add x3, x3, x2  //sum=sum+i
continue:	
	add x2, x2, #1  //i++
	cmp x2, x1  //i<=10
	ble loop
	RET
