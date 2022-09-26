
include(GNUInstallDirs)

add_library(animal STATIC animal.cpp)

target_include_directories(animal
	PUBLIC 
	"$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>"
	"$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>"
	)

install(TARGETS animal
	EXPORT animalTargets
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	ARCHIVE DESTINATION ${CAMKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	INCLUDES DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
	)

install(FILES animal.h DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

include(CMakePackageConfigHelpers)
configure_package_config_file(${CMAKE_CURRENT_SOURCE_DIR}/Config.cmake.in
	"${CMAKE_CURRENT_BINARY_DIR}/animalConfig.cmake"
	INSTALL_DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/animal)

set(version 3.4.1)

set_property(TARGET animal PROPERTY VERSION ${version})
set_property(TARGET animal PROPERTY SOVERSION 3)
set_property(TARGET animal PROPERTY INTERFACE_animal_MAJOR_VERSION 3)
set_property(TARGET animal APPEND PROPERTY COMPATIBLE_INTERFACE_STRING animal_MAJOR_VERSION)

write_basic_package_version_file(
	"${CMAKE_CURRENT_BINARY_DIR}/animalConfigVersion.cmake"
	VERSION "${version}"
	COMPATIBILITY AnyNewerVersion)

install(FILES
	"${CMAKE_CURRENT_BINARY_DIR}/animalConfig.cmake"
	"${CMAKE_CURRENT_BINARY_DIR}/animalConfigVersion.cmake"
	DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/animal)

	


