# Battle Quiz Arena

Projeto desenvolvido em C++ utilizando Qt Creator, Qt Widgets e os conceitos de Programação Orientada a Objetos (POO).

---

## Descrição

Battle Quiz Arena é um jogo de perguntas e respostas com elementos de RPG desenvolvido como projeto da disciplina de Programação Orientada a Objetos.

O jogador escolhe uma classe de personagem (Guerreiro, Mago ou Arqueiro) e enfrenta o chefe final denominado **Grão-Mestre do Silício**. Durante a batalha, perguntas são apresentadas ao jogador e, dependendo da resposta, ações de ataque ou penalidades são aplicadas.

O projeto foi desenvolvido utilizando interface gráfica com Qt Widgets e aplicando conceitos fundamentais de orientação a objetos.

---

## Objetivos

* Aplicar os conceitos de Programação Orientada a Objetos.
* Desenvolver uma aplicação gráfica utilizando Qt Creator.
* Utilizar herança, encapsulamento, polimorfismo e abstração.
* Modelar o sistema utilizando diagramas UML.
* Organizar o projeto seguindo boas práticas de desenvolvimento.

---

## Funcionalidades

* Seleção de personagem.
* Classes disponíveis:

  * Guerreiro (Warrior)
  * Mago (Mage)
  * Arqueiro (Archer)
* Sistema de perguntas e respostas.
* Sistema de combate contra chefe.
* Sistema de itens.
* Poção de Vida (HealthPotion).
* Bônus de Ataque (AttackBuff).
* Controle de vida dos personagens.
* Interface gráfica desenvolvida com Qt Widgets.
* Gerenciamento de perguntas através da classe QuestionManager.

---

## Conceitos de Programação Orientada a Objetos

### Encapsulamento

Os atributos das classes são protegidos por modificadores de acesso e manipulados através de métodos públicos.

Exemplos:

* getHp()
* getName()
* getCurrentAttackPower()

---

### Herança

A classe abstrata Character é utilizada como base para:

* Warrior
* Mage
* Archer
* Boss

A classe abstrata Item é utilizada como base para:

* HealthPotion
* AttackBuff

---

### Polimorfismo

Cada personagem implementa seu próprio método:

* attack()

Cada item implementa seu próprio método:

* applyEffect()

---

### Abstração

As classes Character e Item foram modeladas como classes abstratas para representar conceitos genéricos do sistema.

---

## Estrutura de Classes

### Personagens

* Character (abstrata)

  * Warrior
  * Mage
  * Archer
  * Boss

### Itens

* Item (abstrata)

  * HealthPotion
  * AttackBuff

### Gerenciamento

* MainWindow
* QuestionManager
* Question (struct)

---

## UML e Documentação

Toda a documentação do projeto encontra-se na pasta:

docs/

Arquivos disponíveis:

* analise.md
* projeto.md
* testes.md
* narrativa.md
* casos_de_uso.md
* arquitetura.md

Diagramas disponíveis:

* Diagrama de Casos de Uso
* Diagrama de Classes

---

## Estrutura do Projeto

```text
battle_quiz_arena/
│
├── docs/
│   ├── analise.md
│   ├── arquitetura.md
│   ├── casos_de_uso.md
│   ├── narrativa.md
│   ├── projeto.md
│   ├── testes.md
│   │
│   └── imagens/
│       ├── diagrama_casos_de_uso.png
│       └── diagrama_classes.png
│
├── include/
│   ├── character.h
│   ├── warrior.h
│   ├── mage.h
│   ├── archer.h
│   ├── boss.h
│   ├── item.h
│   ├── healthpotion.h
│   ├── attackbuff.h
│   ├── questionmanager.h
│   └── mainwindow.h
│
├── src/
│   ├── character.cpp
│   ├── warrior.cpp
│   ├── mage.cpp
│   ├── archer.cpp
│   ├── boss.cpp
│   ├── item.cpp
│   ├── healthpotion.cpp
│   ├── attackbuff.cpp
│   ├── questionmanager.cpp
│   └── mainwindow.cpp
│
├── mainwindow.ui
├── README.md
└── CMakeLists.txt
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
