### Task 1 - Print Loop: 1 ... Loop: 9

```sql
.text
.globl _start
min = 0                          /* starting value for the loop index; **note that this is a symbol (constant)**, not a variable */
max = 10                         /* loop exits when the index hits this number (loop condition is i<max) */
_start:
    mov     x19, min
loop:

    /* ... body of the loop ... do something useful here ... */

    mov     x3, x19        /*store value from x19 temporarily in x3*/
    add     x3, x3, 48     /* x3 has ascii for character */

    adr     x4, msg        /* message location (memory address) */
    strb    w3, [x4, 6]

    mov     x0, 1           /* file descriptor: 1 is stdout */

/* ascii for zero is 48 */

    adr     x1, msg     /* message location (memory address) */
    mov     x2, len     /* message length (bytes) */

    mov     x8, 64      /* write is syscall #64 */
    svc     0           /* invoke syscall */



    add     x19, x19, 1     /* increment the loop counter */
    cmp     x19, max        /* see if we've hit the max */
    b.ne    loop            /* if not, then continue the loop */

    mov     x0, 0           /* set exit status to 0 */
    mov     x8, 93          /* exit is syscall #93 */
    svc     0               /* invoke syscall */

.data
msg:    .ascii      "Loop: \n"
len=    . - msg
```