add_library(libsel4assert STATIC
    src/sel4_assert.c
)

target_compile_definitions(libsel4assert
    PUBLIC HAVE_SEL4_ASSERT
)

target_link_libraries(libsel4assert
    libsel4
    libsel4startstop
    libsel4printf)
