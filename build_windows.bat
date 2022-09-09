::  打开命令的回显
@echo on

::  .为CMakeList.txt所在路径，build为生成makefile的文件夹
cmake -S . -B build

::  build为makefile所在文件夹，Release为编译器选项，即编译出发布版本
cmake --build build --config Release

pause