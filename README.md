
# Benchme

## Intro
Le but de ce projet est de comparer les performances des différents algorithmes de tri en langage C.

L'indice de performance comparé ici est la complexité temporel, ou comment évolue le temps d'exécution en fonction du nombre de données.

>Rappel : La complexité temporel la plus désirable est O(n). On cherche a éviter les complexités avec des exposant tel que O(n^i) ou i > 2, ou pire: O(!n) 

4 algorithmes sont testé:

|Nom|Complexité algorithmique attendue|
|---|------------------------|
|Tri à bulle / Bubble sort| O(n²)
|Tri par insertion / Insertion sort|O(n²)
|Tri par sélection / Selection sort|O(n²)
|Tri par tas / Heap sort|O(n log(n))

## Installation
  * Cloner le projet ``git clone https://github.com/hbourget/Benchme.git``
  * Générer le fichier exécutable dans le répertoire
    * Windows : ``mingw32-make``
    * Linux : ``sudo make`` 

## Utilisation
Après avoir installé le programme, il faut utiliser la syntaxe suivante pour l'exécuter :

* Windows : ``Benchme.exe resultats.csv``
* Linux : ``./Benchme resultats.csv`` (L'extension de fichier n'est pas forcément nécessaire sur Linux mais Il est toujours possible de l'utiliser pour faciliter l'accès à un grapheur)

## Documentation technique
Il est possible de générer la documentation technique de ce projet avec [Doxygen](https://www.doxygen.nl/index.html) en suivant le protocole suivant :

* **Windows**
  * Installation de Doxygen (Ne pas oublier d'ajouter Doxygen dans le PATH windows)
    * [Sourceforge](https://sourceforge.net/projects/doxygen/files/rel-1.9.2/)
  * Génération de la documentation depuis la racine d'installation de Benchme
    * `mingw32-make documentation`


* **Linux**
  * Installation de Doxygen 
    * ``sudo apt-get install doxygen``
  * Génération de la documentation depuis la racine d'installation de Benchme
    * ``sudo make documentation``

La documentation est généré sous format HTML. Pour la lire, il suffit d'ouvrir le fichier ``index.html`` situer dans le dossier **BenchmeDOC** qui vient d'être créé par Doxygen.


## Résultats obtenus

![benchmeResults](https://user-images.githubusercontent.com/57684366/136668584-1bc00276-8aff-4eda-b8df-7f520eac41c6.png)

## Résultats attendus

On attends des courbes représentant une fonction au carré pour 3 des 4 fonctions testés (Bulle, Insertion, Sélection):

![TP_Trie_Courbe_Carre](https://user-images.githubusercontent.com/57684366/136666747-86e36a3c-3324-47e9-aa66-b24bb229a10b.png)

Le trie en tas doit normalement avoir une courbe représentant *n log(n)* :

![TP_Trie_Courbe_Log](https://user-images.githubusercontent.com/57684366/136666755-5bc404e6-1bb5-4416-8351-6e671f7b5a43.png)

La différence entre ces deux types de complexité temporel se fait ressentir avec une large quantité de donnée.

![TP_Trie_Courbes](https://user-images.githubusercontent.com/57684366/136666758-ff9b329a-b316-4e2d-9db7-85698781ff68.png)

### Pour une comparaison plus parlante :
Si faire une comparaison prends ~0.1 sec

|Type de Complexité|Nombre de valeurs|Temps (en s)|
|------------------|:-----------------:|-----:|
|O(n²)             | 10                |1     |
|O(n²)             | 100        |1000 (16mins)|
|O(n²)             | 500         |250000 (70h)|
|O(nlog(n))        | 10                |.1    |
|O(nlog(n))        | 100               |20    |
|O(nlog(n))        | 500               |135   |
