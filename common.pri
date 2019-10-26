infile(config.pri, SOLUTIONS_LIBRARY, yes): CONFIG += WidgetColorPicker-uselib
TEMPLATE += fakelib
WIDGETCOLORPICKER_LIBNAME = $$qtLibraryTarget(WidgetColorPicker-1.0)
TEMPLATE -= fakelib
WIDGETCOLORPICKER_LIBDIR = $$PWD/lib
unix:WidgetColorPicker-uselib:!WidgetColorPicker-buildlib:QMAKE_RPATHDIR += $$WIDGETCOLORPICKER_LIBDIR
