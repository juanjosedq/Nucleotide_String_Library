/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 *
 */

#ifndef HELIX_H
#define HELIX_H

#include "NucleoString.h"
#include "NucleoString.cpp"

#define FIRST 0
#define SECOND 1

typedef bool WHICH

class Helix{
    private:
        NucleoString<DNA> first;
        NucleoString<DNA> second;
    public:
        //!No param constructor.
        /*!
        * Creates 2 new NucleoString<DNA> objects, with no input string.
        */
        Helix(void);
        //! string param constructor.
        /*!
        * Creates a new NucleoString<DNA> from a DNA character string. It then creates
        * its complement, by using the funcition and stores both in a Helxi object.
        */
        Helix(string);
        //! NucleoString<DNA> param constructor.
        /*!
        * Creates a new NucleoString<DNA> by getting the complement using the NucleoString<DNA>::complement()
        * function and stores both in a Helix object.
        */
        Helix(NucleoString<DNA>);
        //! NucleoString<DNA> dual param constructor.
        /*!
        * Creates a Helix object by setting both of the NucleoString<DNA> chains.
        * Warning: You may end up creating a invalid Helix as this constructor won't check if they are compatible
        * chains.
        */
        Helix(NucleoString<DNA>,NucleoString<DNA>);
        /*! Fixes the current Helix by using one of the NucleoStrings<DNA> as a base.
        * you may use the macros FIRST or SECOND to decide which one to fix. (It will use the other one as base)
        */
        void fix(WHICH);
        /*! Returns the required NucleoString<DNA> as a new NucleoString<DNA> object.
        * you may use the macros FIRST or SECOND to decide which on you want to return.
        */
        NucleoString<DNA> getNucleoString(WHICH);
};
