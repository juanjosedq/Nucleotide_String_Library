#include "Management.hh"


//Funcion constructora va vacia pero no se si hay que establecerla...

NucleoString<>::FetchNucleotido(NucleoString Nucleotxt){

	String fasta = Nucleotxt.getfasta()
	const bool is_nucleotide = !!Blast_QueryIsNucleotide(opts->GetOptions().GetProgramType());
	SDataLoaderConfig dlconfig(is_nucleotide);
	CBlastInputSourceConfig iconfig(dlconfig);

	CBlastFastaInputSource Nucleotxtfasta = CBlastFastaInputSource(fasta, ifconfig);
}


http://www.ncbi.nlm.nih.gov/IEB/ToolBox/CPP_DOC/lxr/ident?i=Blast_QueryIsNucleotide  //definicion de Blast_QueryIsNucleotide
