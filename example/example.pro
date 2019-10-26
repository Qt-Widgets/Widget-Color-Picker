TEMPLATE = app
INCLUDEPATH += .

QT += widgets

include(../src/WidgetColorPicker.pri)

# Input

TARGET = UseColorPickerDialog
HEADERS += UseColorPickerDialog.h \		
			
FORMS += UseColorPickerDialog.ui
SOURCES += Main.cpp \
		UseColorPickerDialog.cpp
