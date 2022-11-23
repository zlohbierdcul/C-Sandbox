cmake_minimum_required(VERSION 3.0.0)
project(bspCMake VERSION 0.1.0)

include(CTest)
enable_testing()

# target_include_directories(bspCMake func.h)
add_executable(bspCMake bsp.c func.c)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
