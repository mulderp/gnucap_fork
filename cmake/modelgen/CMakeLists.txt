set(RAW_SRCS
    mg_error.cc
    mg_in.cc
    mg_main.cc
    mg_out_common.cc
    mg_out_dev.cc
    mg_out_dump.cc
    mg_out_h.cc
    mg_out_lib.cc
    mg_out_model.cc
    mg_out_root.cc
)

list(TRANSFORM RAW_SRCS PREPEND ../../modelgen/)
add_executable(gnucap-modelgen ${RAW_SRCS})

target_link_libraries(gnucap-modelgen gnucap)

install(TARGETS gnucap-modelgen DESTINATION ${CMAKE_INSTALL_BINDIR})
