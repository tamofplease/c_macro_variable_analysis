# 0 "/acl/lib_fiber/c/src/fiber/boost/jump_gas.S"
# 1 "/acl/build/fiber//"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "/acl/lib_fiber/c/src/fiber/boost/jump_gas.S"
# 20 "/acl/lib_fiber/c/src/fiber/boost/jump_gas.S"
# 1 "/acl/lib_fiber/c/src/fiber/boost/jump_arm64_aapcs_elf_gas.S" 1
# 54 "/acl/lib_fiber/c/src/fiber/boost/jump_arm64_aapcs_elf_gas.S"
.file "jump_arm64_aapcs_elf_gas.S"
.text
.align 2
.global jump_fcontext
.type jump_fcontext, %function
jump_fcontext:
    # prepare stack for GP + FPU
    sub sp, sp, #0xb0

    # save d8 - d15
    stp d8, d9, [sp, #0x00]
    stp d10, d11, [sp, #0x10]
    stp d12, d13, [sp, #0x20]
    stp d14, d15, [sp, #0x30]

    # save x19-x30
    stp x19, x20, [sp, #0x40]
    stp x21, x22, [sp, #0x50]
    stp x23, x24, [sp, #0x60]
    stp x25, x26, [sp, #0x70]
    stp x27, x28, [sp, #0x80]
    stp x29, x30, [sp, #0x90]

    # save LR as PC
    str x30, [sp, #0xa0]

    # store RSP (pointing to context-data) in X0
    mov x4, sp

    # restore RSP (pointing to context-data) from X1
    mov sp, x0

    # load d8 - d15
    ldp d8, d9, [sp, #0x00]
    ldp d10, d11, [sp, #0x10]
    ldp d12, d13, [sp, #0x20]
    ldp d14, d15, [sp, #0x30]

    # load x19-x30
    ldp x19, x20, [sp, #0x40]
    ldp x21, x22, [sp, #0x50]
    ldp x23, x24, [sp, #0x60]
    ldp x25, x26, [sp, #0x70]
    ldp x27, x28, [sp, #0x80]
    ldp x29, x30, [sp, #0x90]

    # return transfer_t from jump
    # pass transfer_t as first arg in context function
    # X0 == FCTX, X1 == DATA
    mov x0, x4

    # load pc
    ldr x4, [sp, #0xa0]

    # restore stack from GP + FPU
    add sp, sp, #0xb0

    ret x4
.size jump_fcontext,.-jump_fcontext
# Mark that we don't need executable stack.
.section .note.GNU-stack,"",%progbits
# 21 "/acl/lib_fiber/c/src/fiber/boost/jump_gas.S" 2
