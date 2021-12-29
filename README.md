# DCA-Practica9


#### Alias globales:
```sh
git config --global alias.st status
git config --global alias.a add
git config --global alias.co commit
git config --global alias.pu push
git config --global alias.pl pull
git config --global alias.go branch
git config --global alias.ch checkout 
```
#### Alias locales:
```sh
git config --local alias.st status
git config --local alias.a add
git config --local alias.co commit
git config --local alias.pu push
git config --local alias.pl pull
git config --local alias.go branch
git config --local alias.ch checkout 
```
#### Mostrando configuraciones:
Global:
```sh
git config --global --list
```
Local:
```sh
git config --local --list
```

TODO:
```sh
git config --list
```
#### History de comandos git:
```sh
git reflog --all
```
#### Helpers:
```sh
git reset --soft HEAD~ // undo commit not pushed
```
#### Hooks:

```sh
.git/hooks/pre-push
.git/hooks/prepare-commit-msg
.git/hooks/pre-commit
```
