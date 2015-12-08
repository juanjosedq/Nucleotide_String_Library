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

#ifndef NUCLEOSTRING_H
#define NUCLEOSTRING_H

#include <string>
#include <iostream>
#include <fstream>

#define DNA 0
#define RNA 1
#define ADN 0
#define ARN 1

typedef bool NTYPE;// Nuclotid Type
typedef char NBASE; //NitroBase

using namespace std;

template<NTYPE ANN>
//! NucleoString Class.
/*! This class implements a single DNA or RNA chain.
*/
class NucleoString{
    private:
        /*! Store de header form a FASTA file, so you can access the files as a fasta
        */
        string header;
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
        * Acts like a copy constructor if the type matches(Both of them are RNA chains). If not
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
        //! Return the Nucleotid String as an string of nucleobases for the current NucleoString
        string chainret(void);//Falta Implementar
        //! Return the character value of the i nucleobase of the string.
        NBASE operator[](void);//Falta Implementar.
        //! Finds and creates a new NucleoString based on the complement of this NucleoString.
        /*!
        * This only creates the complement of the same type of NucleoString. If you want to create
        * the complement in the transcription way (RNA -> DNA or DNA--> RNA) you should use the transcript function
        */
        NucleoString<ANN> complement(void);//falta implementar
        //! Finds and creates a new NucleoString based on the transcript form of this NucleoString.
        /*!
        * This creates the complement of the diferent type of NucleoString. if you want to create
        * the complement in the standard way (DNA-> DNA or RNA-> RNA) you should use the complement funciton
        */

        NucleoString<!ANN> transcript(void);
	//! Transcripts a sequences of nucleotides into a RNA if it is a DNA or DNA if it is a ARN.
	


        //! Returns the value of the FASTA format Nucleotid String
        string NucleoString<ANN> getfasta(void);
        //! Returns the header of the equivalent FASTA format String
        NucleoString<ANN> headerret(void);

	//!Cut a NucleoString from the point a to the point b
        NucleoString<ANN>  cut(int n1, int n2);
	

        //! Concatenates 2 NucleoStrings together and create a new NucleoString containing both.
        NucleoString<ANN> operator+(NucleoString<ANN>);

	//! Compare how similar are two nucleotide sequences one from other. It returns the percentage of similitude between 0 to 1.
	int compare(NucleoString nucleo1,NucleoString nucleo2);

};


#endif // NUCLEOSTRING_H
