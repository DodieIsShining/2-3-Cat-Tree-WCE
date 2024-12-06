# 2-3-Cat-Tree-WCE

Pour ce defi de Worst Code Ever, notre equipe a decide de partir sur un code a priori tres simple : une division euclidienne.
Ce programme prend en argument un dividende et un diviseur et renvoie le quotient et le reste de la division.

Mais alors, un tel code aurait ete trop simple. Afin de compliquer d'avantage, nous avons decide de decomposer cette fonction le plus possible en fonctions auxilieres.
En effet nous avons alors ecrit 20% des fonctions specifiques pour la division, le modulo, une fonction de comparaison de deux nombres, une fonction qui transforme un string en long, une fonction qui free.

On pourrait alors se demander, pourquoi free ? Nous avons complique chacune des fonctions en leur faisant faire des operations supplementaires, inutiles, qui ralentissent l'execution du programme. Nous cherchions un manque d'optimisation maximal. Ainsi nous allouons de la memoire non necessaire, ajoutons des boucles inutiles, des appels de fonctions, des delais d'execution grace a des boucles for, etc. 

Mais on ne s'arrete pas la. Nous avons decide de renommer toutes les variables et fonctions par des valeurs pour rendre notre code encore plus illisible !

Et la cerise sur le gateau ... nous avons ajoute des #define au debut de notre fichier pour renommer tous les while en for, tous les for en if, tous les if en malloc et tous les return en while. Grace a ca, on peut etre surs que notre programme est vraiment un defi a dechiffrer.

La beaute de ce programme est que malgre tout cele, il est parfaitement fonctionnel et chaque fonction a son usage !
