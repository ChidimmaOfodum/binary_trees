cmake_minimum_required(VERSION 3.16)
project(binary_trees)

include_directories("../")

FILE(GLOB SS_SOURCES ../*.c)
FILE(GLOB TEST_SOURCES ./*.c)

list(FILTER SS_SOURCES EXCLUDE REGEX "main.c$")

foreach(SOURCE ${TEST_SOURCES}) 

	get_filename_component(FILE_NAME_WE ${SOURCE} NAME_WE)
	get_filename_component(FILE_NAME ${SOURCE} NAME)

	add_executable(${FILE_NAME_WE}_test ${FILE_NAME} ${SS_SOURCES})
# 	set_target_properties(${FILE_NAME_WE}_test PROPERTIES
# 	COMPILE_FLAGS "-fsanitize=address"
# 	LINK_FLAGS "-fsanitize=address"
# )
	add_test( NAME ${FILE_NAME_WE}_TEST COMMAND ${FILE_NAME_WE}_test )

endforeach()
