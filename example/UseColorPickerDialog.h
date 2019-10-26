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


#ifndef __USECOLORPICKERDIALOG_H_
#define __USECOLORPICKERDIALOG_H_

#include <QDialog>
#include "ui_UseColorPickerDialog.h"
class WidgetColorPicker;

class UseColorPickerDialog : public QDialog , public Ui::UseColorPickerDialog
{
    Q_OBJECT
    
    public:
        UseColorPickerDialog(QWidget *parent = 0);
        ~UseColorPickerDialog();
        
    private slots:
        void on_colorPicker_colorSelectionChanged(QColor color);
};

#endif  /*__USECOLORPICKERDIALOG_H_*/
