#include "Management.hh"
int main(){
    CSearchDatabase database1;
    CRef<CBlastOptionsHandle> ohandle;
    CRef<IQueryFactory> crf;
    Management manage;
    string file;
    NucleoString<ADN> nucleotid;
    Helix dna;
    file = "file.txt";
    nucleotid = manage.loadnucleotid(file);
    crf = manage.FetchQuerySequence(nucleotid);
    database1 = manage.FetchBlastNDataBases();
    ohandle = manage.FetchOptionsBlastN();
    CRemoteBlast remote(crf,ohandle,database1);
    CSearchResultSet results = *remote.Run();
    return 0;
}
