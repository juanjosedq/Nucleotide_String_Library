#ifndef HELIX_H
#define HELIX_H

#include "NucleoString.h"
#include "NucleoString.cpp"

#define FIRST 0
#define SECOND 1
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
        * you may use the macros FIRST or SECOND to decide which one to use as a base.
        */
        void fix(bool);
        /*! Returns the required NucleoString<DNA> as a new NucleoString<DNA> object.
        * you may use the macros FIRST or SECOND to decide which on you want to return.
        */
        NucleoString<DNA> getNucleoString(bool);
};
