*This project has been created as part of the 42 curriculum by <sataide>.*

*Ce projet nommé Libft a été réalisé dans le cadre du cursus de 42 par <sataide>.*
(Swann Drouet)
###### .
# LIBFT
###### .
## Description
Le but de Libft est de créer sa propre librairie de fonctions, pour pouvoir les utiliser dans le futur.
###### .
## Instructions
Vous pouvez compiler les différentes fonctions avec le Makefile et la commande make et ses dérivés dans le terminal.
###### .
## Resources
Pour réaliser ce projet, j'ai largement profité de peer-learning que propose 42 ainsi que des sites internet affiliés comme : [42-cursus.gitbook](https://42-cursus.gitbook.io/guide/0-rank-00/libft). Le site : [developpez.com](https://chgi.developpez.com/liste/) m'a aussi aidé a comprendre les listes chainées.
L'intelligence artificielle n'a été utilisée que pour approfondir ma syntaxe lorsque j'étais bloqué par la norme qui m'étais imposée ou pour m'expliquer (pas me donner la réponse) d'où vennaient mes erreurs.
-ajout- J'avoue, à partir de la partie 2 ce README est le fruit d'un travail conjoint avec Gémini. (C'est très long à écrire à la main)
###### .
## Description détaillée des fonctions
###### .
### Partie 1 : Fonctions de Libc
###### .
| Nom de la fonction  | Ce qu'elle fait | Ce qu'elle retourne |
| :------------- |:-------------|:-------------:|
| ft_isalpha | Regarde si le paramètre donné est alphabétique | 1 si alphabétique, sinon 0 |
| ft_isdigit | Regarde si le paramètre donné est un chiffre | 1 si chiffre, sinon 0 |
| ft_isalnum | Regarde si le paramètre donné est alpha-numérique | 1 si alpha-numérique, sinon 0 |
| ft_isascii | Regarde si le paramètre donné est un ascii | 1 si ascii, sinon 0 |
| ft_isprint | Regarde si le paramètre donné est un caractère affichable | 1 si oui, sinon 0 |
| ft_strlen | Donne la taille de *str | La taille de *str (size_t) |
| ft_memset | Transforme n charactères de *s  en c | La string transformée |
###### .
| Nom de la fonction  | Ce qu'elle fait | Ce qu'elle retourne |
| :------------- |:-------------|:-------------:
| ft_bzero | Transforme n charactères de *s en '\0' | Rien. (fonction void) |
| ft_memcpy | Copie n charactères de *src dans *dest | Endroit de la copie, *dest |
| ft_memmove | Déplace *src dans *dest | Endroit du déplacement, *dest |
| ft_strlcpy | Copie *src dans *dest | La taille de *src (size_t) |
| ft_strlcat | ajoute *src à *dest | La taille de *dest + la taille de *src |
| ft_toupper | Transforme une minuscule c en majuscule | c (tranformé ou pas) |
| ft_tolower | Transforme une majuscule c en minuscule | c (transformé ou pas) |
###### .
| Nom de la fonction  | Ce qu'elle fait | Ce qu'elle retourne |
| :------------- |:-------------|:-------------:|
| ft_strchr | Cherche la première apparition de c dans *s | *s à partir du premier caractère c trouvé |
| ft_strrchr | Cherche la dernière apparition de c dans *s | *s à partir du dernier caractère c trouvé |
| ft_strncmp | Compare *s1 et *s2 jusqu'à n | La différence des deux caractères différents ou 0 si les deux strings sont similaires sur n |
| ft_memchr | Cherche la première apparition de c dans *s ( à la différence de strchr, *s peut prendre un void ) | *s à partir du premier caractère c trouvé |
| ft_memcmp | Compare deux adresses *s1 et *s2  jusqu'à n ( à la différence de strncmp, *s1 et *s2 peuvent être des voids )| La différence des deux caractères différents ou 0 si les deux adresses sont similaires sur n |
| ft_strnstr | Cherche *little dans *big | *big à partir de la première occurence de *little, sinon NULL |
| ft_atoi | Transforme une chaine de charactères en int | La chaine transformée (int) |
###### .
Les deux prochaines fonctions utiliseront la fonction malloc() :

| Nom de la fonction  | Ce qu'elle fait | Ce qu'elle retourne |
| :------------- |:-------------|:-------------:|
| ft_calloc | Alloue un espace, le remplit de null bytes | Un pointeur vers l'espace alloué |
| ft_strdup | Alloue un espace et duplique *s dedans | Un pointeur vers la string dupliquée |
###### .
###### .
### Partie 2 : Fonctions additionnelles
###### .
| Nom de la fonction  | Ce qu'elle fait | Ce qu'elle retourne |
| :------------- |:-------------|:-------------:|
| ft_substr | Extrait une sous-chaîne d'une chaîne s à partir de l'index start (longueur max len) | La nouvelle sous-chaîne (ou NULL si échec) |
| ft_strjoin | Alloue et retourne une nouvelle chaîne résultant de la concaténation de s1 et s2 | La nouvelle chaîne (ou NULL si échec) |
| ft_strtrim | Supprime les caractères spécifiés dans set au début et à la fin de la chaîne s1 (ex: s1 = aooloooloao et set = oa -> s1 = loool) | La nouvelle chaîne recoupée (ou NULL si échec) |
| ft_split | Sépare la chaîne s à l'aide du délimiteur c pour créer un tableau de chaînes | Un tableau de chaînes terminé par NULL (ou NULL si échec) |
| ft_itoa | Convertit un entier n en chaîne de caractères | La chaîne représentant l'entier (ou NULL si échec) |
| ft_strmapi | Applique la fonction f à chaque caractère d'une chaîne s (en passant son index) en créant une nouvelle chaîne | La nouvelle chaîne allouée (ou NULL si échec) |
| ft_striteri | Applique la fonction f à chaque caractère de la chaîne s sur place (en passant son index) | Rien (void) |
| ft_putchar_fd | Écrit le caractère c sur le descripteur de fichier fd | Rien (void) |
| ft_putstr_fd | Écrit la chaîne de caractères s sur le descripteur de fichier fd | Rien (void) |
| ft_putendl_fd | Écrit la chaîne s suivie d'un retour à la ligne (\n) sur le descripteur de fichier fd | Rien (void) |
| ft_putnbr_fd | Écrit l'entier n sur le descripteur de fichier fd | Rien (void) |
###### .
###### .
### Partie 3 : Listes Chainées
###### .
| Le nom de la fonction | Ce qu'elle fait | Ce qu'elle retourne |
| :------------- |:-------------|:-------------:|
| ft_lstnew | Alloue et crée un nouvel élément de liste avec le contenu content. Le champ next est initialisé à NULL | Le nouvel élément (ou NULL si l'allocation échoue) |
| ft_lstadd_front | Ajoute l'élément new au début de la liste pointée par lst | Rien (void) |
| ft_lstsize | Compte le nombre d'éléments présents dans une liste | Le nombre d'éléments dans la liste |
| ft_lstlast | Renvoie le dernier élément de la liste | Le dernier élément de la liste (ou NULL si vide) |
| ft_lstadd_back | Ajoute l'élément new à la fin de la liste pointée par lst | Rien (void) |
| ft_lstdelone | Libère la mémoire de l'élément lst en utilisant la fonction del sur son contenu, puis avec free() | Rien (void) |
| ft_lstclear | Supprime et libère la mémoire de tous les éléments de la liste à l'aide de del et free(), puis met le pointeur à NULL.| Rien (void) |
| ft_lstiter | Parcourt la liste lst et applique la fonction f au contenu de chaque élément | Rien (void) |
| ft_lstmap | Parcourt la liste lst, applique la fonction f au contenu de chaque élément et alloue une nouvelle liste | La nouvelle liste (ou NULL si échec) |
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
