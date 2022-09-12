cmake_minimum_required(VERSION 3.19 FATAL_ERROR)
project(MyEngine VERSION 0.1.0 LANGUAGES CXX)

# windows 平台，设置 C++ 编译器将源程序文件按照 utf-8 格式读取
if(WIN32)
	add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/source-charset:utf-8>")

add_subdirectory("src" "../bin")