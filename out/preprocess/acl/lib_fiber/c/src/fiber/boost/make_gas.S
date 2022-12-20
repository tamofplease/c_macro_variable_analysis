# 0 "/acl/lib_fiber/c/src/fiber/boost/make_gas.S"
# 1 "/acl/build/fiber//"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "/acl/lib_fiber/c/src/fiber/boost/make_gas.S"
# 20 "/acl/lib_fiber/c/src/fiber/boost/make_gas.S"
# 1 "/acl/lib_fiber/c/src/fiber/boost/make_arm64_aapcs_elf_gas.S" 1
# 54 "/acl/lib_fiber/c/src/fiber/boost/make_arm64_aapcs_elf_gas.S"
.file "make_arm64_aapcs_elf_gas.S"
.text
.align 2
.global make_fcontext
.type make_fcontext, %function
make_fcontext:
    # shift address in x0 (allocated stack) to lower 16 byte boundary
    and x0, x0, ~0xF

    # reserve space for context-data on context-stack
    sub x0, x0, #0xb0

    # third arg of make_fcontext() == address of context-function
    # store address as a PC to jump in
    str x2, [x0, #0xa0]

    # save address of finish as return-address for context-function
    # will be entered after context-function returns (LR register)
    adr x1, finish
    str x1, [x0, #0x98]

    ret x30

finish:
    # exit code is zero
    mov x0, #0
    # exit application
    bl _exit

.size make_fcontext,.-make_fcontext
# Mark that we don't need executable stack.
.section .note.GNU-stack,"",%progbits
# 21 "/acl/lib_fiber/c/src/fiber/boost/make_gas.S" 2
