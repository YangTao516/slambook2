set(ch6_SRCS
    ch6.cpp
)

ecm_qt_declare_logging_category(ch6_SRCS
    HEADER debug.h
    IDENTIFIER PLUGIN_CH6
    CATEGORY_NAME "kdevelop.plugins.ch6"
)

kdevplatform_add_plugin(ch6
    JSON ch6.json
    SOURCES ${ch6_SRCS}
)

target_link_libraries(ch6
    KDev::Interfaces
)
