nasm -f bin -o boot.img boot.asm
nasm -f bin -o boot2.img boot2.asm
gcc -c -masm=intel -m32 -ffreestanding function.c -o function.o
gcc -c -masm=intel -m32 -ffreestanding kernel.c -o kernel.o
gcc -c -masm=intel -m32 -ffreestanding interrupt.c -o interrupt.o
ld -melf_i386 -Ttext 0x10200 -nostdlib kernel.o function.o interrupt.o -o kernel.img
objcopy -O binary kernel.img main.img
cat boot.img boot2.img main.img> final.img