# Jeu de la Vie (Game of Life)

Ce projet est une implémentation du célèbre **Jeu de la Vie** de Conway en C++ avec deux modes d'affichage : console et graphique (SFML). Il propose également la gestion de configurations sauvegardées, un menu graphique, et la possibilité de jouer avec de la musique de fond.

## Fonctionnalités

- Mode console : affichage du jeu dans le terminal.
- Mode graphique : interface graphique avec SFML, fond personnalisé et musique.
- Menu de sélection de configuration (chargement de fichiers `config.txt`, `config1.txt`, etc.).
- Sauvegarde et chargement de la grille.
- Interaction souris/clavier pour manipuler la grille.
- Obstacles et cellules normales.

## Structure du projet

```
config.txt
config1.txt
config2.txt
config3.txt
config4.txt
Corporation Games.otf
game
Makefile
music.ogg
photo.jpg
.src/
    cell.cpp/hpp
    FileManager.cpp/hpp
    GameManager.cpp/hpp
    grid.cpp/hpp
    inputhandler.cpp/hpp
    main.cpp
    renderer.cpp/hpp
.vscode/
    c_cpp_properties.json
    settings.json
```

## Compilation

Assurez-vous d'avoir installé les bibliothèques **SFML**.

Pour compiler le projet, utilisez la commande suivante :

```sh
make
```

ou directement :

```sh
g++ -o game .src/main.cpp .src/renderer.cpp .src/inputhandler.cpp .src/grid.cpp .src/FileManager.cpp .src/GameManager.cpp .src/cell.cpp -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio
```

## Lancement

Après compilation, lancez le jeu avec :

```sh
./game
```

Vous pourrez choisir entre le mode console ou graphique.

## Commandes

- **Espace** : Pause/Reprendre
- **S** : Sauvegarder la grille
- **R** : Réinitialiser la grille
- **Échap** : Quitter
- **Clic souris** (mode graphique) : Inverser l'état d'une cellule

## Fichiers de configuration

Les fichiers `config.txt`, `config1.txt`, etc. contiennent des grilles sauvegardées (dimensions puis lignes de 0/1).

## Dépendances

- [SFML](https://www.sfml-dev.org/) (Graphics, Window, System, Audio)
- Police : `Corporation Games.otf`
- Image de fond : `photo.jpg`
- Musique : `music.ogg`

## Auteurs

Projet réalisé dans le cadre d'un projet de programmation orientée objet.

---

**NB** : Pour toute question, consultez les fichiers sources ou ouvrez une issue.
