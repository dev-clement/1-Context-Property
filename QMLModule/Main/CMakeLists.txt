qt_add_executable(main
    src/main.cpp
)

target_link_libraries(main
    PRIVATE Qt6::Quick
    PUBLIC extra_moduleplugin
    PUBLIC app_moduleplugin
)

include(GNUInstallDirs)
install(TARGETS main
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
