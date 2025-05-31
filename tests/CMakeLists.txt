add_executable(test_proxy test_proxy.cpp test_SchoolGirl.cpp)
target_link_libraries(test_proxy proxy_pattern gtest gtest_main)

add_test(NAME ProxyTests COMMAND test_proxy)
