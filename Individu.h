/**
 * @file Individu.h
 * @author Phillipe Lopistéguy
 * @brief Spécifie une classe Individu en relation réciproque avec sa Voiture
 * @version 0.1
 * @date 2022-8-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */



#ifndef INDIVIDU_H
#define INDIVIDU_H

using namespace std;

#include "Voiture.h" // Utilisée ci-dessous
#include <iostream>

class Voiture; /* Annonce une définition ultérieure de Voiture
                   permet de faire référence aux membres de Voiture dans la classe Individu */
/**
 * @brief hello
 * @details Au lieu de représenter une personne par son nom et son prénom, la classe Individu permet aussi de renseigner la Voiture qu'il conduit
 * 
 * La voiture associé à l'Individu est représenter par un pointeur de l'objet de la classe Voiture qui peut être nul si l'Individu ne possède pas de Voiture
 * 
 * @warning L'Individu ne conduit pas toujours une Voiture
 * 
 * @deprecated Utilise Personne à la place de ce truc 
 * 
 * @remark code légèrement modifié pour le tp doxygen
 */
class Individu
{
  
    // ATTRIBUTS
  public:
  /**
   * @brief 
   * 
   */
    string nom;         
    /**
     * @brief Le nom de l'individu
     * 
     */
    string prenom;
    /**
     * @brief 
     * 
     */
    Voiture *maVoiture;
    /**
     * @brief 
     * 
     */

    // MÉTHODES
  public:
    /**
     * @brief Construit un objet Individu, d'abord le nom puis du prénom
     *  
     */
    Individu(string = "", string = "");
    // destructeur
    /**
     * @brief Destruit l'objet Individu
     * 
     */
    ~Individu();

    // Méthodes usuelles : toString
    /**
     * @brief Affiche l'identité de l'individu
     * 
     * @return string, Affiche l'identité de l'individu, d'abord le nom puis le prénom
     * 
     * @todo choisir si on veut nom/prénom ou prénom/nom
     */
    string toString();
    /**
     * @brief Affiche l'identité de l'individu et de sa voiture s'il en a une
     * 
     * @return string, Affiche l'identité de l'individu et de sa voiture s'il en a une, d'abord le nom puis le prénom puis la voiture s'il en a une
     */
    string toStringAndLink();

    // Méthodes spécifiques
    void majMaVoiture(Voiture* voiture);
    /**
     * @brief Défini l'objet Voiture conduit par l'Individu
     * 
     * @param [in] voiture un pointeur vers l'objet Voiture conduit par l'Individu
     */
    void setMaVoiture(Voiture* voiture);
    void supprimerLien();
};

#endif // INDIVIDU_H