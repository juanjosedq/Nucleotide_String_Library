#ifndef AminoString_H
#define AminoString_H

#include "NucleoString.h"            
#include "NucleoString.cpp" 


class AminoString{
    private:
	// Mysql o .txt ??
        NucleoString<DNA> ;
	NucleoString<RNA> ;
	String Aminoacidos ;

    public:
	AminoString(NucleoString<RNA>)
        //! NucleoString<RNA> param constructor.
        /*!
        * Creates a String of Amino acids by getting the corresponding amino acids of each triad of nitrogenous bases.
        * Warning: You may have the respective database of amino acids and its correspondig triad.
        */

	AminoString(NucleoString<DNA>)
        //! NucleoString<DNA> param constructor.
        /*!
        * Creates a String of Amino acids by getting the respective RNA String and the translate it to the correspondig
	* amino acids of each triad of nitrogenous bases.
        * Warning: You may have the respective database of amino acids and its correspondig triad.
        */
	
	AminoString(String) ;
        //! String Aminoacidos param constructor.
        /*!
        * Creates a AminoString using a string of amino acids.
        */

