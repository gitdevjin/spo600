### Task 3 - Print Loop: 1 ... Loop30 (suppressing leading zero)

``` sql
.text
.globl _start
left = 0
right = 0
index = 0                        /* starting value for the loop index; **note that this is a symbol (constant)**, not a variable */
max = 31                         /* loop exits when the index hits this number (loop condition is i<max) */
divide = 10

_start:
    mov     x19, index
    mov     x20, left
    mov     x21, right
    mov	    x22, divide
loop:

    /* ... body of the loop ... do something useful here ... */

    mov     x4, x20        /*left digit*/
    cmp     x4, left       /* zero */
    b.eq    zero
    add	    x4, x4, 48	   /* x4 has ascii for left digit */
    
    cmp     x20, left
    b.ne    nonzero 
    
zero:
    add     x4, x4, 32    

nonzero:
   
    mov     x5, x21	   /*right digit*/
    add     x5, x5, 48     /* x5 has ascii for left digit */
 
    adr     x7, msg        /* message location (memory address) */
    strb    w4, [x7, 6]
    strb    w5, [x7, 7]

/* Arguments Setting For Printing */

    mov     x0, 1           /* file descriptor: 1 is stdout */
    adr     x1, msg     /* message location (memory address) */
    mov     x2, len     /* message length (bytes) */

    mov     x8, 64      /* write is syscall #64 */
    svc     0           /* invoke syscall */

/* Iteration Logic */

    
    add     x21, x21, 1

    add     x19, x19, 1     /* increment the loop counter */
    udiv    x20, x19, x22
    msub    x21, x20, x22, x19

    cmp     x19, max        /* see if we've hit the max */
    b.ne    loop            /* if not, then continue the loop */

    mov     x0, 0           /* set exit status to 0 */
    mov     x8, 93          /* exit is syscall #93 */
    svc     0               /* invoke syscall */


.data
msg:    .ascii      "Loop:   \n"
len=    . - msg/* file descriptor: 1 is stdout */
    adr     x1, msg     /* message location (memory address) */
    mov     x2, len     /* message length (bytes) */

```