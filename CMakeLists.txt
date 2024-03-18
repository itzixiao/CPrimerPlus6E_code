cmake_minimum_required(VERSION 3.22.1)
#cmake_minimum_required(VERSION 3.27.8)
#cmake_minimum_required(VERSION 2.8.12.2)
project(CPrimerPlus6E_code)

set(CMAKE_C_STANDARD 99)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib)

########## 编译多源代码文件的程序 ######################
add_executable(usehotel src/Ch09/usehotel.c src/Ch09/hotel.c)
###########################################################################################

########## 多c编译处理方法：自动编译所有c，并可指定不需要编译的路径 ######################
set(exclude_dir "cmake-build-debug")      # 编译时排除的文件夹名
#list(APPEND exclude_dir "path_string")   # 当c路径中含有"path_string"时，将不会被编译
list(APPEND exclude_dir "bin")
list(APPEND exclude_dir "doc")
list(APPEND exclude_dir "solution")
list(APPEND exclude_dir "XB")

file(GLOB_RECURSE files *.c **/*.c)            # 递归获取当前项目所有(子)目录下的c，绝对路径
#file(GLOB files *.c dir_name/*.c)    # 非递归，手动指定哪些c需要被编译。使用该句请先注释上一句
foreach (file ${files})
    # 检查当前文件所在的路径是否被添加在了排除列表${exclude_dir}
    set(need_to_make ON)
    foreach (exclude_str ${exclude_dir})
        if (${file} MATCHES ${exclude_str})  # 该路径中含有排除的文件夹名,故该路径被排除掉
            set(need_to_make OFF)
        endif ()
    endforeach ()

    # 当前文件${file}需要被编译
    if (${need_to_make} STREQUAL ON)
        file(RELATIVE_PATH relative_path ${PROJECT_SOURCE_DIR} ${file})  # 获取${file}的相对路径${relative_path}
        set(exe ${relative_path})
        string(REGEX REPLACE "\\/" "." exe ${exe})    # 将路径中的/替换为.
        string(REGEX REPLACE "\ " "_" exe ${exe})     # 空格替换为_
        string(REGEX REPLACE "\\.c" "" exe ${exe})  # 后缀.c删掉
        add_executable(${exe} ${relative_path})       # 将当前c添加到编译列表
        message(STATUS "${relative_path} ========> ${exe}")  # 打印文件名信息
    endif ()
endforeach ()
###########################################################################################

