set(ch7_SRCS
    ch7.cpp
)

ecm_qt_declare_logging_category(ch7_SRCS
    HEADER debug.h
    IDENTIFIER PLUGIN_CH7
    CATEGORY_NAME "kdevelop.plugins.ch7"
)

kdevplatform_add_plugin(ch7
    JSON ch7.json
    SOURCES ${ch7_SRCS}
)

target_link_libraries(ch7
    KDev::Interfaces
)
