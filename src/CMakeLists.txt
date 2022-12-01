project(test_ev)

SET(LIBEV ${CMAKE_BINARY_DIR}/libev-prefix)
message("compiling subdir for src to ${LIBEV}")

add_executable(test_ev test_ev.cc)
target_include_directories(test_ev PUBLIC ${LIBEV}/include)
target_link_libraries(test_ev PRIVATE ${LIBEV}/lib/libev.a)
