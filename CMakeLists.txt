cmake_minimum_required(VERSION 3.16)
project(binary_trees)

option(ENABLE_TESTING "Build all project tests" ON)
mark_as_advanced(ENABLE_TESTING)

set(C_STANDARD 89)
set(C_STANDARD_REQUIRED ON)

FILE(GLOB BT_SOURCES ./*.c)

add_executable(main)
target_sources(main PRIVATE ${BT_SOURCES})

set_target_properties(main PROPERTIES
  COMPILE_FLAGS "-fsanitize=address"
  LINK_FLAGS "-fsanitize=address"
)


if(ENABLE_TESTING)
  enable_testing()
  add_subdirectory(tests)
endif()
