readVariable("../../include/Make1" "RAW_HDRS" "HEADERS")
list(TRANSFORM HEADERS PREPEND ../../include/)
install(FILES
	 ${HEADERS}
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/gnucap
)
