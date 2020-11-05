project(EPEG)

cmake_minimum_required(VERSION 3.12)

set(CMAKE_SKIP_BUILD_RPATH FALSE)
set(CMAKE_BUILD_WITH_INSTALL_RPATH FALSE)
set(CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)
set(CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib")
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

option(ENABLE_STATIC OFF)
option(REQUIRE_SIMD ON)
set(WITH_JPEG8 ON CACHE BOOL "Newer API" FORCE)

add_subdirectory(libjpeg-turbo)

include_directories(
   ${CMAKE_CURRENT_SOURCE_DIR}
   ${CMAKE_CURRENT_SOURCE_DIR}/libjpeg-turbo
   )

add_definitions(-Djpeg_EXPORTS)
add_library(epeg SHARED
  	epeg_main.c
  	libjpeg-turbo/cdjpeg.c
  	libjpeg-turbo/rdswitch.c
  	libjpeg-turbo/transupp.c
	)

target_link_libraries(epeg jpeg)
install(TARGETS epeg
   RUNTIME DESTINATION bin
   LIBRARY DESTINATION lib
   ARCHIVE DESTINATION lib)

install(FILES Epeg.h
    DESTINATION include)

add_subdirectory(example)

