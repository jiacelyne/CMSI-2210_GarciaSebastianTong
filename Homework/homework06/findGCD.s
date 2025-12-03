// findGCD.s - GCD calculator for Apple M4
// Compile: clang -arch arm64 -o findGCD findGCD.s

.global _main
.align 2

// Import C functions
.extern _printf
.extern _scanf

// Data section
.data
.align 3

prompt:     .asciz "Enter two numbers: "
input_fmt:  .asciz "%lld %lld"
output_fmt: .asciz "GCD = %lld\n"

// Variables
num1:       .quad 0
num2:       .quad 0

// Text section
.text

_main:
    // Save frame pointer and link register
    stp     x29, x30, [sp, #-16]!
    mov     x29, sp
    
    // Print prompt
    adrp    x0, prompt@PAGE
    add     x0, x0, prompt@PAGEOFF
    bl      _printf
    
    // Read two numbers using scanf
    adrp    x0, input_fmt@PAGE
    add     x0, x0, input_fmt@PAGEOFF
    
    adrp    x1, num1@PAGE
    add     x1, x1, num1@PAGEOFF
    
    adrp    x2, num2@PAGE
    add     x2, x2, num2@PAGEOFF
    
    bl      _scanf
    
    // Load the numbers
    adrp    x0, num1@PAGE
    add     x0, x0, num1@PAGEOFF
    ldr     x0, [x0]
    
    adrp    x1, num2@PAGE
    add     x1, x1, num2@PAGEOFF
    ldr     x1, [x1]
    
    // Compute GCD
    bl      gcd
    
    // Save result
    mov     x19, x0
    
    // Print result
    adrp    x0, output_fmt@PAGE
    add     x0, x0, output_fmt@PAGEOFF
    mov     x1, x19
    bl      _printf
    
    // Exit with code 0
    mov     x0, #0
    ldp     x29, x30, [sp], #16
    ret

// GCD function using Euclidean algorithm
// Input: x0 = a, x1 = b
// Output: x0 = gcd(a, b)
gcd:
    // Save a and b
    mov     x2, x0  // x2 = a
    mov     x3, x1  // x3 = b
    
gcd_loop:
    // If b == 0, return a
    cmp     x3, #0
    beq     gcd_done
    
    // Compute a % b
    udiv    x4, x2, x3      // quotient = a / b
    msub    x5, x4, x3, x2  // remainder = a - quotient * b
    
    // Update: a = b, b = remainder
    mov     x2, x3
    mov     x3, x5
    
    b       gcd_loop

gcd_done:
    // Return result in x0
    mov     x0, x2
    ret