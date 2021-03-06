/*
    EIBD eib bus access and management daemon
    Copyright (C) 2005-2011 Martin Koegler <mkoegler@auto.tuwien.ac.at>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#ifndef C_TPUARTs_H
#define C_TPUARTs_H

#include "tpuartserial.h"

#define TPUARTs_URL "tpuarts:/dev/ttySx\n"

#define TPUARTs_DOC "tpuarts connects to the EIB bus over a TPUART (using a serial interface)\n\n"

#define TPUARTs_PREFIX "tpuarts"

#define TPUARTs_CREATE tpuarts_Create

inline Layer2Ptr 
tpuarts_Create (const char *dev, L2options *opt)
{
  return std::shared_ptr<TPUARTSerialLayer2Driver>(new TPUARTSerialLayer2Driver (dev, opt));
}

#endif
