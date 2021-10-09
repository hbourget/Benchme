
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
* **Etape 1** :
Cloner le projet dans le répertoire souhaité : ``git clone https://github.com/hbourget/Benchme.git``
* **Etape 2** :
  Générer le fichier exécutable dans votre répertoire :
  * Windows : ``mingw32-make``
  * Linux : ``sudo make`` 

## Utilisation
Après avoir installé le programme, il faut utiliser la syntaxe suivante pour le lancer :

* Windows : ``Benchme.exe resultats.csv``
* Linux : ``./Benchme resultats.txt`` (L'extension de fichier n'est pas forcément nécessaire sur Linux mais Il est toujours possible de l'utiliser pour faciliter l'accès à un grapheur)

## Résultats attendus

On attends des courbes représentant une fonction au carré pour 3 des 4 fonctions testés (Bulle, Insertion, Sélection):

![Courbe fonction carré](img/TP_Trie_Courbe_Carre.png)

Le trie en tas doit normalement avoir une courbe représentant *n log(n)* :

![Courbe nlogn](img/TP_Trie_Courbe_Log.png)

La différence entre ces deux types de complexité temporel se fait ressentir avec une large quantité de donnée.

![Courbe Comparaison](img/TP_Trie_Courbes.png)

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
