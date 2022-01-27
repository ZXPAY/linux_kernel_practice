obj-m := test_process_info.o
obj-m += test_current_task.o

all:
	make -C /lib/modules/`uname -r`/build M=${PWD} modules

clean:
	make -C /lib/modules/`uname -r`/build M=${PWD} clean



