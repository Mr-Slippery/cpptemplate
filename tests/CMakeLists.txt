add_executable(widget_test widget_test.cpp)
target_link_libraries(widget_test widget gtest gtest_main)
add_test(NAME widget_test COMMAND widget_test)