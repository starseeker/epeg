add_executable(rotatetest rotatetest.c)
target_link_libraries(rotatetest epeg jpeg)

add_executable(scaletest scaletest.c)
target_link_libraries(scaletest epeg jpeg)

configure_file(example.jpg ${CMAKE_BINARY_DIR}/example.jpg COPYONLY)

add_executable(epeg_run epeg_test.c)
target_link_libraries(epeg_run epeg jpeg)


