add_library(hsrp_api
	crypto.c
	db.c
	utils.c
)

target_include_directories(hsrp_api PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
