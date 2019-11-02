project(Google_tests)
add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
find_package(jsoncpp CONFIG REQUIRED)
# adding the Google_Tests_run target
add_executable(Google_Tests_run ConverterTests.cpp AbsoluteDateTest.cpp DynamicTest.cpp JsonTest.cpp)

# linking Google_Tests_run with DateConverter_lib which will be tested
target_link_libraries(Google_Tests_run DateConverter_lib)
target_link_libraries(Google_Tests_run dynamic_lib)
target_link_libraries(Google_Tests_run jsoncpp_lib)
target_link_libraries(Google_Tests_run gtest gtest_main)