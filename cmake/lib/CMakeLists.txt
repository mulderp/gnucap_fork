readVariable("../../lib/Make1" "RAW_SRCS" "RAW_SRCS")

list(TRANSFORM RAW_SRCS PREPEND ../../lib/)

# message(STATUS "===========TEST===============")
# message(STATUS "RAW ${RAW_SRCS}")
# message(STATUS "===========END TEST===============")


add_library(gnucap SHARED
	${RAW_SRCS}
)


#target_link_libraries(gnucap ${DL_LIBRARIES} ${READLINE_LIBS})
# TODO: switch readline or linenoise
target_link_libraries(gnucap ${DL_LIBRARIES} )

set_target_properties(gnucap PROPERTIES INSTALL_NAME_DIR ${CMAKE_INSTALL_FULL_LIBDIR})

install(TARGETS gnucap DESTINATION ${CMAKE_INSTALL_LIBDIR})
