/*

L'objectif de cet exercice est d'améliorer la compréhension des variables et du code d'un programme qui gére les notes des étudiants.

*/



#include<iostream>

using namespace std;

class Etudiant
{
    int matricule;
    string nom;
    int nbrNotes;
    float *tabNotes;
    static int n;
    
    public:
    	
    Etudiant()
    {
    	matricule=0;
        nom="";
        nbrNotes=0;
        tabNotes=new float[nbrNotes];
    }
    
    Etudiant(string nome,int nb)
    {
        n++;
        matricule=n;
        nom=nome;
        nbrNotes=nb;
        tabNotes=new float[nbrNotes];
    }
    
    ~Etudiant()
    {
        delete[]tabNotes;
    }
    
    Etudiant(const Etudiant & E)
    {
        matricule=E.matricule;
        nom=E.nom;
        nbrNotes=E.nbrNotes;
        tabNotes=new float[nbrNotes];
        for(int i=0;i<nbrNotes;i++)
        {
            tabNotes[i]=E.tabNotes[i];
        }        
    }
    
    int getMatricule()
    {
        return matricule;
    }
    
    string getNom()
    {
        return nom;
    }
    
    int getNbNotes()
    {
        return nbrNotes;
    }
    
    void setNom(const string & n)
    {
        nom = n;
    }
    
    void saisie()
    {
    	cout << "Saisie des notes : " << endl;
        for(int i=0;i<nbrNotes;i++)
        {
        	cout << "Donner la note " << i+1 << " : ";
            cin>>tabNotes[i];
        }
    }
    
    void affichage()
    {
        cout << "- Matricule : " << matricule << endl
		<< "- Nom : " << nom << endl
		<< "- Nombre de notes : " << nbrNotes << endl
		<< "- Notes : " << endl;
        for(int i=0;i<nbrNotes;i++)
        {
            cout << tabNotes[i] << "\t";
        }
        cout << endl;
    }
    
    float moyenne()
    {
        float s=0;
        for(int i=0;i<nbrNotes;i++)
        	s = s + tabNotes[i];
        	
        return s / nbrNotes;
    }
    
    bool admis()
    {
        return (moyenne()>=10);
    }
    
    bool comparer(Etudiant E)
    {
        return (moyenne()==E.moyenne());
    }
};

//Intialisation du membre statique
int Etudiant::n	= 0;

int main()
{
    Etudiant E("etud1",3);
    cout << "Creation d'un objet Etudiant E avec 3 notes" << endl;
    E.saisie();
    cout << "Affichage de l'etudiant E:" << endl;
    E.affichage();
    cout << endl;
    cout << "Copie de l'etudiant E dans E1" << endl;
    Etudiant E1(E);
    cout<<"L'affichage de l'etudiant E1:"<<endl;
    E1.affichage();
    cout << endl;
    Etudiant E2("etud2",2);
    cout << "Creation d'un objet Etudiant E2 avec 2 notes" << endl;
    E2.saisie();
    cout << endl << "Appel des getters :" << endl;
    cout<<"Le matricule de l'etudiant E2 : " << E2.getMatricule() << endl;
    cout<<"Le nom de l'etudiant E2 : " << E2.getNom() << endl;
    cout<<"Le nombre de notes de l'etudiant E2 : " << E2.getNbNotes() << endl;

    cout << endl <<"La moyenne de l'etudiant E est : " << E.moyenne() << endl;
    
    if(E.admis())
    {
        cout<<"l'etudiant E est admis "<<endl;
    }
    else
    {
        cout<<"l'etudiant E n'est pas admis "<<endl;
    }
    
    if(E.comparer(E2))
    {
        cout<<"Les Etudiants E et E2 ont la meme moyenne "<<endl;
    }
    else
    {
        cout<<"Les Etudiants E et E2 n'ont pas la meme moyenne "<<endl;
    }
    
    return 0;
}
