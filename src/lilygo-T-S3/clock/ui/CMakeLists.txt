SET(SOURCES screens/ui_Screen1.c
    ui.c
    ui_helpers.c
    images/ui_img_sls_logo_png.c
    fonts/ui_font_clock_60.c)

add_library(ui ${SOURCES})
