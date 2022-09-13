# 设置头文件路径
include_directories("GameObject/Physics" "Math" "Platform")

# 设置生成可执行程序的源文件
add_executable(${PROJECT_NAME} main.cpp)

# 添加其它源文件的目录，输出的是各个目录下的源文件
aux_source_directory("Platform" libDir1)
aux_source_directory("Math" libDir2)

# 设置其它源文件所生成的库文件
add_library(lib1 ${libDir1})
add_library(lib2 ${libDir2})
add_library(lib3 "GameObject/Physics/Light.cpp")

# 设置可执行程序所链接的库
target_link_libraries(${PROJECT_NAME} lib3 lib1 lib2)