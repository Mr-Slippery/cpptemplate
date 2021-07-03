add_library(widget widget.cpp)

add_executable(thinkcell main.cpp)
target_link_libraries(thinkcell widget)
