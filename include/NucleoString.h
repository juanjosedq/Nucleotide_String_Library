#ifndef NUCLEOSTRING_H
#define NUCLEOSTRING_H

#include <string>
#include <iostream>
#include <fstream>

#define DNA 0
#define RNA 1
#define ADN 1
#define ARN 1
using namespace std;
template<bool ANN>
//! NucleoString Class.
/*! This class implements a single DNA or RNA chain.
*/
class NucleoString{
    private:
        /*! Store the chain as an string chain which only accepts the correct values.
        * (AaCcTtGg for DNA chains and AaCcUuGg for RNA chains).
        */
        string chain;
    public:
        //! No param constructor.
        /*!
        / Sets chain as a string with no characters.
        */
        NucleoString(void);
        //! string param constructor
        /*!
        * Sets the input string to the chain. Program will halt executing an exception if
        * the strings values are not valid for the Nuclotid Chain (DNA or RNA).
        */
        NucleoString(string);
        //! copy constructor
        /*!
        * Creates a equal Nucleotid String from a already existing one.
        */
        NucleoString(const NucleoString<ANN> &);
        //! NucleoString<RNA> param constructor.
        /*!
        * Acts like a copy constructor if the type matches(Both of them are ARN chains). If not
        * it will create a new DNA chain by finding the RNA's transcription.
        * Warning: You may end up creating a DNA chain from a RNA chain if you're not careful enough.
        */
        NucleoString(NucleoString<RNA>);
        //! NucleoString<DNA> param constructor.
        /*!
        * Acts like a copy constructor if the type matches(Both of them are DNA chains). If not
        * it will create a new RNA chain by finding the DNA's transcription.
        * Warning: You may end up creating a DNA chain from a RNA chain if you're not careful enough.
        */
        NucleoString(NucleoString<DNA>);
};

#endif // NUCLEOSTRING_H
