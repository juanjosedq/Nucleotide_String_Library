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

#ifndef Management_H
#define Management_H

#include "NucleoString.h"
#include "NucleoString.cpp"

#include <algo/blast/api/blast_types.hpp>
#include <objmgr/object_manager.hpp>
#include <algo/blast/api/objmgr_query_data.hpp>
#include <algo/blast/api/blast_options_handle.hpp>
#include <algo/blast/api/blast_nucl_options.hpp>
#include <algo/blast/blastinput/blast_fasta_input.hpp>
#include <algo/blast/blastinput/blast_input.hpp>

class Management{

	public:

		//! Constructor of the class Management, it is empty because this is a class of functions.
		/*!
		* Warning: You cannot create a management object, it doesn't exist.
		*/
		Management(void);
		//! NucleoString param constructor.
		/*!
		* Generates a vector of sequence locations "TSeqLocVector". FASTA format is a text-based format
		* for representing either nucleotide sequences or peptide sequences in which nucleotides or
		* amino acids are represented using single-letter codes
		*/	
		CRef<IQueryFactory> FetchQuerySequence(NucleoString<ARN>);
		//! Null param constructor.
		/*!
		* Select the options of target sequences "Data bases"
		* Warning: This function only is for BlastN data bases.
		*/
		CSearchDatabase FetchBlastNDataBases();
		//! Null param constructor.
		/*!
		* Select the options of target sequences "Data bases"
		* Warning: This function only is for MegaBlast data bases.
		*/
		CSearchDatabase FetchMegaBlastDataBases();
		//! Null param constructor.
		/*!
		* Set the options to values appropriate to common tasks
		* Warning: This function only is for BlastN data bases.
		*/
		CRef<CBlastOptionsHandle> FetchOptionsBlastN();
		//! Null param constructor.
		/*!
		* Set the options to values appropriate to common tasks
		* Warning: This function only is for MegaBlast data bases.
		*/
		CRef<CBlastOptionsHandle> FetchOptionsMegaBlast();

		txt(string, NucleoString)
		/*! 
		*This function generates a text from a NucleoString. with a title in the first line and then the 
		*/
		loadString(string file)
		/*!
		This function generates a string from a textfile. Warning: This function doesn't read the first line cause it might be the title
		*/

#endif // Management_H	
