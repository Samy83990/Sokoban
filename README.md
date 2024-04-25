# Sokoban
A warehouse keeper game
Le Sokoban (gardien d'entrepôt en japonais) est un type de puzzle de transport, dans lequel le joueur pousse des boîtes ou des caisses dans un entrepôt, en essayant de les amener à des emplacements de stockage. Ce type d'énigme est généralement mis en œuvre dans le cadre d'un jeu vidéo.

Développez une copie de ce jeu en mode terminal, en utilisant la bibliothèque ncurses.
La carte n'est pas nécessairement carrée, elle peut avoir différentes formes fermées par un mur.

Le jeu doit être réinitialisé en appuyant sur la barre d'espacement.
Le redimensionnement du terminal doit être géré. Tant que le terminal est trop petit pour afficher la totalité de la carte, un message centré, demandant à l'utilisateur d'agrandir le terminal, doit être affiché.
Le jeu doit pouvoir être joué avec les touches fléchées (GAUCHE, DROITE, HAUT et BAS).
Une carte valide ne peut contenir que les caractères SPACE, '\n', '#', 'X', 'O' et 'P'. Si une carte non valide est fournie, le programme doit sortir avec une erreur.
