#include <bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int t;
cin >> t;
while (t--){
    int n;
    cin>>n;
    vector<int>arr(n);
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    /*Expanded Main Page
(Redirected from Main Page)
Jump to navigationJump to search
Welcome to OSDev.org
Our wiki and forums provide 200k+ posts and 724 articles about the creation of operating systems.
Become a wiki author! See the Wish List for suggestions on where to start.
Display: Short view - Expanded view

Introduction
Basic Information

Introduction
Required Knowledge
Beginner Mistakes
Getting Started
How To Ask Questions
GCC Cross-Compiler
What Order Should I Make Things In?
Licensing
Tutorials
Frequently Asked Questions
more...
Environment

How kernel, compiler, and C library work together
Using other Languages than C
UEFI and legacy BIOS (PC)
Inline Assembly (including examples)
Object Files and relocation

Bare Bones / Baby Steps

Bare Bones (C and C++)
Ada Bare Bones
C Sharp Bare Bones
D Bare Bones
FreeBasic Bare Bones
Go Bare Bones
Pascal Bare Bones
Limine Bare Bones
The BabyStep Tutorial
more...
Example OS Organization

Meaty Skeleton

Booting and Setup

Boot Sequence
Diskless Booting
The Global Descriptor Table and a GDT Tutorial
Interrupts
Getting Keyboard Input

Testing and Debugging

Troubleshooting
Testing
Unit Testing
How Do I Use A Debugger With My OS
Kernel Debugging
more...
Development

Going Further on x86
Creating an Operating System
Code Management

Compiler Development

What's a compiler?
Making a Compiler (Theory)
Code Generation and Optimization Techniques
Implementing Conditional Statements And Loops
Tail Recursion and Tail Call Optimization
Design Considerations
Kernel Models

Monolithic Kernel
Microkernel
Exokernel and related models
Modular Kernel
more...
Task Models

Monotasking Systems
Multitasking Systems
Real-Time Systems
more...
Memory and Resource Management

Memory management - Overview and Introduction
Segmentation
Paging
Memory Allocation
Page Frame Allocation
Memory Management Unit, or in-depth description of recursive mappings
File Management
File Systems
more...
System Calls

ARM System Calls

Scheduling

Processes and Threads
Context Switching
Scheduling Algorithms
Multiprocessor Scheduling
Blocking Process - processes sleeping and waiting
more...
Process Sychronization

Synchronization Primitives - Semaphores, mutexes, spinlocks et al.
Signals
more...
Inter-Process Communication

Message Passing
Shared Memory
Remote Procedure Call
more...
Resources
Books on OS Development
Academic Papers on theory and design
Assembly
Disk Images with preinstalled GRUB
Deprecated, yet relevant, bits of specifications
Chip Numbers, Acronyms and Things
Resources
more...
Tools
Bootloaders

Bootloader theory
GRUB
Limine
LILO
XOSL
System Commander
Boot Magic
Rolling Your Own Bootloader
more...
Compilers

GCC
Cygwin
MinGW
Dev-C++
DJGPP
Building a GCC Cross-Compiler
Cross-Compiler Successful Builds
Porting GCC to your OS
Calling Conventions
System V ABI
Watcom C/C++
Visual Studio
Visual C++ Runtime
TCC
Smaller C
Other Compilers
more...
Assemblers

GAS (GNU as, part of binutils)
FASM
NASM
YASM
On the difference between AT&T and Intel Opcode syntax
more...
Linkers

LD (GNU ld, part of binutils)
Link Archiver (GNU ar, part of binutils)
Mold (Modern Linker)
more...
Emulators

Bochs
QEMU
Virtual PC
VMware
VirtualBox
SimICS
Lingemu
more...
Working with Disk Images

Disk Images in general, and ...
Loopback Device for Linux, *BSD et al.
hdiutil for MacOS X
Windows Tools
more...
Hardware
The Hardware Category and linked resources
CPU

General

Register Machine Model of Computation
Memory Architecture
Instruction Set Architecture
Historical Notes on CISC and RISC
Execution Architecture
Multiprocessing Architecture
X86
Modes

Real Mode
Protected Mode
Virtual 8086 Mode
x86-64
Other

IA32 Architecture Family
Model Specific Registers (MSRs)
Detecting CPU Speed
Inline Assembly/Examples
CPU Bugs
SSE
Where Can I Find Information About Ports
CPU Registers (x86, x86-64)
more...
ESA/390

Kernel Barebones
Program Status Word
Processing Storage Area Memory Mapping
z/OS DataSet FileSystem
Batch I/O Channel SubSystem
more...
ARM

ARM Overview
Raspberry Pi Bare Bones
Memory

Detecting Memory (x86)
A20 Line or "Why can't I access all my memory?"

IRQs and Exceptions, PIC, NMI, APIC, OPIC

I Can't Get Interrupts Working
The Interrupt Descriptor Table and IDT problems
Interrupt Service Routines (ISRs)
Interrupts
Non Maskable Interrupt (NMI)
APIC
PIC
OPIC
more...
Clocks, Timers and Counters

HPET
APIC timer (per-processor timer)
Programmable Interval Timer (PIT)
The CMOS clock, and its RTC chip
Detecting CPU Speed

Video

Accelerated Graphic Cards
Native Intel graphics
Detecting Colour and Monochrome Monitors?
Printing To Screen in Protected Mode
Text Mode Cursor
Drawing In a Linear Framebuffer
Kernel Stdio Theory
VGA Resources and VGA Hardware documentation
Drawing characters in graphics mode using VGA Fonts
Video Signals And Timing
How to program Bochs' and QEMU's BGA graphics device
more...
Audio

Sound
PC Speaker
Sound Blaster 16
more...
Storage devices

ATA (harddisks)
ATAPI (CD-ROM)
AHCI (SATA native)
DMA
NVMe
Floppy Disk Controller (FDC)
more...
Input/Output

PS/2 Keyboard
Mouse
Serial Ports (primarily RS-232)

Plug and Play

Plug-and-Play (PNP)
PNP Calls In Protected Mode

PCI, USB and things like this ...

PCI
PCI Express
USB
more...
UEFI

UEFI
Systems with broken UEFI implementations*/
    long long ps=0;
    long long ss=0;
    long long ms=0;
    for (int i=0;i<n;i++) {
        ps = ps+max(0, arr[i]);
    }
    /*Expanded Main Page
(Redirected from Main Page)
Jump to navigationJump to search
Welcome to OSDev.org
Our wiki and forums provide 200k+ posts and 724 articles about the creation of operating systems.
Become a wiki author! See the Wish List for suggestions on where to start.
Display: Short view - Expanded view

Introduction
Basic Information

Introduction
Required Knowledge
Beginner Mistakes
Getting Started
How To Ask Questions
GCC Cross-Compiler
What Order Should I Make Things In?
Licensing
Tutorials
Frequently Asked Questions
more...
Environment

How kernel, compiler, and C library work together
Using other Languages than C
UEFI and legacy BIOS (PC)
Inline Assembly (including examples)
Object Files and relocation

Bare Bones / Baby Steps

Bare Bones (C and C++)
Ada Bare Bones
C Sharp Bare Bones
D Bare Bones
FreeBasic Bare Bones
Go Bare Bones
Pascal Bare Bones
Limine Bare Bones
The BabyStep Tutorial
more...
Example OS Organization

Meaty Skeleton

Booting and Setup

Boot Sequence
Diskless Booting
The Global Descriptor Table and a GDT Tutorial
Interrupts
Getting Keyboard Input

Testing and Debugging

Troubleshooting
Testing
Unit Testing
How Do I Use A Debugger With My OS
Kernel Debugging
more...
Development

Going Further on x86
Creating an Operating System
Code Management

Compiler Development

What's a compiler?
Making a Compiler (Theory)
Code Generation and Optimization Techniques
Implementing Conditional Statements And Loops
Tail Recursion and Tail Call Optimization
Design Considerations
Kernel Models

Monolithic Kernel
Microkernel
Exokernel and related models
Modular Kernel
more...
Task Models

Monotasking Systems
Multitasking Systems
Real-Time Systems
more...
Memory and Resource Management

Memory management - Overview and Introduction
Segmentation
Paging
Memory Allocation
Page Frame Allocation
Memory Management Unit, or in-depth description of recursive mappings
File Management
File Systems
more...
System Calls

ARM System Calls

Scheduling

Processes and Threads
Context Switching
Scheduling Algorithms
Multiprocessor Scheduling
Blocking Process - processes sleeping and waiting
more...
Process Sychronization

Synchronization Primitives - Semaphores, mutexes, spinlocks et al.
Signals
more...
Inter-Process Communication

Message Passing
Shared Memory
Remote Procedure Call
more...
Resources
Books on OS Development
Academic Papers on theory and design
Assembly
Disk Images with preinstalled GRUB
Deprecated, yet relevant, bits of specifications
Chip Numbers, Acronyms and Things
Resources
more...
Tools
Bootloaders

Bootloader theory
GRUB
Limine
LILO
XOSL
System Commander
Boot Magic
Rolling Your Own Bootloader
more...
Compilers

GCC
Cygwin
MinGW
Dev-C++
DJGPP
Building a GCC Cross-Compiler
Cross-Compiler Successful Builds
Porting GCC to your OS
Calling Conventions
System V ABI
Watcom C/C++
Visual Studio
Visual C++ Runtime
TCC
Smaller C
Other Compilers
more...
Assemblers

GAS (GNU as, part of binutils)
FASM
NASM
YASM
On the difference between AT&T and Intel Opcode syntax
more...
Linkers

LD (GNU ld, part of binutils)
Link Archiver (GNU ar, part of binutils)
Mold (Modern Linker)
more...
Emulators

Bochs
QEMU
Virtual PC
VMware
VirtualBox
SimICS
Lingemu
more...
Working with Disk Images

Disk Images in general, and ...
Loopback Device for Linux, *BSD et al.
hdiutil for MacOS X
Windows Tools
more...
Hardware
The Hardware Category and linked resources
CPU

General

Register Machine Model of Computation
Memory Architecture
Instruction Set Architecture
Historical Notes on CISC and RISC
Execution Architecture
Multiprocessing Architecture
X86
Modes

Real Mode
Protected Mode
Virtual 8086 Mode
x86-64
Other

IA32 Architecture Family
Model Specific Registers (MSRs)
Detecting CPU Speed
Inline Assembly/Examples
CPU Bugs
SSE
Where Can I Find Information About Ports
CPU Registers (x86, x86-64)
more...
ESA/390

Kernel Barebones
Program Status Word
Processing Storage Area Memory Mapping
z/OS DataSet FileSystem
Batch I/O Channel SubSystem
more...
ARM

ARM Overview
Raspberry Pi Bare Bones
Memory

Detecting Memory (x86)
A20 Line or "Why can't I access all my memory?"

IRQs and Exceptions, PIC, NMI, APIC, OPIC

I Can't Get Interrupts Working
The Interrupt Descriptor Table and IDT problems
Interrupt Service Routines (ISRs)
Interrupts
Non Maskable Interrupt (NMI)
APIC
PIC
OPIC
more...
Clocks, Timers and Counters

HPET
APIC timer (per-processor timer)
Programmable Interval Timer (PIT)
The CMOS clock, and its RTC chip
Detecting CPU Speed

Video

Accelerated Graphic Cards
Native Intel graphics
Detecting Colour and Monochrome Monitors?
Printing To Screen in Protected Mode
Text Mode Cursor
Drawing In a Linear Framebuffer
Kernel Stdio Theory
VGA Resources and VGA Hardware documentation
Drawing characters in graphics mode using VGA Fonts
Video Signals And Timing
How to program Bochs' and QEMU's BGA graphics device
more...
Audio

Sound
PC Speaker
Sound Blaster 16
more...
Storage devices

ATA (harddisks)
ATAPI (CD-ROM)
AHCI (SATA native)
DMA
NVMe
Floppy Disk Controller (FDC)
more...
Input/Output

PS/2 Keyboard
Mouse
Serial Ports (primarily RS-232)

Plug and Play

Plug-and-Play (PNP)
PNP Calls In Protected Mode

PCI, USB and things like this ...

PCI
PCI Express
USB
more...
UEFI

UEFI
Systems with broken UEFI implementations*/
    for (int i=n-1;i>=0;i--) {
        ss += max(0, -arr[i]); 
        ms = max(ms,ps+ss);
        ps -= max(0, arr[i]);
    }
/*Expanded Main Page
(Redirected from Main Page)
Jump to navigationJump to search
Welcome to OSDev.org
Our wiki and forums provide 200k+ posts and 724 articles about the creation of operating systems.
Become a wiki author! See the Wish List for suggestions on where to start.
Display: Short view - Expanded view

Introduction
Basic Information

Introduction
Required Knowledge
Beginner Mistakes
Getting Started
How To Ask Questions
GCC Cross-Compiler
What Order Should I Make Things In?
Licensing
Tutorials
Frequently Asked Questions
more...
Environment

How kernel, compiler, and C library work together
Using other Languages than C
UEFI and legacy BIOS (PC)
Inline Assembly (including examples)
Object Files and relocation

Bare Bones / Baby Steps

Bare Bones (C and C++)
Ada Bare Bones
C Sharp Bare Bones
D Bare Bones
FreeBasic Bare Bones
Go Bare Bones
Pascal Bare Bones
Limine Bare Bones
The BabyStep Tutorial
more...
Example OS Organization

Meaty Skeleton

Booting and Setup

Boot Sequence
Diskless Booting
The Global Descriptor Table and a GDT Tutorial
Interrupts
Getting Keyboard Input

Testing and Debugging

Troubleshooting
Testing
Unit Testing
How Do I Use A Debugger With My OS
Kernel Debugging
more...
Development

Going Further on x86
Creating an Operating System
Code Management

Compiler Development

What's a compiler?
Making a Compiler (Theory)
Code Generation and Optimization Techniques
Implementing Conditional Statements And Loops
Tail Recursion and Tail Call Optimization
Design Considerations
Kernel Models

Monolithic Kernel
Microkernel
Exokernel and related models
Modular Kernel
more...
Task Models

Monotasking Systems
Multitasking Systems
Real-Time Systems
more...
Memory and Resource Management

Memory management - Overview and Introduction
Segmentation
Paging
Memory Allocation
Page Frame Allocation
Memory Management Unit, or in-depth description of recursive mappings
File Management
File Systems
more...
System Calls

ARM System Calls

Scheduling

Processes and Threads
Context Switching
Scheduling Algorithms
Multiprocessor Scheduling
Blocking Process - processes sleeping and waiting
more...
Process Sychronization

Synchronization Primitives - Semaphores, mutexes, spinlocks et al.
Signals
more...
Inter-Process Communication

Message Passing
Shared Memory
Remote Procedure Call
more...
Resources
Books on OS Development
Academic Papers on theory and design
Assembly
Disk Images with preinstalled GRUB
Deprecated, yet relevant, bits of specifications
Chip Numbers, Acronyms and Things
Resources
more...
Tools
Bootloaders

Bootloader theory
GRUB
Limine
LILO
XOSL
System Commander
Boot Magic
Rolling Your Own Bootloader
more...
Compilers

GCC
Cygwin
MinGW
Dev-C++
DJGPP
Building a GCC Cross-Compiler
Cross-Compiler Successful Builds
Porting GCC to your OS
Calling Conventions
System V ABI
Watcom C/C++
Visual Studio
Visual C++ Runtime
TCC
Smaller C
Other Compilers
more...
Assemblers

GAS (GNU as, part of binutils)
FASM
NASM
YASM
On the difference between AT&T and Intel Opcode syntax
more...
Linkers

LD (GNU ld, part of binutils)
Link Archiver (GNU ar, part of binutils)
Mold (Modern Linker)
more...
Emulators

Bochs
QEMU
Virtual PC
VMware
VirtualBox
SimICS
Lingemu
more...
Working with Disk Images

Disk Images in general, and ...
Loopback Device for Linux, *BSD et al.
hdiutil for MacOS X
Windows Tools
more...
Hardware
The Hardware Category and linked resources
CPU

General

Register Machine Model of Computation
Memory Architecture
Instruction Set Architecture
Historical Notes on CISC and RISC
Execution Architecture
Multiprocessing Architecture
X86
Modes

Real Mode
Protected Mode
Virtual 8086 Mode
x86-64
Other

IA32 Architecture Family
Model Specific Registers (MSRs)
Detecting CPU Speed
Inline Assembly/Examples
CPU Bugs
SSE
Where Can I Find Information About Ports
CPU Registers (x86, x86-64)
more...
ESA/390

Kernel Barebones
Program Status Word
Processing Storage Area Memory Mapping
z/OS DataSet FileSystem
Batch I/O Channel SubSystem
more...
ARM

ARM Overview
Raspberry Pi Bare Bones
Memory

Detecting Memory (x86)
A20 Line or "Why can't I access all my memory?"

IRQs and Exceptions, PIC, NMI, APIC, OPIC

I Can't Get Interrupts Working
The Interrupt Descriptor Table and IDT problems
Interrupt Service Routines (ISRs)
Interrupts
Non Maskable Interrupt (NMI)
APIC
PIC
OPIC
more...
Clocks, Timers and Counters

HPET
APIC timer (per-processor timer)
Programmable Interval Timer (PIT)
The CMOS clock, and its RTC chip
Detecting CPU Speed

Video

Accelerated Graphic Cards
Native Intel graphics
Detecting Colour and Monochrome Monitors?
Printing To Screen in Protected Mode
Text Mode Cursor
Drawing In a Linear Framebuffer
Kernel Stdio Theory
VGA Resources and VGA Hardware documentation
Drawing characters in graphics mode using VGA Fonts
Video Signals And Timing
How to program Bochs' and QEMU's BGA graphics device
more...
Audio

Sound
PC Speaker
Sound Blaster 16
more...
Storage devices

ATA (harddisks)
ATAPI (CD-ROM)
AHCI (SATA native)
DMA
NVMe
Floppy Disk Controller (FDC)
more...
Input/Output

PS/2 Keyboard
Mouse
Serial Ports (primarily RS-232)

Plug and Play

Plug-and-Play (PNP)
PNP Calls In Protected Mode

PCI, USB and things like this ...

PCI
PCI Express
USB
more...
UEFI

UEFI
Systems with broken UEFI implementations*/
    cout << ms << endl;

}
  return 0;
}