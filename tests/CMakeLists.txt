# Download GoogleTest automatically if not installed
include(FetchContent)
FetchContet_Declare(
	googletest
	URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
FetchContent_MakeAvailable(googletest)

# Test binary
add_executable(hsrp_tests
	test_crypto.c
	test_db.cc
	test_root.cc
	test_user.cc
)

target_link_libraries(hsrp_tests
	PRIVATE
		hsrp_api
		gtest_main
)

add_test(NAME HSRP_TestSuite COMMAND hsrp_tests)
