<img width="2000" height="1000" alt="image" src="https://github.com/user-attachments/assets/00986536-90ae-4ee7-98d8-0b8b75bb56c2" />


## 🎮 Description

Les **Modules C++** ont pour but d’enseigner les principes de la programmation orientée objet (POO), tout en approfondissant
la syntaxe et les concepts fondamentaux du C++. Chaque module introduit un nouvel aspect du langage, en suivant une progression
logique : de la transition depuis le C vers le C++, jusqu’aux notions avancées. L’objectif final est d’acquérir une compréhension
solide des bases du C++ afin d’écrire un code structuré, clair et conforme aux bonnes pratiques du language C++.

Les **Modules C++** sont séparés en deux parties, la 1ère partie (CPP00 à CPP04) dans le rank04 et la 2ème partie (CPP05 à CPP09)
dans le rank05.

---

## 🧩 CPP00
Le module **CPP00** introduit la syntaxe de base du C++ et la notion de classe.

### Exercice 00 : Megaphone
Cet exercice consiste à écrire un programme simple qui prend les arguments de la ligne de commande et affiche le texte en majuscules
sur la sortie standard. Si aucun argument n'est donné en ligne de commande, le programme affiche les message suivant :
"* LOUD AND UNBEARABLE FEEDBACK NOISE *".
L'objectif est de se familiariser avec la structure d’un programme C++ et de nous introduire la syntaxe de base d’un programme C++
avec différents concepts tels que : `<iostream>`, `std::cout`, `std::endl` ou encore `std::toupper()`. 

### Exercice 01 : My Awesome PhoneBook
Cet exercice permet d'implémenter un petit carnet d'adresses en ligne de commande. Ce carnet d'adresses peut contenir jusqu'à 8 contacts avec leurs informations (first name, last name, nickname, phone number and darkest secret).
Cet exercice nous introduit de nouveaux concept du C++ tel que l'utilisation des classes: `public`/`private`, `this`, `std::set`, `std::get` ou encore la gestion d'objets dans un tableau, la portée des variables, les accesseurs.

### Exercice 02 : The Job Of Your Dream (bonus)
Cet exercice est un exercice bonus et donc non obligatoire pour rendre le module CPP00. Il simule un système de comptes bancaires, où
chaque compte est un objet indépendant, mais où certaines informations globales sont partagées. L'exercice vise à appronfondir la conception d'une classe en C++ en introduisant la gestion de données partagées entre plusieurs instances, il faut comprendre la différence entre:
    - Les attributs d'instance (propres à chauqe objet)
    - Les attributs de classe (communs à toutes les instances)
Cet exercice est plus complexe que les 2 précédents, il met en évidence la portée et la responsabilité des données dans un programme orienté
objet.

---

## 🧠 CPP01
Le module **CPP01** introduit de nouveaux conpcepts du C++ tel que : l'allocation de mémoire, les pointeurs vers les membres, les références ou encore les instructions switch.

### Exercice 00 : BraiiiiiiinnnzzzZ
Cet exercice consiste à comnprendre la différence entre l'allocation sur la pile (stack) et sur le tas (heap), et quand utiliser l'un ou l'autre.
Il faut créer plusieurs objets de classe `Zombie`, en utilisant les 2 différente fonctions : `newZombie` et `randomChump`, ce qui nous permet d'utiliser les 2 différentes
méthodes d'allocation de mémoire. Ce qui nous permet également d'apprendre é utiliser `new`/`delete`, pour également comprendre la durée de vie des objets.

### Exercice 01 : Moar brainz!
Cet exercice approfondit la gestion de mémoire dynamique en C++ en introduisant l'allocation multiple avec `new[]` et la libération correspondante avec `delete[]`. Il met en évidence la différence entre une allocation unique et un tableau dynamique d'objets, ainsi que l'importance des contructeurs par défaut et de la durée de vie des objets sur la heap. 

### Exercice 02 : HI THIS IS BRAIN
Cet exercice a pour but de clarifier les références en C++ en le comparant directment aux pointeurs. Il montre que variables, pointeurs et références peuvent désigner la même adresse mémoire, tout en mettant en lumière les différences de syntaxe, de contraintes et d'utilisation entre pointeurs et références.

### Exercice 03 : Unnecessary violence
Cet exercice illustre la différence fondamentale entre l'utilisation d'une référence ou d'un pointeur en C++. La classe `HumanA` utilise une
référence vers `Weapon`, garantissant qu'il est toujours armé. Tandis que `HumanB` utilise un pointeur, permettant l'absence d'arme et une affectation tardive. L'exercice met également en évidence le partage d'un même objet et l'impact des modfications sur les objets référencés.

### Exercice 04 : Sed is for losers
Cet exercice permet de se familiariser avec la manipulation de fichiers en C++ à l'aide des fuls `std::ifstream` et `std::ofstream`. Il met en pratique la gestion des arguments en ligne de commande ainsi que la manipulation avancée des chaines de caractères. L'exercice aborde également la gestion des erreurs et les cas limites, comme une chaîne de recherche vide ou un fichier inaccessible.

### Exercice 05 : Harl 2.0
Cet exercice permet de comprendre le fonctionnement des **fonctions membres** et des **pointeurs sur fonctions membres** en C++. Il met en pratique la sélection dynamique d'un comportement à partir d'une chaîne de caractères sans utiliser de chaînes de conditions, à l'aide de tableaux de pointeurs. L'exercice aborde également les notions d'encapsulation et de conception orientée objet.

### Exercice 06 : Harl filter (bonus)
Cet exercice est un exercice bonus et donc non obligatoire pour rendre le module CPP01. Il approfondit la mise en place d'un système de filtrage de messages basé sur des niveaux de gravité. Il met en pratique l'utilisation du `switch` statement et du mécanisme de **fall-through** afin d'exécuter plusieurs actions successivement à paritr d'un seul cas. L'exercice renforce également la compréhension des **fonctions membres** et de la structuration d'un comportement conditionnel propre et maintenable.

---

## 🌈 CPP02
Le module **CPP02** est conçu pour vous aider à comprendre le polymorphisme ad-hoc, les surcharges et les classes canoniques orthodoxes en C++. La forme canonique orthodoxe est une convention C++ qui consiste à définir le constructeur par défaut, le constructeur de copie, l’opérateur d’affectation et le destructeur afin de contrôler correctement le cycle de vie et la copie des objets.

### Exercice 00 : My First Class in Orthodox Cannonical Form
Cet exercice intriduit la `forme orthodoxe canonique` en C++ qui nous permet de l'utiliser selon les bonnes pratiques. Chaque classe doit implémenter : un `constructeur par défaut` qui permet sa création, un `constructeur de copie` pour garantir sa copie, un `opérateur d'afféctation` pour avoir son affectation et un `destrcuteur` qui permet sa destruction.

### Exercice 01 : Towards a more useful fixed-point number class
L'exercice introduit la représentation en virgule fixe. La classe devient un véritable type numérique capable de convertir des entiers et des flottants en une représentation interne basée sur un facteur fixe. On aborde les conversions de int <-> fixed et float <-> fixed ou encore la surcharge de l'opérateur `<<`.

### Exercice 02 : Now we're talking
Cet exercice transforme la classe en un type numérique complet grâce à la surcharge des opérateurs arithmétiques et de comparaison, ainsi que des opérateurs d'incrément et de décrément. Il introduit également les fonction statiques `min` et `max`, renforçant la compréhension des référence et du comportement des opérateurs en C++.

### Exercice 03 : BSP (bonus)
Cet exercice met en pratique tout ce qui a ete fait dans les exercices precedent en realisant un exercice de **Binary Space Partitioning**. 3 points dans les axes x et y sont donne ainsi qu'un 4eme point pour le quel on doit returner si il est a l'interieur ou non du triangle a l'aide d'une fonction en booleen.

---

## ✨ Pour conclure
Ce projet à été réalisé dans le cadre du cursus 42 par mrosset.
