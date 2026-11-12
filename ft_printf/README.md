*This project has been created as part of the 42 curriculum by sataide.*

*Ce projet nommé ft_printf a été réalisé dans le cadre du cursus de 42 par sataide.*
(Swann Drouet)
###### .
# FT_PRINTF
###### .
## Description
La fonction ft_printf doit être une copie faite maison de la fonction printf.
Elle nous permet d'écrire des arguments dans le terminal, suivant le type spécifié. 
###### .
## Instructions
Vous pouvez compiler les différentes fonctions avec le Makefile en utilisant les commandes :
-`make` pour compiler et créer le fichier ft_printf.a
-`make re` pour recompiler et recréer le fichier ft_printf.a (fclean + make) 
-`make clean` pour retirer tous les fichiers en .o
-`make fclean` pour retirer tous les fichiers en .o et ft_printf.a
## Resources
Pour réaliser ce projet, j'ai largement profité du peer-learning que propose 42 (un grand merci à Eline et Eddie pour leur aide).
Je n'ai pas utilisé d'intelligence artificielle dans ce projet.
###### .
## Description détaillée de la fonction
###### .
#### Prototype de la fonction : `ft_printf(const char *parameters, ...)`
###### .
La fonction ft_printf va parcourir les paramètres donnés (1er argument), écrire chaque caractère trouvé et si un pourcentage est trouvé et que le type de conversion est valide,
alors ft_printf va écrire l'argument suivant selon ce type.
*Ainsi la fonction peut prendre une infinité d'arguments.*
De plus, la fonction **retourne le nombre de caractères qui ont été print.**
###### .
**Exemple** pour `ft_printf("AAA%i\n%sOO", "-14", "salut")`<br>
-> AAA-14<br>&nbsp;&nbsp;&nbsp;&nbsp;salutOO<br>
Ce qui est retourné : 13
###### .
**Différentes conversions possibles :**
- `%c` print un seul caractère (char)
- `%s` print une chaine de caractères (string)
- `%p` print l'adresse d'un pointeur void en hexadécimal
- `%d` print un chiffre (base 10) (digit)
- `%i` print un nombre en base 10 (int)
- `%u` print un nombre strictement positif en base 10 (unsigned int)
- `%x` print un nombre en hexadécimal (base 16) au format minuscule
- `%X` print un nombre en hexadécimal (base 16) au format majuscule
- `%%` print un pournectage % (char)
###### .
##### Voilà fin de la documentation, j'espère que ça a été compréhensible.
###### .
###### .
###### .
###### .
###### .
###### .
###### .
###### .
###### .
###### .
###### .
###### .
###### -Seulement disponible chez ceux qui savent-
