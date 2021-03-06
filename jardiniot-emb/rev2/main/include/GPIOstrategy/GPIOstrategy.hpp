// Copyright (C) 2020      Vincent Perrier
//
// JardinIoT is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// JardinIoT is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with JardinIoT.  If not, see <http://www.gnu.org/licenses/>.

#ifndef GPIOSTRATEGY_H
#define GPIOSTRATEGY_H

#include <functional>
#include <iostream>
class GPIOstrategy {
  public:
    virtual ~GPIOstrategy( ) = 0;
    virtual bool initialize( ) = 0;
    virtual bool read( int gpio ) = 0;
    virtual int read_analog( int gpio ) = 0;
    virtual bool write( int gpio, bool state ) = 0;
    virtual bool write_analog( int gpio, int state ) = 0;
    virtual bool attach_interrupt( int gpio, std::function<void( void )> ) = 0;

  private:
};

#endif