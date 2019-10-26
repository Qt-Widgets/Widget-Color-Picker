/*
* Copyright 2009 EMBITEL (http://www.embitel.com)
* 
* This file is part of Color Picker Project.
* 
* Color Picker is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation
* 
* Color Picker is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
* 
* You should have received a copy of the GNU General Public License
* along with Color Picker. If not, see <http://www.gnu.org/licenses/>.
*/


#include <QApplication>
#include "UseColorPickerDialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UseColorPickerDialog w;
    w.show();
    return a.exec();
}
