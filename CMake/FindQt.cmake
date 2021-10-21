# If needed
set(CMAKE_AUTOMOC ON)
if(APPLE)
    find_package(Qt6
                    COMPONENTS Widgets 
                    REQUIRED
                    PATHS "/Users/amirnourinia/Library/Qt/6.2.0/macos/lib/cmake/Qt6"
    )
endif(APPLE)