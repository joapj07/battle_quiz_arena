# Battle Quiz Arena - Ultimate Edition

Projeto desenvolvido em C++ utilizando Qt Creator, Qt Widgets e conceitos de Programação Orientada a Objetos.

---

## Descrição

Battle Quiz Arena é um jogo de perguntas e respostas em turnos com elementos de RPG e interface gráfica desenvolvida em Qt.

O jogador escolhe uma classe de personagem (Guerreiro, Mago ou Arqueiro) e enfrenta o temível "Grão-Mestre do Silício". Para vencer, é necessário responder corretamente às perguntas, utilizar itens estrategicamente e administrar os recursos disponíveis durante a batalha.

---

## Objetivo

Aplicar conceitos fundamentais e avançados de Programação Orientada a Objetos por meio do desenvolvimento de uma aplicação gráfica interativa em C++ utilizando Qt Creator.

---

## Funcionalidades

* Seleção de personagens (Warrior, Mage e Archer)
* Sistema de combate em turnos
* Sistema de perguntas e respostas (Quiz)
* Sistema de itens consumíveis
* Ranking de jogadores
* Eventos especiais durante a partida
* Registro de partidas em arquivos de texto
* Interface gráfica desenvolvida com Qt Widgets
* Temas visuais personalizados

---

## Conceitos de POO Utilizados

### Encapsulamento

Os atributos das classes são protegidos e acessados através de métodos específicos (getters e setters), garantindo maior controle sobre os dados da aplicação.

### Herança

A classe `Character` serve como base para:

* Warrior
* Mage
* Archer
* Boss

A classe `Item` serve como base para:

* HealthPotion
* AttackBuff

### Polimorfismo

Os personagens implementam comportamentos próprios para o método `attack()`.

Os itens implementam diferentes comportamentos para o método `applyEffect()`.

### Associação, Agregação e Composição

As classes interagem entre si para representar o sistema de batalha, gerenciamento de perguntas, inventário e interface gráfica.

### Persistência de Dados

Utilização de arquivos para armazenamento de ranking e geração de relatórios das partidas.

---

## UML

A documentação UML do projeto encontra-se na pasta `docs`.

Diagramas disponíveis:

* Casos de Uso
* Estrutura de Classes
* Relacionamentos entre Objetos

---

## Estrutura do Projeto

```text
battle_quiz_arena/
│
├── CMakeLists.txt
├── main.cpp
│
├── mainwindow.h
├── mainwindow.cpp
├── mainwindow.ui
│
├── character.h
├── character.cpp
├── warrior.h
├── warrior.cpp
├── mage.h
├── mage.cpp
├── archer.h
├── archer.cpp
│
├── item.h
├── item.cpp
├── healthpotion.h
├── healthpotion.cpp
├── attackbuff.h
├── attackbuff.cpp
│
├── questionmanager.h
├── questionmanager.cpp
│
├── docs/
│   ├── analise.md
│   ├── projeto.md
│   ├── testes.md
│   ├── casos_de_uso.md
│   │
│   └── imagens/
│       ├── diagrama_casos_de_uso.png
│       ├── diagrama_heranca.png
│       └── diagrama_classes.png
│
└── README.md
```

---

## Ferramentas Utilizadas

* C++
* Qt Creator
* Qt Widgets
* CMake
* Git
* GitHub

---

## Autor

João Carlos Padoveze Junior

Projeto desenvolvido para a disciplina de Programação Orientada a Objetos.
