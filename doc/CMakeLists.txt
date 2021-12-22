include("${CMAKE_SOURCE_DIR}/cmake/UseLATEX.cmake")

SET(LATEX_OUTPUT_PATH build)

file(GLOB LATEX_SRC
    "${CMAKE_SOURCE_DIR}/doc/*.tex"
)
foreach(file ${LATEX_SRC})
    get_filename_component(fl ${file} NAME)
    set(LATEX_CONTENTS ${LATEX_CONTENTS} ${fl})
endforeach()


message(STATUS "Found latex: ${LATEX_CONTENTS}")

add_latex_document(
    master.tex
    INPUTS ${LATEX_CONTENTS}
    IMAGE_DIRS images
    # USE_INDEX
    USE_GLOSSARY
)
