; -------------------------------------------------------------
; paritygen.nasm — counts 1 bits in a byte and prints
; the correct parity bit for **odd parity**
;
; ODD PARITY RULE:
; even number of 1 bits → parity bit = 1
; odd  number of 1 bits → parity bit = 0
;
; assemble: nasm -f macho64 paritygen.nasm
; link:     gcc paritygen.o -o paritygen
; run:      ./paritygen
; -------------------------------------------------------------

global _main

section .data
    value       db  0b01101001      ; <--- change this byte to test
    outbuf      db  '0'             ; buffer for printing 1 char
    newline     db  10              ; '\n'

section .text


; -------------------------------------------------------------
; print_char
; al = character to print
; -------------------------------------------------------------
print_char:
    mov     [outbuf], al            ; write character into buffer
    mov     rax, 0x2000004          ; macOS write()
    mov     rdi, 1                  ; stdout
    mov     rsi, outbuf
    mov     rdx, 1
    syscall
    ret


; -------------------------------------------------------------
; _main
; -------------------------------------------------------------
_main:
    mov     al, [value]             ; load the byte into AL
    mov     bl, al                  ; copy for counting
    xor     rcx, rcx                ; rcx = count of 1 bits

count_loop:
    test    bl, 1                   ; check lowest bit
    jz      skip_inc
    inc     rcx                     ; inc count
skip_inc:
    shr     bl, 1                   ; shift next bit down
    jnz     count_loop              ; loop until BL = 0

    test    rcx, 1                  ; is count odd?
    jnz     odd_count               ; odd → parity bit = 0

; even → parity bit = 1
    mov     al, '1'
    jmp     print_and_exit

odd_count:
    mov     al, '0'

print_and_exit:
    call    print_char

; print newline (optional)
    mov     rax, 0x2000004
    mov     rdi, 1
    mov     rsi, newline
    mov     rdx, 1
    syscall

; exit(0)
    mov     rax, 0x2000001
    xor     rdi, rdi
    syscall