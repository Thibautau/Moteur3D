# Moteur3D

Ce projet a uniquement pour but de m'exercer et de comprendre plus en profondeur un environnement 3D.
Pour cela, je vais recréer un moteur 3D sans rien (QT pour gérer l'affichage)

## Prérequis

- **CMake** (version 3.29 ou supérieure) : Utilisé pour la configuration du projet.
- **Compilateur C++** (supportant C++20 minimum) : Le code utilise des fonctionnalités de C++20, assurez-vous que votre compilateur prend en charge cette version.

Pour pouvoir utiliser ce programme, il faudra installer QT :

## Installer QT sur Windows

1) Vous pouvez télécharger QT à ce lien https://www.qt.io/download-open-source

2) Ajouter QT dans les variables d'environnements de l'IDE (CLion): 
   1) Allez dans : ```File > Settings > Build, Execution, Deployment > CMake```
   2) Ajoutez ```-DCMAKE_PREFIX_PATH="C:\Qt\<version>\mingw_64"``` dans CMake options (allez voir dans votre dossier)

Normalement tout est bon !

3) Erreurs lors de la compilation
    Si vous lancez le programme et que vous vous appercevez qu'il manque des dll après un message d'erreur, lancez les commandes suivantes dans un terminal :
    ```
    cd <votre_chemin>\cmake-build-debug
   ```
   ``` 
    C:\Qt\6.8.2\mingw_64\bin\windeployqt.exe Moteur3D.exe  
    ```
   Il peut être nécessaire de modifier le chemin d'accès vers QT, la version et "mingw_64" en fonction de ce que vous avez
