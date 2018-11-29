#include "consult.h"
#include <iostream>
//Il y a trois fonctions

void consult_dossier()
{
	int choix; string nom; string prenom; string specialite;
	do {
			cout << "1 : Consultation des dossiers patients\n" << endl;
			cout << "2 : Consultation des dossiers médecins\n\n" << endl;
			cin >> choix;
			if ((choix!=1) && (choix!=2)) {
				cout << "Veuillez saisir 1 ou 2 pour consulter les dossiers des patients ou des médecins\n" << endl;
			}
	} while((choix!=1) && (choix!=2))
	//relance la demande de choix s'il y a eu une mauvaise saisie
	if (choix==1) {
		afficher_info_patient();
	} else {
		afficher_info_medecin();
	}
}

void afficher_info_patient()
{
		cout << "Entrez le nom et le prénom du patient" << endl;
		cin >> nom; cin >> prenom;
		//int nb;
		//nb=rechercher(0,nom);
		//if (nb>0) {
			if (nb==1) {
				//		afficher_patient(nom)		...afficher directement les infos du patient sans avoir besoin d'entrer le prénom
				//			-afficher : nom,prénom,date_naissance,n°_tel,n°_secu,grp_sanguin,médecin_traitant
				//			-voulez-vous consulter le/les ordonnances ? : oui/non		...les ordonnances sont triées de la plus récente à la plus ancienne
				//			-voulez-vous consulter le/les rdv (passés, à venir) ? : oui/non ...les rdv sont triées du plus récent/futur au plus ancien
			} else {
				string prenom;
				cout << "Entrez le prénom du patient" << end;
				cin >> prenom;
				nb=rechercher(1,prenom);
				if (nb==0) {
					cout << "Il n'y a aucun patient s'appellant " << prenom << " " << nom << " dans nos dossiers.\nVeuillez réitérer la saisie." << endl;
				} else {
					//		afficher_patient(nom,prenom)
					//			... comme en haut : afficher, voulez-vous ordonnances ?, voulez-vous rdv ?
				}

			}
		} else {
			cout << "Il n'y a aucun patient portant le nom " << nom << " dans nos dossiers.\nVeuillez réitérer la saisie." << endl;
		}
	}

void afficher_info_medecin()
{
		cout << "Entrez le nom du médecin" << endl;
		cin >> nom;
		int nb;
		nb=rechercher(0,nom);
		if (nb>0) {
			if (nb==1) {
				//		afficher_medecin()		...afficher directement les infos du médecin sans avoir besoin d'entrer le prénom
				//			-afficher : nom,prénom,spécialité
				//			-voulez-vous consulter le/les rdv (passés, à venir) ? : oui/non ...les rdv sont triées du plus récent/futur au plus ancien
			} else {
				string specialite;
				cout << "Entrez la spécialité du médecin" << end;
				cin >> specialite;
				nb=rechercher(2,specialite);
				if (nb==0) {
					cout << "Il n'y a aucun médecin portant le nom " << nom << " et étant " << specialite << " dans nos dossiers.\nVeuillez réitérer la saisie." << endl;
				} else {
					//		afficher_medecin()
					//			... comme en haut : afficher, voulez-vous rdv ?
				}
			}
		} else {
			cout << "Il n'y a aucun médecin portant le nom " << nom << " dans nos dossiers.\nVeuillez réitérer la saisie." << endl;
		}
}

int rechercher(int cat, string pre_nom_spe) // si le nom, le prénom ou la spécialité existe (sans prendre en compte la casse)
//retourne le nombre de fois que nom/prénom/spécialité est trouvé
{
	int nb;
	switch (cat) {
		case 0:
			string nom;
			nom=pre_nom_spe;
			recherche(nom);//à faire
			return nb;
			break;
		case 1:
			string prenom;
			prenom=pre_nom_spe;
			recherche(prenom);//à faire
			return nb;
			break;
		case 2:
			string specialite;
			specialite=pre_nom_spe;
			recherche(specialite);//à faire
			return nb;
			break;
	}
}
