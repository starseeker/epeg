add_executable(rotatetest rotatetest.c)
target_link_libraries(rotatetest epeg jpeg)

add_executable(scaletest scaletest.c)
target_link_libraries(scaletest epeg jpeg)
