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

