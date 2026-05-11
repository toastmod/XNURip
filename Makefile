XNU_ROOT = ./xnu
DEPS = -I$(XNU_ROOT)/bsd -I$(XNU_ROOT)/osfmk -I$(XNU_ROOT)/libkern
SHARED_FLAGS = -w -P -H -DKERNEL -march=arm64 -E -fno-builtin

# Extract preprocessed source code
source:
	clang $(SHARED_FLAGS) $(DEPS) $(XNU_ROOT)/bsd/kern/mach_loader.c -o mach_loader.c 2> mach_loader_includes

# Extract preprocessed macros
macros:
	clang $(SHARED_FLAGS) $(DEPS) -dM $(XNU_ROOT)/bsd/kern/mach_loader.c -o mach_loader.macros.c 