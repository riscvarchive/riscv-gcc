/home/kito/riscv-gnu-toolchain-workspace/rv64gcv/bin/riscv64-unknown-elf-gcc $1 -O2 --save-temps -c &> x1
clang-format-8 -i `echo $1 | sed  "s/\.c/.i/"`
sed -i '/^#/d' `echo $1 | sed  "s/\.c/.i/"`
/home/kito/riscv-gnu-toolchain-workspace/rv64gcv/bin/riscv64-unknown-elf-gcc `echo $1 | sed  "s/\.c/.i/"` -Werror -O2 -c &> x
