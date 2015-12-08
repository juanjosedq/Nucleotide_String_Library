#include "Management.hh"


//Funcion constructora va vacia pero no se si hay que establecerla...
Management::Management(){
{

CRef<IQueryFactory> Management::FetchQuerySequence(NucleoString<ADN> Nucleotxt){

	// Verificar que realmente deba entrar un nucleo String o usar la funcion get.fasta o usar el constructor de CBlastFastaInputSource
	// que recibe un txt para no complicarse la vida
	String user_input = Nucleotxt.getfasta();

	// El primer parámetro es un bool que indica que solo se leeran proteinas por lo cual irá falso, segundo argumento son las opciones
	// que se pueden ver en: http://www.ncbi.nlm.nih.gov/IEB/ToolBox/CPP_DOC/doxyhtml/structSDataLoaderConfig.html#af6c625b5340111f52d5b85183dc9b9f2
    	SDataLoaderConfig dlconfig(false, eDefault);   
	
    	CBlastInputSourceConfig iconfig(dlconfig);

	//Genera un CBlastFastaInputSource necesario para el CBlastInput, lo genera a partir de un string 
    	CBlastFastaInputSource fasta_input( user_input, iconfig); 

	// Genera a partir de fasta_input un CBlastInput necesario para crear el TSeqLocVector
	CBlastInput blast_input(&fasta_input); 

	// objmgr = Object Manager instance [in]
	CScope scope(*objmgr);

	//Funcion de la clase CBlastInput, scope es una variable definida en http://www.ncbi.nlm.nih.gov/IEB/ToolBox/CPP_DOC/lxr/source/src/misc/discrepancy_report/cDiscRep_config.cpp#L61	  
	TSeqLocVector query_loc = blast_input.GetAllSeqLocs(scope); 

	 CRef<IQueryFactory> query_factory(new CObjMgr_QueryFactory(query_loc));
	// Este ultimo hay que estudiarlo porque si es asi ya no devolveria un TSeqLocVector sino un CRef por lo que habria que cambiar eso
	// la idea de que esta funcion este aqui tambies es para que se genere el argumento sin tener que llamar a funciones de blast 	
	// innecesarias en el main

	return query_factory;
}

CSearchDatabase Management::FetchBlastNDataBases(){
	// El primero argumento es el nombre de la base de datos.	
	// El segundo argumento es un EMoleculeType que representa el tipo de molecula, en este caso nucleotidos.
	const CSearchDatabase target_db(eBlastN, eBlastDbIsNucleotide); 
	return target_db;
}

CSearchDatabase Management::FetchMegaBlastDataBases(){
	// El primero argumento es el nombre de la base de datos.	
	// El segundo argumento es un EMoleculeType que representa el tipo de molecula, en este caso nucleotidos.
	const CSearchDatabase target_db(eMegablast, eBlastDbIsNucleotide); 
	return target_db;
}

CRef<CBlastOptionsHandle> Management::FetchOptionsBlastN(){
	CRef<CBlastOptionsHandle> opts(CBlastOptionsFactory::Create(eBlastN));
	return opts;
}

CRef<CBlastOptionsHandle> Management::FetchOptionsMegaBlast(){
	CRef<CBlastOptionsHandle> opts(CBlastOptionsFactory::Create(eMegablast));
	return opts;
}
void management:txt(string titulo, NucleoString){
	ofstream fs(titulo".txt");
	fs <<">"titulo"\n" << endl;
	fs << NucleoString << endl; 
}


management:loadString(string file){
	ifstream fe(file".text");
	fe.getline(fe,line);
	string nucleotide = fe.getline(fe,line);
	return nucleotide;
}

http://www.ncbi.nlm.nih.gov/IEB/ToolBox/CPP_DOC/lxr/ident?i=Blast_QueryIsNucleotide  //definicion de Blast_QueryIsNucleotide

