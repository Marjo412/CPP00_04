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

## 🚀 CPP03
Le module **CPP03** introduit les mécanismes fondamentaux de l'héritage en C++, à travers une hiérarchie de classe (`ClapTrap`, `ScavTrap`, `FragTrap`, `DiamondTrap`). Cela nous permet de comprendre comment structurer une architecture orientée objet robuste et cohérente. Il permet également de mettre en pratique la forme canonique orthodoxe.

### Exercice 00 : Aaaaand... OPEN!
Cet exercice introduit les bases de la programmation orientée objet en C++ à travers la création d’une classe `ClapTrap`. Il permet de comprendre l’encapsulation, la gestion de l’état interne d’un objet et le cycle de vie (constructeur, destructeur, copie). L'exercice 00 pose les fondations nécessaire à l'héritage.

### Exercice 01 : Serena, my love!
Dans cet exercice le concept d'hériatge simple est abordé en créant une nouvelle classe `ScavTrap`, qui est introduite en tant que classe dérivée de `ClapTrap`. Les attributs de classe deviennent accessible grâce au mot-clé `protected` et certaines méthodes sont redéfinies afin de modifier leur comportement. L'exercice met également en évidence le chaînage automatique des constructeurs et destructeurs dans une hiérachie d'héritage.

### Exercice 02 : Repetitive work
L'exercice 02 introduit une nouvelle classe dérivée `FragTrap`, qui enrichit la hiérarchie existante. Cette étape approfondit la notion de spécialisation d'une classe de base et introduit l'importancve du destructeur virtuel dans un contexte d'héritage. Le destructeur `ClapTrap` devient `virtuel` afin de garantir une destruction correcte lorsqu'un objet dérivé est manipulé via un pointeur vers la classe de base. Cette modification prépare progressivement au polymorphisme et assure une gestion sûre du cycle de vie des objets dans une hiérarchie plus complexe.

### Exercice 03 : Now it’s weird! (bonus)
Cet exercice intruduit l'héritage multiple avec la classe `DiamondTrap`, qui hérite à la fois de `ScavTrap` et `FragTrap`. Cette configuration crée le problème du diamant, où une même classe de base pourrait être héritée deux fois. Pour résoudre cette ambiguïté, l'héritage virtuel est utilisé, garantissant qu'une seule instance de `ClapTrap` existe dans `DiamondTrap`. Cet exercice intriduit également la notion de double identité, pusique de `DiamondTrap` possède son propre nom tout en concervant celui hérité de `ClapTrap`.

---

## 🧭 CPP04
Le module **CPP04** introduit les concepts avancés de la programmation orientée objet en C++, notamment le `polymorphisme`, les `fonctions virtuelles`, les `classes abstraites` et la gestion correcte de la mémoire. Il met l’accent sur la conception de classes robustes et extensibles.

### Exercice 00 : Polymorphism
Ce premier exercice du module **CPP04** introduit le concept de `polymorphisme` en C++. L'objectif est de créer une classe de bas `Aminal` est des classes dérivées `Cat` et `Dog`. Grâce au mot-clé `virtual`, le programme est capables d'appeler la bonne fonction selon le type réel de l'objet, même lorsqu'il est manipulé via un pointeur de la classe de base. L'exercice demande également d'implémenté une classe `WrongAnimal` afin d'illustrer le comportement incorrecte du polymorphisme lorsque les fonctions virtuelles ne sont pas utilisées.
Il permet également de comprendre les notions fondamentales d`**héritage**, de **fonctions virtuelles** et de **polymorphisme** en C++.

### Exercice 01 : I don't want to set the world on fire
Cet exercice introduit la notion de copie profonde, `deep copy` en C++. il met en évidence les limites d'une copie superficielle qui consiste à copier uniquement les adresses mémoire pouvant provoquer des comportements indéfinis ou des erreurs comme les doubles suppressions. Au contraire la `deep copy` consiste à dupliquer entièrement les données pointées afin que chaque objet possède ses propres ressources indépendantes. L'exercice permet également de renforcer la compréhension du cycle de vie des  en C++.

### Exercice 02 : Abstract class
Cet exercice introduit la notien de `classe abstraite` en C++. La classe de base `Animal` est modifiée pour devenir abstraite, en déclarant la fonction makeSound() comme virtuelle pure. Cela empêche tout instanciation directe de la classe de base, qui représente désormais un concept général plutôt qu'un objet concret. Les classes dérivées doivent obligatoirement implémenter cette fonction, garantissant un comportement spécifique à chaque type. Le polymorphisme est conservé, permettant de manipuler des objets via des pointeurs vers la classe de base tout en appelant les bonnes implémentations

### Exercice 03 : Interface & recap (bonus)
Cet exercice introduit les interfaces en C++ à travers des classes abstraites pures, utilisées pour définir des comportements sans implémentation. Il met en avant la séparation entre interface et implémentation ainsi que l’utilisation du polymorphisme avancé.

---

## 🧠 CPP05
Le module **CPP05** introduit la gestion des erreurs en C++ à travers les exceptions. Il pemet de comprendre comment sécuriser un programme en mettant des situations invalides en le straitant proprement grâce au mots-clés `throw`, `try` et `catch'`.

### Exercice 00 : Mommy, when I grow up, I want to be a bureaucrat!
Cet exercice introduit les bases des exceptions en C++ en les intégrant dans une classe. Il met en avant la notion d’invariants (ici, un grade valide) et oblige à sécuriser la création et la modification d’un objet. Il permet aussi de comprendre comment créer ses propres exceptions en héritant de `std::exception` et comment utiliser la forme canonique d’une classe.

### Exercice 01 : Form up, maggots!
Cet exercice approfondit la gestion des exceptions en introduisant l’interaction entre plusieurs classes. Il met en pratique la séparation des responsabilités : une classe définit les règles `Form` tandis qu’une autre les utilise `Bureaucrat`. Il introduit également la gestion des erreurs à travers plusieurs niveaux d’abstraction et renforce la compréhension du design orienté objet.

### Exercice 02 : No, you need form 28B, not 28C...
Cet exercice introduit les concepts avancés de la programmation orientée objet en C++, notamment les `classes abstraites`, la `fonction virtuelle`, l'`héritage` ou le `polymorphisme`. La classe de base `AForm` définit une interface commune et des règles générales, tandis que les classes dérivées implémentent des comportements spécifiques. Il met en pratique la séparation des responsabilités et permet de comprendre comment utiliser des fonctions virtuelles pour adapter dynamiquement le comportement d’un programme.

### Exercice 03 : At least this beats coffee-making
Cet exercice introduit la classe `Intern`, dont le rôle est de créer dynamiquement des formulaires dérivés de `AForm` en fonction d’un nom fourni sous forme de chaîne de caractères. L’objectif est de mettre en place un mécanisme de création flexible sans utiliser de longues chaînes de conditions `if/else`, en adoptant une approche plus modulaire et maintenable.

---

## 🚀 CPP06
Le module **CPP06** introduit la conversion de types en C++ et la manipulation de représentations scalaires.  
L’objectif est de comprendre comment une même valeur peut être interprétée et convertie entre différents types fondamentaux en utilisant les opérateurs de casts en C++.

### Exercice 00 : Conversion of scalar types
Cet exercice consiste à convertir une valeur donnée sous forme de chaîne de caractères vers les types scalaires fondamentaux: 'char', 'int', 'float', 'double'. Le programme doit d’abord identifier le type de la valeur, puis effectuer les conversions correspondantes à l’aide de 'static_cast'. Il doit également gérer les cas particuliers comme les pseudo-littéraux 'nan' et 'inf', ainsi que les conversions impossibles ou les caractères non affichables. Cet exercice met l’accent sur la compréhension des conversions de types et la validation des entrées en C++.

### Exercice 01 : Serialization
Cet exercice consiste à comprendre comment manipuler des pointeurs en C++ en les convertissant en un type entier, puis en les reconvertissant en pointeurs, sans perdre l’adresse mémoire avec `reinterpret_cast`.

### Exercice 02 : Identify real type
Cet exercice consiste à identifier le type réel d’un objet dérivé (A, B ou C) à partir d’un pointeur ou d’une référence de type `Base`. Il repose sur l’utilisation de `dynamic_cast`, qui permet de vérifier le type d’un objet à l’exécution. Avec un pointeur, un `cast` invalide retourne `NULL`, tandis qu’avec une référence, il lance une exception. L’objectif est de comprendre les casts en polymorphisme et la différence de comportement entre pointeurs et références en C++.

---

## 🧭 CPP07
Le module **CPP07** introduit les templates en C++. Les templates permettent d’écrire du code générique capable de fonctionner avec plusieurs types sans devoir dupliquer les fonctions ou les classes. Au lieu de créer plusieurs versions d’une même fonction pour int, float, double ou std::string, on peut écrire une seule version générique que le compilateur adaptera automatiquement au type utilisé.

### Exercice 00 : Start with a few functions
Le but de cet exercice est d'implémenter trois fonctions templates pour avoir un première approche de ce concept. Les fonctions `swap`, `min` et `max doivent fonctionner avec plusieurs types différents.

### Exercice 01 : Iter
Le but de cet exercice est d’implémenter une fonction template iter capable de parcourir un tableau de n’importe quel type et d’appliquer une fonction sur chacun de ses éléments.

### Exercice 02 : Array
Cet exercice a pour but d'implémenter une classe template `Array capable de stocker des éléments de n'importe quel type. Cette classe reproduit le comportement d'un tableau dynamique tout en assurant une gestion sûre de la mémoire et des accès.

---

## ✨ Pour conclure
Ce projet à été réalisé dans le cadre du cursus 42 par mrosset.
