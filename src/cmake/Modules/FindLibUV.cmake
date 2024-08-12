if (LIBUV_INCLUDE_DIR AND LIBUV_LIBRARIES)
  # Already in cache, be silent
  set(LIBUV_FIND_QUIETLY TRUE)
endif (LIBUV_INCLUDE_DIR AND LIBUV_LIBRARIES)

find_path(LIBUV_INCLUDE_DIR NAMES uv.h)
find_library(LIBUV_LIBRARIES NAMES uv REQUIRED)
MESSAGE(STATUS "LIBUV: " ${LIBUV_LIBRARIES})

include(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(LibUV DEFAULT_MSG LIBUV_INCLUDE_DIR LIBUV_LIBRARIES)
mark_as_advanced(LIBUV_INCLUDE_DIR LIBUV_LIBRARIES)
