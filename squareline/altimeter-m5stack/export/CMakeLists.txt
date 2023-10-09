SET(SOURCES screens/ui_MAIN_PAGE.c
    screens/ui_ALT_Plot.c
    screens/ui_MENU.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    fonts/ui_font_Font12.c
    fonts/ui_font_Font16.c
    fonts/ui_font_Font20.c
    fonts/ui_font_Font22.c
    fonts/ui_font_Font24.c
    fonts/ui_font_Font26.c
    fonts/ui_font_Font30.c
    fonts/ui_font_Font42.c)

add_library(ui ${SOURCES})
