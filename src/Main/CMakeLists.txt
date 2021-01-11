aux_source_directory(src DIR_MAIN_SRCS)

include_directories(../MyLinkedMap/include)
include_directories(../3rd/include)
include_directories(../Structs/include)

add_executable(DK_student_manage ${DIR_MAIN_SRCS})
