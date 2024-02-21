.text 
MAIN: 
	li a2,2
	li a3,5
	jal POTENZA
	
POTENZA:
	
	addi sp,sp,-8
	sd ra,0(sp)
	bne a3,0,ELSE
	li a0,1
	j EXIT
	
	ELSE: 
		addi sp,sp,-8
		sd a2,(0)sp
		addi a3,a3,-1
		jal POTENZA
		ld a2,0(sp)
		addi sp,sp,8
		mul a0,a2,a0
		
	EXIT:
		ld ra,0(sp)
		addi sp,sp,8
		ret
		
		