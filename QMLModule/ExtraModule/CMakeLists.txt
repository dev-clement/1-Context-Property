qt_add_library(extra_module STATIC)
qt_add_qml_module(extra_module
    URI "ExtraModule"
    VERSION 0.1
    QML_FILES
        qml/Extra.qml
    SOURCES
        src/extrathing.cpp
        src/cppworker.cpp
        inc/extrathing.hpp
        inc/cppworker.hpp
    RESOURCE_PREFIX /
)
