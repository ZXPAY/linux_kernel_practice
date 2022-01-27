obj-m := test_dump_stack.o
obj-m += test_kernel_panic.o
obj-m += test_oops.o

all:
	make -C /lib/modules/`uname -r`/build M=${PWD} modules

clean:
	make -C /lib/modules/`uname -r`/build M=${PWD} clean



