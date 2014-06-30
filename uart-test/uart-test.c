asm(
" \n"
".code 32\n"
".global _start\n"
"_start: \n"
" 	ldr sp,init_stack_addr\n"
"	ldr r0,main_addr\n"
"	blx r0\n"
"final_loop:\n"
"	b   final_loop\n"
"init_stack_addr: \n"
"	.word bsp_section_stack_end-16\n"
"main_addr: \n"
"	.word main\n"
" \n"
".code 16\n"
" \n"
);

int main(void){
	return 0;
}
