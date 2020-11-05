add_executable(rotatetest rotatetest.c)
target_link_libraries(rotatetest epeg turbojpeg jpeg)

add_executable(scaletest scaletest.c)
target_link_libraries(scaletest epeg turbojpeg jpeg)
