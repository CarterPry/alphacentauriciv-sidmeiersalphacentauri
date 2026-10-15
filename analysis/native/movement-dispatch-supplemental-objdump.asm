
/Users/carte/Library/Application Support/CrossOver/Bottles/Steam/drive_c/Program Files (x86)/Steam/steamapps/common/Sid Meier's Alpha Centauri/terranx.exe:	file format coff-i386

Disassembly of section .text:

00401000 <.text>:
  5f63c0: 51                           	pushl	%ecx
  5f63c1: 53                           	pushl	%ebx
  5f63c2: 55                           	pushl	%ebp
  5f63c3: 56                           	pushl	%esi
  5f63c4: 8b f1                        	movl	%ecx, %esi
  5f63c6: 57                           	pushl	%edi
  5f63c7: 33 ff                        	xorl	%edi, %edi
  5f63c9: 8b 8e c4 00 00 00            	movl	0xc4(%esi), %ecx
  5f63cf: 3b cf                        	cmpl	%edi, %ecx
  5f63d1: 74 08                        	je	0x5f63db <.text+0x1f53db>
  5f63d3: 56                           	pushl	%esi
  5f63d4: e8 07 ef ff ff               	calll	0x5f52e0 <.text+0x1f42e0>
  5f63d9: eb 54                        	jmp	0x5f642f <.text+0x1f542f>
  5f63db: 3b f7                        	cmpl	%edi, %esi
  5f63dd: 74 50                        	je	0x5f642f <.text+0x1f542f>
  5f63df: f7 86 98 00 00 00 00 00 00 02	testl	$0x2000000, 0x98(%esi)  # imm = 0x2000000
  5f63e9: 75 44                        	jne	0x5f642f <.text+0x1f542f>
  5f63eb: 8b 15 34 7b 9b 00            	movl	0x9b7b34, %edx
  5f63f1: 33 c0                        	xorl	%eax, %eax
  5f63f3: 3b d7                        	cmpl	%edi, %edx
  5f63f5: 7e 33                        	jle	0x5f642a <.text+0x1f542a>
  5f63f7: b9 48 6e 9b 00               	movl	$0x9b6e48, %ecx         # imm = 0x9B6E48
  5f63fc: 39 31                        	cmpl	%esi, (%ecx)
  5f63fe: 74 0a                        	je	0x5f640a <.text+0x1f540a>
  5f6400: 40                           	incl	%eax
  5f6401: 83 c1 04                     	addl	$0x4, %ecx
  5f6404: 3b c2                        	cmpl	%edx, %eax
  5f6406: 7c f4                        	jl	0x5f63fc <.text+0x1f53fc>
  5f6408: eb 20                        	jmp	0x5f642a <.text+0x1f542a>
  5f640a: 3b c2                        	cmpl	%edx, %eax
  5f640c: 7d 1c                        	jge	0x5f642a <.text+0x1f542a>
  5f640e: 3b c7                        	cmpl	%edi, %eax
  5f6410: 7e 12                        	jle	0x5f6424 <.text+0x1f5424>
  5f6412: 8d 0c 85 48 6e 9b 00         	leal	0x9b6e48(,%eax,4), %ecx
  5f6419: 8b 51 fc                     	movl	-0x4(%ecx), %edx
  5f641c: 89 11                        	movl	%edx, (%ecx)
  5f641e: 83 c1 fc                     	addl	$-0x4, %ecx
  5f6421: 48                           	decl	%eax
  5f6422: 75 f5                        	jne	0x5f6419 <.text+0x1f5419>
  5f6424: 89 35 48 6e 9b 00            	movl	%esi, 0x9b6e48
  5f642a: e8 f1 eb ff ff               	calll	0x5f5020 <.text+0x1f4020>
  5f642f: 8b 8e c4 00 00 00            	movl	0xc4(%esi), %ecx
  5f6435: 3b cf                        	cmpl	%edi, %ecx
  5f6437: 74 09                        	je	0x5f6442 <.text+0x1f5442>
  5f6439: 8b 01                        	movl	(%ecx), %eax
  5f643b: 56                           	pushl	%esi
  5f643c: ff 90 04 01 00 00            	calll	*0x104(%eax)
  5f6442: 8b 44 24 28                  	movl	0x28(%esp), %eax
  5f6446: 3b c7                        	cmpl	%edi, %eax
  5f6448: 74 0e                        	je	0x5f6458 <.text+0x1f5458>
  5f644a: 89 35 d0 7a 9b 00            	movl	%esi, 0x9b7ad0
  5f6450: 89 3d cc 7a 9b 00            	movl	%edi, 0x9b7acc
  5f6456: eb 0c                        	jmp	0x5f6464 <.text+0x1f5464>
  5f6458: 89 35 cc 7a 9b 00            	movl	%esi, 0x9b7acc
  5f645e: 89 3d d0 7a 9b 00            	movl	%edi, 0x9b7ad0
  5f6464: 8b 4c 24 18                  	movl	0x18(%esp), %ecx
  5f6468: 8b 5c 24 20                  	movl	0x20(%esp), %ebx
  5f646c: 8b 6c 24 1c                  	movl	0x1c(%esp), %ebp
  5f6470: 3b cf                        	cmpl	%edi, %ecx
  5f6472: c7 05 d4 7a 9b 00 01 00 00 00	movl	$0x1, 0x9b7ad4
  5f647c: 74 79                        	je	0x5f64f7 <.text+0x1f54f7>
  5f647e: f7 86 98 00 00 00 00 02 20 00	testl	$0x200200, 0x98(%esi)   # imm = 0x200200
  5f6488: 75 6d                        	jne	0x5f64f7 <.text+0x1f54f7>
  5f648a: f6 86 9c 00 00 00 08         	testb	$0x8, 0x9c(%esi)
  5f6491: 75 64                        	jne	0x5f64f7 <.text+0x1f54f7>
  5f6493: 3b c7                        	cmpl	%edi, %eax
  5f6495: 75 3b                        	jne	0x5f64d2 <.text+0x1f54d2>
  5f6497: 89 35 b8 7a 9b 00            	movl	%esi, 0x9b7ab8
  5f649d: 8b 86 0c 04 00 00            	movl	0x40c(%esi), %eax
  5f64a3: 3b c7                        	cmpl	%edi, %eax
  5f64a5: 74 07                        	je	0x5f64ae <.text+0x1f54ae>
  5f64a7: 53                           	pushl	%ebx
  5f64a8: 55                           	pushl	%ebp
  5f64a9: ff d0                        	calll	*%eax
  5f64ab: 83 c4 08                     	addl	$0x8, %esp
  5f64ae: 8b 16                        	movl	(%esi), %edx
  5f64b0: 53                           	pushl	%ebx
  5f64b1: 55                           	pushl	%ebp
  5f64b2: 8b ce                        	movl	%esi, %ecx
  5f64b4: ff 52 70                     	calll	*0x70(%edx)
  5f64b7: 8b 7e 44                     	movl	0x44(%esi), %edi
  5f64ba: 85 ff                        	testl	%edi, %edi
  5f64bc: 74 39                        	je	0x5f64f7 <.text+0x1f54f7>
  5f64be: 8b 07                        	movl	(%edi), %eax
  5f64c0: 8b cf                        	movl	%edi, %ecx
  5f64c2: ff 50 5c                     	calll	*0x5c(%eax)
  5f64c5: 85 c0                        	testl	%eax, %eax
  5f64c7: 75 2e                        	jne	0x5f64f7 <.text+0x1f54f7>
  5f64c9: 8b 17                        	movl	(%edi), %edx
  5f64cb: 8b cf                        	movl	%edi, %ecx
  5f64cd: ff 52 1c                     	calll	*0x1c(%edx)
  5f64d0: eb 25                        	jmp	0x5f64f7 <.text+0x1f54f7>
  5f64d2: 8b 06                        	movl	(%esi), %eax
  5f64d4: 53                           	pushl	%ebx
  5f64d5: 55                           	pushl	%ebp
  5f64d6: 8b ce                        	movl	%esi, %ecx
  5f64d8: ff 90 98 00 00 00            	calll	*0x98(%eax)
  5f64de: 8b 7e 68                     	movl	0x68(%esi), %edi
  5f64e1: 85 ff                        	testl	%edi, %edi
  5f64e3: 74 12                        	je	0x5f64f7 <.text+0x1f54f7>
  5f64e5: 8b 17                        	movl	(%edi), %edx
  5f64e7: 8b cf                        	movl	%edi, %ecx
  5f64e9: ff 52 5c                     	calll	*0x5c(%edx)
  5f64ec: 85 c0                        	testl	%eax, %eax
  5f64ee: 75 07                        	jne	0x5f64f7 <.text+0x1f54f7>
  5f64f0: 8b 07                        	movl	(%edi), %eax
  5f64f2: 8b cf                        	movl	%edi, %ecx
  5f64f4: ff 50 1c                     	calll	*0x1c(%eax)
  5f64f7: 8b 16                        	movl	(%esi), %edx
  5f64f9: 8b ce                        	movl	%esi, %ecx
  5f64fb: ff 92 f4 00 00 00            	calll	*0xf4(%edx)
  5f6501: 85 c0                        	testl	%eax, %eax
  5f6503: 74 33                        	je	0x5f6538 <.text+0x1f5538>
  5f6505: 8d 44 24 10                  	leal	0x10(%esp), %eax
  5f6509: 6a 00                        	pushl	$0x0
  5f650b: 50                           	pushl	%eax
  5f650c: 53                           	pushl	%ebx
  5f650d: 55                           	pushl	%ebp
  5f650e: 8d 8e f4 08 00 00            	leal	0x8f4(%esi), %ecx
  5f6514: e8 e7 45 00 00               	calll	0x5fab00 <.text+0x1f9b00>
  5f6519: 85 c0                        	testl	%eax, %eax
  5f651b: 7c 1b                        	jl	0x5f6538 <.text+0x1f5538>
  5f651d: 8b 44 24 10                  	movl	0x10(%esp), %eax
  5f6521: 8b 16                        	movl	(%esi), %edx
  5f6523: 8b 8c 86 00 09 00 00         	movl	0x900(%esi,%eax,4), %ecx
  5f652a: 51                           	pushl	%ecx
  5f652b: 50                           	pushl	%eax
  5f652c: 8b ce                        	movl	%esi, %ecx
  5f652e: ff 92 60 01 00 00            	calll	*0x160(%edx)
  5f6534: 85 c0                        	testl	%eax, %eax
  5f6536: 74 0e                        	je	0x5f6546 <.text+0x1f5546>
  5f6538: 8b 54 24 28                  	movl	0x28(%esp), %edx
  5f653c: 8b ce                        	movl	%esi, %ecx
  5f653e: 52                           	pushl	%edx
  5f653f: 53                           	pushl	%ebx
  5f6540: 55                           	pushl	%ebp
  5f6541: e8 0a 82 ff ff               	calll	0x5ee750 <.text+0x1ed750>
  5f6546: 5f                           	popl	%edi
  5f6547: 5e                           	popl	%esi
  5f6548: 5d                           	popl	%ebp
  5f6549: 5b                           	popl	%ebx
  5f654a: 59                           	popl	%ecx
  5f654b: c2 14 00                     	retl	$0x14
  5f654e: 90                           	nop
  5f654f: 90                           	nop
  5f6550: 83 ec 10                     	subl	$0x10, %esp
  5f6553: a1 cc 7a 9b 00               	movl	0x9b7acc, %eax
  5f6558: 53                           	pushl	%ebx
  5f6559: 55                           	pushl	%ebp
  5f655a: 56                           	pushl	%esi
  5f655b: 8b f1                        	movl	%ecx, %esi
  5f655d: 33 c9                        	xorl	%ecx, %ecx
  5f655f: 57                           	pushl	%edi
  5f6560: 3b c1                        	cmpl	%ecx, %eax
  5f6562: 75 05                        	jne	0x5f6569 <.text+0x1f5569>
  5f6564: a1 d0 7a 9b 00               	movl	0x9b7ad0, %eax
  5f6569: 8b 6c 24 28                  	movl	0x28(%esp), %ebp
  5f656d: 8b 5c 24 24                  	movl	0x24(%esp), %ebx
  5f6571: 3b c6                        	cmpl	%esi, %eax
  5f6573: 89 0d cc 7a 9b 00            	movl	%ecx, 0x9b7acc
  5f6579: 89 0d d0 7a 9b 00            	movl	%ecx, 0x9b7ad0
  5f657f: 0f 85 d5 00 00 00            	jne	0x5f665a <.text+0x1f565a>
  5f6585: 8d 86 3c 01 00 00            	leal	0x13c(%esi), %eax
  5f658b: 8b 96 3c 01 00 00            	movl	0x13c(%esi), %edx
  5f6591: 8b 78 04                     	movl	0x4(%eax), %edi
  5f6594: 8b 48 08                     	movl	0x8(%eax), %ecx
  5f6597: 89 4c 24 18                  	movl	%ecx, 0x18(%esp)
  5f659b: 8b ca                        	movl	%edx, %ecx
  5f659d: 8b 40 0c                     	movl	0xc(%eax), %eax
  5f65a0: f7 d9                        	negl	%ecx
  5f65a2: 89 44 24 1c                  	movl	%eax, 0x1c(%esp)
  5f65a6: 8b c7                        	movl	%edi, %eax
  5f65a8: 03 d1                        	addl	%ecx, %edx
  5f65aa: f7 d8                        	negl	%eax
  5f65ac: 89 54 24 10                  	movl	%edx, 0x10(%esp)
  5f65b0: 8b 54 24 18                  	movl	0x18(%esp), %edx
  5f65b4: 03 f8                        	addl	%eax, %edi
  5f65b6: 03 d1                        	addl	%ecx, %edx
  5f65b8: 89 7c 24 14                  	movl	%edi, 0x14(%esp)
  5f65bc: 8b 7c 24 1c                  	movl	0x1c(%esp), %edi
  5f65c0: 8d 4c 24 10                  	leal	0x10(%esp), %ecx
  5f65c4: 03 f8                        	addl	%eax, %edi
  5f65c6: 51                           	pushl	%ecx
  5f65c7: 55                           	pushl	%ebp
  5f65c8: 53                           	pushl	%ebx
  5f65c9: 89 54 24 24                  	movl	%edx, 0x24(%esp)
  5f65cd: 89 7c 24 28                  	movl	%edi, 0x28(%esp)
  5f65d1: e8 0a 42 00 00               	calll	0x5fa7e0 <.text+0x1f97e0>
  5f65d6: 83 c4 0c                     	addl	$0xc, %esp
  5f65d9: 85 c0                        	testl	%eax, %eax
  5f65db: 74 7d                        	je	0x5f665a <.text+0x1f565a>
  5f65dd: f7 86 98 00 00 00 00 00 20 00	testl	$0x200000, 0x98(%esi)   # imm = 0x200000
  5f65e7: 75 71                        	jne	0x5f665a <.text+0x1f565a>
  5f65e9: f6 86 9c 00 00 00 08         	testb	$0x8, 0x9c(%esi)
  5f65f0: 75 68                        	jne	0x5f665a <.text+0x1f565a>
  5f65f2: 8b 44 24 30                  	movl	0x30(%esp), %eax
  5f65f6: 85 c0                        	testl	%eax, %eax
  5f65f8: 75 3b                        	jne	0x5f6635 <.text+0x1f5635>
  5f65fa: 89 35 b8 7a 9b 00            	movl	%esi, 0x9b7ab8
  5f6600: 8b 86 14 04 00 00            	movl	0x414(%esi), %eax
  5f6606: 85 c0                        	testl	%eax, %eax
  5f6608: 74 07                        	je	0x5f6611 <.text+0x1f5611>
  5f660a: 55                           	pushl	%ebp
  5f660b: 53                           	pushl	%ebx
  5f660c: ff d0                        	calll	*%eax
  5f660e: 83 c4 08                     	addl	$0x8, %esp
  5f6611: 8b 16                        	movl	(%esi), %edx
  5f6613: 55                           	pushl	%ebp
  5f6614: 53                           	pushl	%ebx
  5f6615: 8b ce                        	movl	%esi, %ecx
  5f6617: ff 52 4c                     	calll	*0x4c(%edx)
  5f661a: 8b 7e 20                     	movl	0x20(%esi), %edi
  5f661d: 85 ff                        	testl	%edi, %edi
  5f661f: 74 39                        	je	0x5f665a <.text+0x1f565a>
  5f6621: 8b 07                        	movl	(%edi), %eax
  5f6623: 8b cf                        	movl	%edi, %ecx
  5f6625: ff 50 5c                     	calll	*0x5c(%eax)
  5f6628: 85 c0                        	testl	%eax, %eax
  5f662a: 75 2e                        	jne	0x5f665a <.text+0x1f565a>
  5f662c: 8b 17                        	movl	(%edi), %edx
  5f662e: 8b cf                        	movl	%edi, %ecx
  5f6630: ff 52 1c                     	calll	*0x1c(%edx)
  5f6633: eb 25                        	jmp	0x5f665a <.text+0x1f565a>
  5f6635: 8b 06                        	movl	(%esi), %eax
  5f6637: 55                           	pushl	%ebp
  5f6638: 53                           	pushl	%ebx
  5f6639: 8b ce                        	movl	%esi, %ecx
  5f663b: ff 90 80 00 00 00            	calll	*0x80(%eax)
  5f6641: 8b 7e 50                     	movl	0x50(%esi), %edi
  5f6644: 85 ff                        	testl	%edi, %edi
  5f6646: 74 12                        	je	0x5f665a <.text+0x1f565a>
  5f6648: 8b 17                        	movl	(%edi), %edx
  5f664a: 8b cf                        	movl	%edi, %ecx
  5f664c: ff 52 5c                     	calll	*0x5c(%edx)
  5f664f: 85 c0                        	testl	%eax, %eax
  5f6651: 75 07                        	jne	0x5f665a <.text+0x1f565a>
  5f6653: 8b 07                        	movl	(%edi), %eax
  5f6655: 8b cf                        	movl	%edi, %ecx
  5f6657: ff 50 1c                     	calll	*0x1c(%eax)
  5f665a: f6 86 9c 00 00 00 01         	testb	$0x1, 0x9c(%esi)
  5f6661: 0f 84 9c 00 00 00            	je	0x5f6703 <.text+0x1f5703>
  5f6667: 8b 8e c4 00 00 00            	movl	0xc4(%esi), %ecx
  5f666d: 85 c9                        	testl	%ecx, %ecx
  5f666f: 74 0d                        	je	0x5f667e <.text+0x1f567e>
  5f6671: e8 1a 18 00 00               	calll	0x5f7e90 <.text+0x1f6e90>
  5f6676: 85 c0                        	testl	%eax, %eax
  5f6678: 0f 84 85 00 00 00            	je	0x5f6703 <.text+0x1f5703>
  5f667e: f7 86 98 00 00 00 00 00 20 00	testl	$0x200000, 0x98(%esi)   # imm = 0x200000
  5f6688: 75 79                        	jne	0x5f6703 <.text+0x1f5703>
  5f668a: f6 86 9c 00 00 00 08         	testb	$0x8, 0x9c(%esi)
  5f6691: 75 70                        	jne	0x5f6703 <.text+0x1f5703>
  5f6693: 8b 44 24 30                  	movl	0x30(%esp), %eax
  5f6697: 85 c0                        	testl	%eax, %eax
  5f6699: 75 43                        	jne	0x5f66de <.text+0x1f56de>
  5f669b: 89 35 b8 7a 9b 00            	movl	%esi, 0x9b7ab8
  5f66a1: 8b 86 1c 04 00 00            	movl	0x41c(%esi), %eax
  5f66a7: 85 c0                        	testl	%eax, %eax
  5f66a9: 74 07                        	je	0x5f66b2 <.text+0x1f56b2>
  5f66ab: 55                           	pushl	%ebp
  5f66ac: 53                           	pushl	%ebx
  5f66ad: ff d0                        	calll	*%eax
  5f66af: 83 c4 08                     	addl	$0x8, %esp
  5f66b2: 8b 16                        	movl	(%esi), %edx
  5f66b4: 55                           	pushl	%ebp
  5f66b5: 53                           	pushl	%ebx
  5f66b6: 8b ce                        	movl	%esi, %ecx
  5f66b8: ff 52 54                     	calll	*0x54(%edx)
  5f66bb: 8b 76 28                     	movl	0x28(%esi), %esi
  5f66be: 85 f6                        	testl	%esi, %esi
  5f66c0: 74 41                        	je	0x5f6703 <.text+0x1f5703>
  5f66c2: 8b 06                        	movl	(%esi), %eax
  5f66c4: 8b ce                        	movl	%esi, %ecx
  5f66c6: ff 50 5c                     	calll	*0x5c(%eax)
  5f66c9: 85 c0                        	testl	%eax, %eax
  5f66cb: 75 36                        	jne	0x5f6703 <.text+0x1f5703>
  5f66cd: 8b 16                        	movl	(%esi), %edx
  5f66cf: 8b ce                        	movl	%esi, %ecx
  5f66d1: ff 52 1c                     	calll	*0x1c(%edx)
  5f66d4: 5f                           	popl	%edi
  5f66d5: 5e                           	popl	%esi
  5f66d6: 5d                           	popl	%ebp
  5f66d7: 5b                           	popl	%ebx
  5f66d8: 83 c4 10                     	addl	$0x10, %esp
  5f66db: c2 10 00                     	retl	$0x10
  5f66de: 8b 06                        	movl	(%esi), %eax
  5f66e0: 55                           	pushl	%ebp
  5f66e1: 53                           	pushl	%ebx
  5f66e2: 8b ce                        	movl	%esi, %ecx
  5f66e4: ff 90 88 00 00 00            	calll	*0x88(%eax)
  5f66ea: 8b 76 58                     	movl	0x58(%esi), %esi
  5f66ed: 85 f6                        	testl	%esi, %esi
  5f66ef: 74 12                        	je	0x5f6703 <.text+0x1f5703>
  5f66f1: 8b 16                        	movl	(%esi), %edx
  5f66f3: 8b ce                        	movl	%esi, %ecx
  5f66f5: ff 52 5c                     	calll	*0x5c(%edx)
  5f66f8: 85 c0                        	testl	%eax, %eax
  5f66fa: 75 07                        	jne	0x5f6703 <.text+0x1f5703>
  5f66fc: 8b 06                        	movl	(%esi), %eax
  5f66fe: 8b ce                        	movl	%esi, %ecx
  5f6700: ff 50 1c                     	calll	*0x1c(%eax)
  5f6703: 5f                           	popl	%edi
  5f6704: 5e                           	popl	%esi
  5f6705: 5d                           	popl	%ebp
  5f6706: 5b                           	popl	%ebx
  5f6707: 83 c4 10                     	addl	$0x10, %esp
  5f670a: c2 10 00                     	retl	$0x10
  5f670d: 90                           	nop
  5f670e: 90                           	nop
  5f670f: 90                           	nop
