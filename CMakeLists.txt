cmake_minimum_required(VERSION 2.8.12)
project(Linux_kernal_practice)

# Build the document
add_subdirectory("doc")


# Build the project
add_subdirectory(01_hello_world)
add_subdirectory(02_internel_module_init)
add_subdirectory(03_passing_parameter)
add_subdirectory(04_symbol_table)
add_subdirectory(05_module_stacking)
add_subdirectory(06_module_licence)
add_subdirectory(07_module_metadata)
add_subdirectory(08_printk)

