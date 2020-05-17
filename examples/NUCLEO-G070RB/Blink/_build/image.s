
_build/image.elf:     file format elf32-littlearm


Disassembly of section .vectors:

08000000 <vectors>:
 8000000:	20009000 	andcs	r9, r0, r0
 8000004:	08000229 	stmdaeq	r0, {r0, r3, r5, r9}
 8000008:	08000225 	stmdaeq	r0, {r0, r2, r5, r9}
 800000c:	08000225 	stmdaeq	r0, {r0, r2, r5, r9}
 8000010:	08000225 	stmdaeq	r0, {r0, r2, r5, r9}
 8000014:	08000225 	stmdaeq	r0, {r0, r2, r5, r9}
 8000018:	08000225 	stmdaeq	r0, {r0, r2, r5, r9}
	...
 800002c:	08000225 	stmdaeq	r0, {r0, r2, r5, r9}
 8000030:	08000225 	stmdaeq	r0, {r0, r2, r5, r9}
 8000034:	00000000 	andeq	r0, r0, r0
 8000038:	08000225 	stmdaeq	r0, {r0, r2, r5, r9}
 800003c:	08000331 	stmdaeq	r0, {r0, r4, r5, r8, r9}
 8000040:	08000225 	stmdaeq	r0, {r0, r2, r5, r9}
 8000044:	08000225 	stmdaeq	r0, {r0, r2, r5, r9}
 8000048:	08000225 	stmdaeq	r0, {r0, r2, r5, r9}
 800004c:	08000225 	stmdaeq	r0, {r0, r2, r5, r9}
 8000050:	08000225 	stmdaeq	r0, {r0, r2, r5, r9}
 8000054:	08000225 	stmdaeq	r0, {r0, r2, r5, r9}
 8000058:	08000225 	stmdaeq	r0, {r0, r2, r5, r9}
 800005c:	08000225 	stmdaeq	r0, {r0, r2, r5, r9}
 8000060:	08000225 	stmdaeq	r0, {r0, r2, r5, r9}
 8000064:	08000225 	stmdaeq	r0, {r0, r2, r5, r9}
 8000068:	08000225 	stmdaeq	r0, {r0, r2, r5, r9}
 800006c:	08000225 	stmdaeq	r0, {r0, r2, r5, r9}
 8000070:	08000225 	stmdaeq	r0, {r0, r2, r5, r9}
 8000074:	08000225 	stmdaeq	r0, {r0, r2, r5, r9}
 8000078:	08000225 	stmdaeq	r0, {r0, r2, r5, r9}
 800007c:	08000225 	stmdaeq	r0, {r0, r2, r5, r9}
 8000080:	08000225 	stmdaeq	r0, {r0, r2, r5, r9}
 8000084:	08000225 	stmdaeq	r0, {r0, r2, r5, r9}
 8000088:	08000225 	stmdaeq	r0, {r0, r2, r5, r9}
 800008c:	08000225 	stmdaeq	r0, {r0, r2, r5, r9}
 8000090:	08000225 	stmdaeq	r0, {r0, r2, r5, r9}
 8000094:	08000225 	stmdaeq	r0, {r0, r2, r5, r9}
 8000098:	08000225 	stmdaeq	r0, {r0, r2, r5, r9}
 800009c:	08000225 	stmdaeq	r0, {r0, r2, r5, r9}
 80000a0:	08000225 	stmdaeq	r0, {r0, r2, r5, r9}
 80000a4:	08000225 	stmdaeq	r0, {r0, r2, r5, r9}
 80000a8:	08000225 	stmdaeq	r0, {r0, r2, r5, r9}
 80000ac:	08000225 	stmdaeq	r0, {r0, r2, r5, r9}
 80000b0:	08000225 	stmdaeq	r0, {r0, r2, r5, r9}
 80000b4:	08000225 	stmdaeq	r0, {r0, r2, r5, r9}
 80000b8:	08000225 	stmdaeq	r0, {r0, r2, r5, r9}
 80000bc:	08000225 	stmdaeq	r0, {r0, r2, r5, r9}

Disassembly of section .text:

080000c0 <__udivsi3>:
 80000c0:	2200      	movs	r2, #0
 80000c2:	0843      	lsrs	r3, r0, #1
 80000c4:	428b      	cmp	r3, r1
 80000c6:	d374      	bcc.n	80001b2 <__udivsi3+0xf2>
 80000c8:	0903      	lsrs	r3, r0, #4
 80000ca:	428b      	cmp	r3, r1
 80000cc:	d35f      	bcc.n	800018e <__udivsi3+0xce>
 80000ce:	0a03      	lsrs	r3, r0, #8
 80000d0:	428b      	cmp	r3, r1
 80000d2:	d344      	bcc.n	800015e <__udivsi3+0x9e>
 80000d4:	0b03      	lsrs	r3, r0, #12
 80000d6:	428b      	cmp	r3, r1
 80000d8:	d328      	bcc.n	800012c <__udivsi3+0x6c>
 80000da:	0c03      	lsrs	r3, r0, #16
 80000dc:	428b      	cmp	r3, r1
 80000de:	d30d      	bcc.n	80000fc <__udivsi3+0x3c>
 80000e0:	22ff      	movs	r2, #255	; 0xff
 80000e2:	0209      	lsls	r1, r1, #8
 80000e4:	ba12      	rev	r2, r2
 80000e6:	0c03      	lsrs	r3, r0, #16
 80000e8:	428b      	cmp	r3, r1
 80000ea:	d302      	bcc.n	80000f2 <__udivsi3+0x32>
 80000ec:	1212      	asrs	r2, r2, #8
 80000ee:	0209      	lsls	r1, r1, #8
 80000f0:	d065      	beq.n	80001be <__udivsi3+0xfe>
 80000f2:	0b03      	lsrs	r3, r0, #12
 80000f4:	428b      	cmp	r3, r1
 80000f6:	d319      	bcc.n	800012c <__udivsi3+0x6c>
 80000f8:	e000      	b.n	80000fc <__udivsi3+0x3c>
 80000fa:	0a09      	lsrs	r1, r1, #8
 80000fc:	0bc3      	lsrs	r3, r0, #15
 80000fe:	428b      	cmp	r3, r1
 8000100:	d301      	bcc.n	8000106 <__udivsi3+0x46>
 8000102:	03cb      	lsls	r3, r1, #15
 8000104:	1ac0      	subs	r0, r0, r3
 8000106:	4152      	adcs	r2, r2
 8000108:	0b83      	lsrs	r3, r0, #14
 800010a:	428b      	cmp	r3, r1
 800010c:	d301      	bcc.n	8000112 <__udivsi3+0x52>
 800010e:	038b      	lsls	r3, r1, #14
 8000110:	1ac0      	subs	r0, r0, r3
 8000112:	4152      	adcs	r2, r2
 8000114:	0b43      	lsrs	r3, r0, #13
 8000116:	428b      	cmp	r3, r1
 8000118:	d301      	bcc.n	800011e <__udivsi3+0x5e>
 800011a:	034b      	lsls	r3, r1, #13
 800011c:	1ac0      	subs	r0, r0, r3
 800011e:	4152      	adcs	r2, r2
 8000120:	0b03      	lsrs	r3, r0, #12
 8000122:	428b      	cmp	r3, r1
 8000124:	d301      	bcc.n	800012a <__udivsi3+0x6a>
 8000126:	030b      	lsls	r3, r1, #12
 8000128:	1ac0      	subs	r0, r0, r3
 800012a:	4152      	adcs	r2, r2
 800012c:	0ac3      	lsrs	r3, r0, #11
 800012e:	428b      	cmp	r3, r1
 8000130:	d301      	bcc.n	8000136 <__udivsi3+0x76>
 8000132:	02cb      	lsls	r3, r1, #11
 8000134:	1ac0      	subs	r0, r0, r3
 8000136:	4152      	adcs	r2, r2
 8000138:	0a83      	lsrs	r3, r0, #10
 800013a:	428b      	cmp	r3, r1
 800013c:	d301      	bcc.n	8000142 <__udivsi3+0x82>
 800013e:	028b      	lsls	r3, r1, #10
 8000140:	1ac0      	subs	r0, r0, r3
 8000142:	4152      	adcs	r2, r2
 8000144:	0a43      	lsrs	r3, r0, #9
 8000146:	428b      	cmp	r3, r1
 8000148:	d301      	bcc.n	800014e <__udivsi3+0x8e>
 800014a:	024b      	lsls	r3, r1, #9
 800014c:	1ac0      	subs	r0, r0, r3
 800014e:	4152      	adcs	r2, r2
 8000150:	0a03      	lsrs	r3, r0, #8
 8000152:	428b      	cmp	r3, r1
 8000154:	d301      	bcc.n	800015a <__udivsi3+0x9a>
 8000156:	020b      	lsls	r3, r1, #8
 8000158:	1ac0      	subs	r0, r0, r3
 800015a:	4152      	adcs	r2, r2
 800015c:	d2cd      	bcs.n	80000fa <__udivsi3+0x3a>
 800015e:	09c3      	lsrs	r3, r0, #7
 8000160:	428b      	cmp	r3, r1
 8000162:	d301      	bcc.n	8000168 <__udivsi3+0xa8>
 8000164:	01cb      	lsls	r3, r1, #7
 8000166:	1ac0      	subs	r0, r0, r3
 8000168:	4152      	adcs	r2, r2
 800016a:	0983      	lsrs	r3, r0, #6
 800016c:	428b      	cmp	r3, r1
 800016e:	d301      	bcc.n	8000174 <__udivsi3+0xb4>
 8000170:	018b      	lsls	r3, r1, #6
 8000172:	1ac0      	subs	r0, r0, r3
 8000174:	4152      	adcs	r2, r2
 8000176:	0943      	lsrs	r3, r0, #5
 8000178:	428b      	cmp	r3, r1
 800017a:	d301      	bcc.n	8000180 <__udivsi3+0xc0>
 800017c:	014b      	lsls	r3, r1, #5
 800017e:	1ac0      	subs	r0, r0, r3
 8000180:	4152      	adcs	r2, r2
 8000182:	0903      	lsrs	r3, r0, #4
 8000184:	428b      	cmp	r3, r1
 8000186:	d301      	bcc.n	800018c <__udivsi3+0xcc>
 8000188:	010b      	lsls	r3, r1, #4
 800018a:	1ac0      	subs	r0, r0, r3
 800018c:	4152      	adcs	r2, r2
 800018e:	08c3      	lsrs	r3, r0, #3
 8000190:	428b      	cmp	r3, r1
 8000192:	d301      	bcc.n	8000198 <__udivsi3+0xd8>
 8000194:	00cb      	lsls	r3, r1, #3
 8000196:	1ac0      	subs	r0, r0, r3
 8000198:	4152      	adcs	r2, r2
 800019a:	0883      	lsrs	r3, r0, #2
 800019c:	428b      	cmp	r3, r1
 800019e:	d301      	bcc.n	80001a4 <__udivsi3+0xe4>
 80001a0:	008b      	lsls	r3, r1, #2
 80001a2:	1ac0      	subs	r0, r0, r3
 80001a4:	4152      	adcs	r2, r2
 80001a6:	0843      	lsrs	r3, r0, #1
 80001a8:	428b      	cmp	r3, r1
 80001aa:	d301      	bcc.n	80001b0 <__udivsi3+0xf0>
 80001ac:	004b      	lsls	r3, r1, #1
 80001ae:	1ac0      	subs	r0, r0, r3
 80001b0:	4152      	adcs	r2, r2
 80001b2:	1a41      	subs	r1, r0, r1
 80001b4:	d200      	bcs.n	80001b8 <__udivsi3+0xf8>
 80001b6:	4601      	mov	r1, r0
 80001b8:	4152      	adcs	r2, r2
 80001ba:	4610      	mov	r0, r2
 80001bc:	4770      	bx	lr
 80001be:	e7ff      	b.n	80001c0 <__udivsi3+0x100>
 80001c0:	b501      	push	{r0, lr}
 80001c2:	2000      	movs	r0, #0
 80001c4:	f000 f806 	bl	80001d4 <__aeabi_idiv0>
 80001c8:	bd02      	pop	{r1, pc}
 80001ca:	46c0      	nop			; (mov r8, r8)

080001cc <__aeabi_uidivmod>:
 80001cc:	2900      	cmp	r1, #0
 80001ce:	d0f7      	beq.n	80001c0 <__udivsi3+0x100>
 80001d0:	e776      	b.n	80000c0 <__udivsi3>
 80001d2:	4770      	bx	lr

080001d4 <__aeabi_idiv0>:
 80001d4:	4770      	bx	lr
 80001d6:	46c0      	nop			; (mov r8, r8)

080001d8 <main>:
 80001d8:	4a0f      	ldr	r2, [pc, #60]	; (8000218 <main+0x40>)
 80001da:	b570      	push	{r4, r5, r6, lr}
 80001dc:	6811      	ldr	r1, [r2, #0]
 80001de:	2201      	movs	r2, #1
 80001e0:	6b48      	ldr	r0, [r1, #52]	; 0x34
 80001e2:	4c0e      	ldr	r4, [pc, #56]	; (800021c <main+0x44>)
 80001e4:	4302      	orrs	r2, r0
 80001e6:	6823      	ldr	r3, [r4, #0]
 80001e8:	634a      	str	r2, [r1, #52]	; 0x34
 80001ea:	681a      	ldr	r2, [r3, #0]
 80001ec:	490c      	ldr	r1, [pc, #48]	; (8000220 <main+0x48>)
 80001ee:	2680      	movs	r6, #128	; 0x80
 80001f0:	400a      	ands	r2, r1
 80001f2:	601a      	str	r2, [r3, #0]
 80001f4:	2280      	movs	r2, #128	; 0x80
 80001f6:	2520      	movs	r5, #32
 80001f8:	6819      	ldr	r1, [r3, #0]
 80001fa:	00d2      	lsls	r2, r2, #3
 80001fc:	430a      	orrs	r2, r1
 80001fe:	601a      	str	r2, [r3, #0]
 8000200:	03b6      	lsls	r6, r6, #14
 8000202:	6823      	ldr	r3, [r4, #0]
 8000204:	695a      	ldr	r2, [r3, #20]
 8000206:	422a      	tst	r2, r5
 8000208:	d104      	bne.n	8000214 <main+0x3c>
 800020a:	619d      	str	r5, [r3, #24]
 800020c:	2064      	movs	r0, #100	; 0x64
 800020e:	f000 f82b 	bl	8000268 <_ZN8sys_tick8delay_msEm>
 8000212:	e7f6      	b.n	8000202 <main+0x2a>
 8000214:	619e      	str	r6, [r3, #24]
 8000216:	e7f9      	b.n	800020c <main+0x34>
 8000218:	08000354 	stmdaeq	r0, {r2, r4, r6, r8, r9}
 800021c:	08000350 	stmdaeq	r0, {r4, r6, r8, r9}
 8000220:	fffff3ff 			; <UNDEFINED> instruction: 0xfffff3ff

08000224 <_Z17__default_handlerv>:
 8000224:	4770      	bx	lr
	...

08000228 <_Z7handlerILN9interrupt11interrupt_tEn15EEvv>:
 8000228:	b510      	push	{r4, lr}
 800022a:	4b0a      	ldr	r3, [pc, #40]	; (8000254 <_Z7handlerILN9interrupt11interrupt_tEn15EEvv+0x2c>)
 800022c:	4a0a      	ldr	r2, [pc, #40]	; (8000258 <_Z7handlerILN9interrupt11interrupt_tEn15EEvv+0x30>)
 800022e:	480b      	ldr	r0, [pc, #44]	; (800025c <_Z7handlerILN9interrupt11interrupt_tEn15EEvv+0x34>)
 8000230:	4283      	cmp	r3, r0
 8000232:	d306      	bcc.n	8000242 <_Z7handlerILN9interrupt11interrupt_tEn15EEvv+0x1a>
 8000234:	2200      	movs	r2, #0
 8000236:	4b0a      	ldr	r3, [pc, #40]	; (8000260 <_Z7handlerILN9interrupt11interrupt_tEn15EEvv+0x38>)
 8000238:	490a      	ldr	r1, [pc, #40]	; (8000264 <_Z7handlerILN9interrupt11interrupt_tEn15EEvv+0x3c>)
 800023a:	428b      	cmp	r3, r1
 800023c:	d204      	bcs.n	8000248 <_Z7handlerILN9interrupt11interrupt_tEn15EEvv+0x20>
 800023e:	c304      	stmia	r3!, {r2}
 8000240:	e7fb      	b.n	800023a <_Z7handlerILN9interrupt11interrupt_tEn15EEvv+0x12>
 8000242:	ca02      	ldmia	r2!, {r1}
 8000244:	c302      	stmia	r3!, {r1}
 8000246:	e7f3      	b.n	8000230 <_Z7handlerILN9interrupt11interrupt_tEn15EEvv+0x8>
 8000248:	f000 f87a 	bl	8000340 <_Z11system_initv>
 800024c:	f7ff ffc4 	bl	80001d8 <main>
 8000250:	e7fe      	b.n	8000250 <_Z7handlerILN9interrupt11interrupt_tEn15EEvv+0x28>
 8000252:	46c0      	nop			; (mov r8, r8)
 8000254:	20000000 	andcs	r0, r0, r0
 8000258:	08000360 	stmdaeq	r0, {r5, r6, r8, r9}
 800025c:	20000000 	andcs	r0, r0, r0
 8000260:	20000000 	andcs	r0, r0, r0
 8000264:	20000010 	andcs	r0, r0, r0, lsl r0

08000268 <_ZN8sys_tick8delay_msEm>:
 8000268:	4b04      	ldr	r3, [pc, #16]	; (800027c <_ZN8sys_tick8delay_msEm+0x14>)
 800026a:	681a      	ldr	r2, [r3, #0]
 800026c:	1810      	adds	r0, r2, r0
 800026e:	6819      	ldr	r1, [r3, #0]
 8000270:	4291      	cmp	r1, r2
 8000272:	d302      	bcc.n	800027a <_ZN8sys_tick8delay_msEm+0x12>
 8000274:	6819      	ldr	r1, [r3, #0]
 8000276:	4281      	cmp	r1, r0
 8000278:	d3f9      	bcc.n	800026e <_ZN8sys_tick8delay_msEm+0x6>
 800027a:	4770      	bx	lr
 800027c:	20000000 	andcs	r0, r0, r0

08000280 <_ZN8sys_tick4initEm>:
 8000280:	b570      	push	{r4, r5, r6, lr}
 8000282:	21fa      	movs	r1, #250	; 0xfa
 8000284:	2600      	movs	r6, #0
 8000286:	4b0b      	ldr	r3, [pc, #44]	; (80002b4 <_ZN8sys_tick4initEm+0x34>)
 8000288:	0089      	lsls	r1, r1, #2
 800028a:	681c      	ldr	r4, [r3, #0]
 800028c:	4b0a      	ldr	r3, [pc, #40]	; (80002b8 <_ZN8sys_tick4initEm+0x38>)
 800028e:	0005      	movs	r5, r0
 8000290:	601e      	str	r6, [r3, #0]
 8000292:	f7ff ff15 	bl	80000c0 <__udivsi3>
 8000296:	4b09      	ldr	r3, [pc, #36]	; (80002bc <_ZN8sys_tick4initEm+0x3c>)
 8000298:	3d01      	subs	r5, #1
 800029a:	6018      	str	r0, [r3, #0]
 800029c:	2304      	movs	r3, #4
 800029e:	6026      	str	r6, [r4, #0]
 80002a0:	6065      	str	r5, [r4, #4]
 80002a2:	60a6      	str	r6, [r4, #8]
 80002a4:	6822      	ldr	r2, [r4, #0]
 80002a6:	4313      	orrs	r3, r2
 80002a8:	6023      	str	r3, [r4, #0]
 80002aa:	2303      	movs	r3, #3
 80002ac:	6822      	ldr	r2, [r4, #0]
 80002ae:	4313      	orrs	r3, r2
 80002b0:	6023      	str	r3, [r4, #0]
 80002b2:	bd70      	pop	{r4, r5, r6, pc}
 80002b4:	08000358 	stmdaeq	r0, {r3, r4, r6, r8, r9}
 80002b8:	20000000 	andcs	r0, r0, r0
 80002bc:	20000004 	andcs	r0, r0, r4

080002c0 <_ZN9sys_clock4initEv>:
 80002c0:	4a16      	ldr	r2, [pc, #88]	; (800031c <_ZN9sys_clock4initEv+0x5c>)
 80002c2:	4b17      	ldr	r3, [pc, #92]	; (8000320 <_ZN9sys_clock4initEv+0x60>)
 80002c4:	6811      	ldr	r1, [r2, #0]
 80002c6:	2263      	movs	r2, #99	; 0x63
 80002c8:	681b      	ldr	r3, [r3, #0]
 80002ca:	b510      	push	{r4, lr}
 80002cc:	601a      	str	r2, [r3, #0]
 80002ce:	2200      	movs	r2, #0
 80002d0:	2007      	movs	r0, #7
 80002d2:	609a      	str	r2, [r3, #8]
 80002d4:	3203      	adds	r2, #3
 80002d6:	32ff      	adds	r2, #255	; 0xff
 80002d8:	600a      	str	r2, [r1, #0]
 80002da:	680a      	ldr	r2, [r1, #0]
 80002dc:	4002      	ands	r2, r0
 80002de:	2a02      	cmp	r2, #2
 80002e0:	d1fb      	bne.n	80002da <_ZN9sys_clock4initEv+0x1a>
 80002e2:	4a10      	ldr	r2, [pc, #64]	; (8000324 <_ZN9sys_clock4initEv+0x64>)
 80002e4:	60da      	str	r2, [r3, #12]
 80002e6:	2280      	movs	r2, #128	; 0x80
 80002e8:	6819      	ldr	r1, [r3, #0]
 80002ea:	0452      	lsls	r2, r2, #17
 80002ec:	430a      	orrs	r2, r1
 80002ee:	601a      	str	r2, [r3, #0]
 80002f0:	2280      	movs	r2, #128	; 0x80
 80002f2:	0492      	lsls	r2, r2, #18
 80002f4:	6819      	ldr	r1, [r3, #0]
 80002f6:	4211      	tst	r1, r2
 80002f8:	d0fc      	beq.n	80002f4 <_ZN9sys_clock4initEv+0x34>
 80002fa:	2202      	movs	r2, #2
 80002fc:	6899      	ldr	r1, [r3, #8]
 80002fe:	430a      	orrs	r2, r1
 8000300:	2118      	movs	r1, #24
 8000302:	609a      	str	r2, [r3, #8]
 8000304:	689a      	ldr	r2, [r3, #8]
 8000306:	400a      	ands	r2, r1
 8000308:	2a10      	cmp	r2, #16
 800030a:	d1fb      	bne.n	8000304 <_ZN9sys_clock4initEv+0x44>
 800030c:	20fa      	movs	r0, #250	; 0xfa
 800030e:	4b06      	ldr	r3, [pc, #24]	; (8000328 <_ZN9sys_clock4initEv+0x68>)
 8000310:	4a06      	ldr	r2, [pc, #24]	; (800032c <_ZN9sys_clock4initEv+0x6c>)
 8000312:	0200      	lsls	r0, r0, #8
 8000314:	601a      	str	r2, [r3, #0]
 8000316:	f7ff ffb3 	bl	8000280 <_ZN8sys_tick4initEm>
 800031a:	bd10      	pop	{r4, pc}
 800031c:	0800035c 	stmdaeq	r0, {r2, r3, r4, r6, r8, r9}
 8000320:	08000354 	stmdaeq	r0, {r2, r4, r6, r8, r9}
 8000324:	30030802 	andcc	r0, r3, r2, lsl #16
 8000328:	20000008 	andcs	r0, r0, r8
 800032c:	03d09000 	bicseq	r9, r0, #0

08000330 <_Z7handlerILN9interrupt11interrupt_tEn1EEvv>:
 8000330:	4a02      	ldr	r2, [pc, #8]	; (800033c <_Z7handlerILN9interrupt11interrupt_tEn1EEvv+0xc>)
 8000332:	6813      	ldr	r3, [r2, #0]
 8000334:	3301      	adds	r3, #1
 8000336:	6013      	str	r3, [r2, #0]
 8000338:	4770      	bx	lr
 800033a:	46c0      	nop			; (mov r8, r8)
 800033c:	20000000 	andcs	r0, r0, r0

08000340 <_Z11system_initv>:
 8000340:	b510      	push	{r4, lr}
 8000342:	f7ff ffbd 	bl	80002c0 <_ZN9sys_clock4initEv>
 8000346:	bd10      	pop	{r4, pc}

Disassembly of section .init:

08000348 <_init>:
 8000348:	b5f8      	push	{r3, r4, r5, r6, r7, lr}
 800034a:	46c0      	nop			; (mov r8, r8)

Disassembly of section .fini:

0800034c <_fini>:
 800034c:	b5f8      	push	{r3, r4, r5, r6, r7, lr}
 800034e:	46c0      	nop			; (mov r8, r8)

Disassembly of section .rodata:

08000350 <_ZN12peripheral_tIL9mcu_svd_t3EL17peripheral_enum_t12EE1VE>:
 8000350:	50000000 	andpl	r0, r0, r0

08000354 <_ZN12peripheral_tIL9mcu_svd_t3EL17peripheral_enum_t28EE1VE>:
 8000354:	40021000 	andmi	r1, r2, r0

08000358 <_ZN12peripheral_tIL9mcu_svd_t3EL17peripheral_enum_t35EE1VE>:
 8000358:	e000e010 	and	lr, r0, r0, lsl r0

0800035c <_ZN12peripheral_tIL9mcu_svd_t3EL17peripheral_enum_t9EE1VE>:
 800035c:	40022000 	andmi	r2, r2, r0

Disassembly of section .bss:

20000000 <_ZN8sys_tick10ms_counterE>:
20000000:	00000000 	andeq	r0, r0, r0

20000004 <_ZN8sys_tick12ticks_per_usE>:
20000004:	00000000 	andeq	r0, r0, r0

20000008 <_ZN9sys_clock6m_freqE>:
	...

Disassembly of section .ARM.attributes:

00000000 <.ARM.attributes>:
   0:	00002741 	andeq	r2, r0, r1, asr #14
   4:	61656100 	cmnvs	r5, r0, lsl #2
   8:	01006962 	tsteq	r0, r2, ror #18
   c:	0000001d 	andeq	r0, r0, sp, lsl r0
  10:	2d533605 	ldclcs	6, cr3, [r3, #-20]	; 0xffffffec
  14:	0c06004d 	stceq	0, cr0, [r6], {77}	; 0x4d
  18:	01094d07 	tsteq	r9, r7, lsl #26
  1c:	01140412 	tsteq	r4, r2, lsl r4
  20:	03170115 	tsteq	r7, #1073741829	; 0x40000005
  24:	011a0118 	tsteq	sl, r8, lsl r1

Disassembly of section .comment:

00000000 <.comment>:
   0:	3a434347 	bcc	10d0d24 <vectors-0x6f2f2dc>
   4:	4e472820 	cdpmi	8, 4, cr2, cr7, cr0, {1}
   8:	6f542055 	svcvs	0x00542055
   c:	20736c6f 	rsbscs	r6, r3, pc, ror #24
  10:	20726f66 	rsbscs	r6, r2, r6, ror #30
  14:	206d7241 	rsbcs	r7, sp, r1, asr #4
  18:	65626d45 	strbvs	r6, [r2, #-3397]!	; 0xfffff2bb
  1c:	64656464 	strbtvs	r6, [r5], #-1124	; 0xfffffb9c
  20:	6f725020 	svcvs	0x00725020
  24:	73736563 	cmnvc	r3, #415236096	; 0x18c00000
  28:	2073726f 	rsbscs	r7, r3, pc, ror #4
  2c:	30322d38 	eorscc	r2, r2, r8, lsr sp
  30:	712d3831 			; <UNDEFINED> instruction: 0x712d3831
  34:	616d2d34 	cmnvs	sp, r4, lsr sp
  38:	29726f6a 	ldmdbcs	r2!, {r1, r3, r5, r6, r8, r9, sl, fp, sp, lr}^
  3c:	322e3820 	eorcc	r3, lr, #32, 16	; 0x200000
  40:	3220312e 	eorcc	r3, r0, #-2147483637	; 0x8000000b
  44:	31383130 	teqcc	r8, r0, lsr r1
  48:	20333132 	eorscs	r3, r3, r2, lsr r1
  4c:	6c657228 	sfmvs	f7, 2, [r5], #-160	; 0xffffff60
  50:	65736165 	ldrbvs	r6, [r3, #-357]!	; 0xfffffe9b
  54:	675b2029 	ldrbvs	r2, [fp, -r9, lsr #32]
  58:	382d6363 	stmdacc	sp!, {r0, r1, r5, r6, r8, r9, sp, lr}
  5c:	6172622d 	cmnvs	r2, sp, lsr #4
  60:	2068636e 	rsbcs	r6, r8, lr, ror #6
  64:	69766572 	ldmdbvs	r6!, {r1, r4, r5, r6, r8, sl, sp, lr}^
  68:	6e6f6973 			; <UNDEFINED> instruction: 0x6e6f6973
  6c:	37363220 	ldrcc	r3, [r6, -r0, lsr #4]!
  70:	5d343730 	ldcpl	7, cr3, [r4, #-192]!	; 0xffffff40
	...

Disassembly of section .debug_frame:

00000000 <.debug_frame>:
   0:	0000000c 	andeq	r0, r0, ip
   4:	ffffffff 			; <UNDEFINED> instruction: 0xffffffff
   8:	7c010001 	stcvc	0, cr0, [r1], {1}
   c:	000d0c0e 	andeq	r0, sp, lr, lsl #24
  10:	0000000c 	andeq	r0, r0, ip
  14:	00000000 	andeq	r0, r0, r0
  18:	080000c1 	stmdaeq	r0, {r0, r6, r7}
  1c:	0000010a 	andeq	r0, r0, sl, lsl #2
