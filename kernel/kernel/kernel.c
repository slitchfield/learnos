#include <stdio.h>

#include <kernel/tty.h>

void kernel_main(void) {
	terminal_initialize();
    for ( int i = 1; i <= 30; i++ ){
    
        printf("This is line %d with some stuff after\n", i);
    }
    printf("But this is the last word");
}
