
add_executable(MakeTable MakeTable.cpp)
add_custom_command(
    OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/Table.h
    COMMAND MakeTable ${CMAKE_CURRENT_BINARY_DIR}/Table.h
    DEPENDS MakeTable
)

add_library(MathFunctions MathFunctions.cpp ${CMAKE_CURRENT_BINARY_DIR}/Table.h)
target_include_directories(MathFunctions
    INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
    PRIVATE ${CMAKE_CURRENT_BINARY_DIR}
    )

    

# include(CheckCXXSourceCompiles)
# check_cxx_source_compiles("
#     #include <cmath>
#     int main() {
#         std::log(0);
#         return 0;
#     }
# " HAVE_LOG)

# check_cxx_source_compiles("
#     #include <cmath>
#     int main(){
#         std::exp(1.0);
#         return 0;
#     }" HAVE_EXP)

# if(HAVE_LOG AND HAVE_EXP)
#     target_compile_definitions(MathFunctions PRIVATE "HAVE_LOG" "HAVE_EXP")
# endif()



install(TARGETS MathFunctions DESTINATION bin)
install(FILES MathFunctions.h DESTINATION include)