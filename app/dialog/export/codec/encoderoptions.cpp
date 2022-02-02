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

#include <QComboBox>
#include <QGridLayout>
#include <QLabel>

#include "common/qtutils.h"
#include "encoderoptions.h"

namespace olive {


H264PresetSection::H264PresetSection(QWidget *parent) :
  QWidget(parent)
{
  QGridLayout* layout = new QGridLayout(this);
  layout->setMargin(0);

  int row = 0;

  layout->addWidget(new QLabel(tr("Encoding Preset:")), row, 0);

  QComboBox* preset_box_ = new QComboBox();

  // Codec Presets
  preset_box_->addItem(tr("ultrafast"));
  preset_box_->addItem(tr("superfast"));
  preset_box_->addItem(tr("veryfast"));
  preset_box_->addItem(tr("faster"));
  preset_box_->addItem(tr("fast"));
  preset_box_->addItem(tr("medium"));
  preset_box_->addItem(tr("slow"));
  preset_box_->addItem(tr("slower"));
  preset_box_->addItem(tr("veryslow"));
  

  layout->addWidget(preset_box_, row, 2);
  int cpresetvalue = 6;

  switch (cpresetvalue) {
  case 1:
    cpreset = "ultrafast";
    break;
  case 2:
    cpreset = "superfast";
    break;
  case 3:
    cpreset = "ultrafast";
    break;
  case 4:
    cpreset = "faster";
    break;
  case 5:
    cpreset = "fast";
    break;
  case 6:
    cpreset = "medium";
    break;
  case 7:
    cpreset = "slow";
    break;
  case 8:
    cpreset = "slower";
    break;
  case 9:
    cpreset = "veryslow";
    break;
  default:
    cpreset = "ERR";
    break;
}
 
}

char const* H264PresetSection::GetEncPreset()
{
  return cpreset;
}

DNXHDProfileSection::DNXHDProfileSection(QWidget *parent) :
  QWidget(parent)
{
  QGridLayout* layout = new QGridLayout(this);
  layout->setMargin(0);

  int row = 0;

  layout->addWidget(new QLabel(tr("Encoding Preset:")), row, 0);

  QComboBox* preset_box_ = new QComboBox();

  // Codec Profiles  dnxhr_444, dnxhr_hqx, dnxhr_hq, dnxhr_sq, dnxhr_lb, dnxhd.
  preset_box_->addItem(tr("dnxhr_444"));
  preset_box_->addItem(tr("dnxhr_hqx"));
  preset_box_->addItem(tr("dnxhr_hq"));
  preset_box_->addItem(tr("dnxhr_sq"));
  preset_box_->addItem(tr("dnxhr_lb"));
  preset_box_->addItem(tr("dnxhd"));

  layout->addWidget(preset_box_, row, 1);
  preset_box_->setCurrentIndex(4);

  cpresetvalue = 4;

  switch (cpresetvalue) {
  case 1:
    cpreset = "dnxhr_444";
    break;
  case 2:
    cpreset = "dnxhr_hqx";
    break;
  case 3:
    cpreset = "dnxhr_hq";
    break;
  case 4:
    cpreset = "dnxhr_sq";
    break;
  case 5:
    cpreset = "dnxhr_lb";
    break;
  case 6:
    cpreset = "dnxhd";
    break;
  default:
    cpreset = "ERR";
    break;
}
 
}

char const* DNXHDProfileSection::GetEncProfile()
{
  return cpreset;
}


}
