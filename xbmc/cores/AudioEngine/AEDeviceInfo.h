#pragma once
/*
 *      Copyright (C) 2005-2012 Team XBMC
 *      http://xbmc.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, write to
 *  the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 *  http://www.gnu.org/copyleft/gpl.html
 *
 */

#include <string>
#include <vector>
#include "Utils/AEChannelInfo.h"

typedef std::vector<unsigned int     > AESampleRateList;
typedef std::vector<enum AEDataFormat> AEDataFormatList;

enum AEDeviceType {
  AE_DEVTYPE_PCM,
  AE_DEVTYPE_IEC958,
  AE_DEVTYPE_HDMI
};

/**
 * This struct provides the details of what the audio output hardware is capable of
 */
typedef struct {
  std::string       m_deviceName;
  std::string       m_displayName;
  enum AEDeviceType m_deviceType;
  CAEChannelInfo    m_channels;
  AESampleRateList  m_sampleRates;
  AEDataFormatList  m_dataFormats;
} AEDeviceInfo;

typedef std::vector<AEDeviceInfo> AEDeviceInfoList;
