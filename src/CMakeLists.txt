file(GLOB sources "*.cpp")

foreach(source ${sources})
	get_filename_component(target ${source} NAME_WE)
	add_executable(${target} ${source})
	set_target_properties(${target} PROPERTIES
		RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)
endforeach()
