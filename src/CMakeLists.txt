add_executable(hsrp 
	main.cc
	Root.cc
	User.cc
	Group.cc
	SecureDB.cc
)

target_include_directories(hsrp PRIVATE ${CMAKE_SOURCE_DIR}/API)

target_link_libraries(hsrp PRIVATE hsrp_api)
