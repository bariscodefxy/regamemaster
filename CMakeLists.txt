cmake_minimum_required(VERSION 3.1)
project(regamemater CXX)

if (WIN32)
	message(FATAL_ERROR "CMakeLists.txt Windows platform isn't supported yet")
endif()


add_custom_target(appversion DEPENDS
	COMMAND "${PROJECT_SOURCE_DIR}/version/appversion.sh" "${PROJECT_SOURCE_DIR}" "regamemaster"
)

add_subdirectory(src)