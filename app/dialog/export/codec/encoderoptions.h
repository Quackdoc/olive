/***

  Olive - Non-Linear Video Editor
  Copyright (C) 2021 Olive Team

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.

***/

#ifndef ENCODEROPTIONS_H
#define ENCODEROPTIONS_H


#include <QComboBox>
#include <QObject>

#include "codecsection.h"
#include "common/define.h"


namespace olive {

class H264PresetSection : public QWidget
{
  Q_OBJECT
  public:
    H264PresetSection(QWidget* parent = nullptr);
    char const* GetEncPreset();

  private:
    QComboBox* preset_box_;
    const char *cpreset;

};


class DNXHDProfileSection : public QWidget
{
  Q_OBJECT
  public:
    DNXHDProfileSection(QWidget* parent = nullptr);
    char const* GetEncProfile();

  private:
   QComboBox* preset_box_;
   const char *cpreset;
   int cpresetvalue;
};

}

#endif