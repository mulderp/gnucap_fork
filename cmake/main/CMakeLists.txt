
set(RAW_SRCS main.cc)
list(TRANSFORM RAW_SRCS PREPEND ../../main/)
include_directories(${GENERATED_HEADER_DIR}/main)
add_executable(gnucap-ui ${RAW_SRCS})
set_target_properties(gnucap-ui PROPERTIES OUTPUT_NAME "gnucap")
target_link_libraries(gnucap-ui gnucap)

install(TARGETS gnucap-ui RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
