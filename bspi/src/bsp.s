//# Das ist der ARM-Assembly code der bsp.c Datei
//# 


	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 12, 0	sdk_version 12, 3
	.globl	_globalfunction                 ; -- Begin function globalfunction
	.p2align	2
_globalfunction:                        ; @globalfunction
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #64
	stp	x29, x30, [sp, #48]             ; 16-byte Folded Spill
	add	x29, sp, #48
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	stur	w0, [x29, #-8]
	stur	w1, [x29, #-12]
	ldur	w8, [x29, #-8]		; Initialisierung von i
	mov	x11, x8					; ^
	ldur	w8, [x29, #-12]		; Initialisierung von j
	mov	x10, x8					; ^
	ldur	w9, [x29, #-16]		; Initialisierung von k
	mov	x8, x9					; ^
	adrp	x0, l_.str@PAGE
	add	x0, x0, l_.str@PAGEOFF
	mov	x9, sp
	str	x11, [x9]
	str	x10, [x9, #8]
	str	x8, [x9, #16]
	bl	_printf
	ldur	w8, [x29, #-8]
	ldur	w9, [x29, #-12]
	subs	w8, w8, w9
	stur	w8, [x29, #-16]
	ldur	w0, [x29, #-4]
	ldp	x29, x30, [sp, #48]             ; 16-byte Folded Reload
	add	sp, sp, #64
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_globalfunction2                ; -- Begin function globalfunction2
	.p2align	2
_globalfunction2:                       ; @globalfunction2
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	ldr	w9, [sp, #8]
                                        ; implicit-def: $x8
	mov	x8, x9
	adrp	x0, l_.str.1@PAGE
	add	x0, x0, l_.str.1@PAGEOFF
	mov	x9, sp
	str	x8, [x9]
	bl	_printf
	ldur	w0, [x29, #-4]
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #96
	stp	x29, x30, [sp, #80]             ; 16-byte Folded Spill
	add	x29, sp, #80
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	mov	w8, #0
	stur	w8, [x29, #-24]                 ; 4-byte Folded Spill
	stur	wzr, [x29, #-4]
	mov	w8, #45575
	movk	w8, #1, lsl #16
	stur	w8, [x29, #-8]
	mov	w8, #39922
	movk	w8, #65532, lsl #16
	stur	w8, [x29, #-12]
	mov	w8, #41301
	movk	w8, #50862, lsl #16
	stur	w8, [x29, #-16]
	adrp	x8, l___const.main.myString@PAGE
	add	x8, x8, l___const.main.myString@PAGEOFF
	ldrh	w9, [x8]
	sub	x8, x29, #18
	sturh	w9, [x29, #-18]
	adrp	x0, l_.str.2@PAGE
	add	x0, x0, l_.str.2@PAGEOFF
	mov	x9, sp
	str	x8, [x9]
	bl	_printf
	ldur	w8, [x29, #-8]
                                        ; implicit-def: $x12
	mov	x12, x8
	ldur	w8, [x29, #-8]
                                        ; implicit-def: $x11
	mov	x11, x8
	ldur	w8, [x29, #-8]
                                        ; implicit-def: $x10
	mov	x10, x8
	ldur	w9, [x29, #-8]
                                        ; implicit-def: $x8
	mov	x8, x9
	adrp	x0, l_.str.3@PAGE
	add	x0, x0, l_.str.3@PAGEOFF
	str	x0, [sp, #40]                   ; 8-byte Folded Spill
	mov	x9, sp
	str	x12, [x9]
	str	x11, [x9, #8]
	str	x10, [x9, #16]
	str	x8, [x9, #24]
	bl	_printf
	ldr	x0, [sp, #40]                   ; 8-byte Folded Reload
	ldur	w8, [x29, #-12]
                                        ; implicit-def: $x12
	mov	x12, x8
	ldur	w8, [x29, #-12]
                                        ; implicit-def: $x11
	mov	x11, x8
	ldur	w8, [x29, #-12]
                                        ; implicit-def: $x10
	mov	x10, x8
	ldur	w9, [x29, #-12]
                                        ; implicit-def: $x8
	mov	x8, x9
	mov	x9, sp
	str	x12, [x9]
	str	x11, [x9, #8]
	str	x10, [x9, #16]
	str	x8, [x9, #24]
	bl	_printf
	ldur	w8, [x29, #-16]
                                        ; implicit-def: $x10
	mov	x10, x8
	ldur	w9, [x29, #-16]
                                        ; implicit-def: $x8
	mov	x8, x9
	adrp	x0, l_.str.4@PAGE
	add	x0, x0, l_.str.4@PAGEOFF
	mov	x9, sp
	str	x10, [x9]
	str	x8, [x9, #8]
	bl	_printf
	bl	_globalfunction2
	mov	w0, #1
	stur	w0, [x29, #-28]                 ; 4-byte Folded Spill
	mov	w1, #2
	stur	w1, [x29, #-32]                 ; 4-byte Folded Spill
	bl	_globalfunction
	ldur	w1, [x29, #-32]                 ; 4-byte Folded Reload
	ldur	w0, [x29, #-28]                 ; 4-byte Folded Reload
	bl	_globalfunction
	bl	_globalfunction2
	ldur	w0, [x29, #-24]                 ; 4-byte Folded Reload
	ldp	x29, x30, [sp, #80]             ; 16-byte Folded Reload
	add	sp, sp, #96
	ret
	.cfi_endproc
                                        ; -- End function
	.section	__TEXT,__cstring,cstring_literals
l_.str:                                 ; @.str
	.asciz	"x=%d y=%d z=%d\n"

l_.str.1:                               ; @.str.1
	.asciz	"sth=%u\n"

l___const.main.myString:                ; @__const.main.myString
	.asciz	"C"

l_.str.2:                               ; @.str.2
	.asciz	"Hallo %s!\n"

l_.str.3:                               ; @.str.3
	.asciz	"Die ganze Zahl %d mit Vorzeichen %+d und als hex %x und %X.\n"

l_.str.4:                               ; @.str.4
	.asciz	"Die Variable k: %d und nochmal k: %u.\n"

.subsections_via_symbols
