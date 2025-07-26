qt_add_library(app_module STATIC)

qt_add_qml_module(app_module
    URI "App"
    VERSION 0.1
    QML_FILES
        qml/Main.qml
    SOURCES
        src/onething.cpp
        inc/onething.hpp
    RESOURCE_PREFIX /
)


