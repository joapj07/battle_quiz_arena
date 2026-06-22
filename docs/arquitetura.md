# Arquitetura e Modelagem UML

## Diagrama de Classes

O diagrama de classes representa a estrutura estática do sistema.

Cada classe é dividida em três partes:

### Nome da Classe

Identifica a classe representada.

Exemplo:

```text
Character
```

---

### Atributos

Representam os dados armazenados pela classe.

Exemplo:

```text
# name : QString
# hp : int
# currentAttackPower : int
```

---

### Métodos

Representam as operações que a classe pode executar.

Exemplo:

```text
+ attack(Character*) : QString
+ getHp() : int
+ setHp(int)
```

---

## Modificadores de Acesso

Os símbolos utilizados nos diagramas UML indicam o nível de acesso dos atributos e métodos.

| Símbolo | Significado | Equivalente em C++ |
| ------- | ----------- | ------------------ |
| +       | Público     | public             |
| -       | Privado     | private            |
| #       | Protegido   | protected          |

Exemplos:

```text
+ getHp() : int
```

Método público.

```text
- score : int
```

Atributo privado.

```text
# hp : int
```

Atributo protegido.

---

## Classes Abstratas

Classes abstratas representam conceitos genéricos do sistema.

Não podem ser instanciadas diretamente.

No UML são identificadas pelo estereótipo:

```text
<<abstract>>
```

Exemplos utilizados no projeto:

* Character
* Item

---

## Herança

A herança permite que uma classe reutilize atributos e métodos de outra.

No UML é representada por uma linha contínua terminando em um triângulo vazio.

Exemplo:

```text
Warrior
   ▲
   |
Character
```

No projeto:

* Warrior herda de Character
* Mage herda de Character
* Archer herda de Character
* Boss herda de Character
* HealthPotion herda de Item
* AttackBuff herda de Item

---

## Polimorfismo

Permite que diferentes classes implementem um mesmo método de maneiras distintas.

Exemplos:

```cpp
virtual QString attack(Character* target) = 0;
```

```cpp
virtual void applyEffect(Character* target) = 0;
```

Cada classe derivada possui sua própria implementação desses métodos.

---

## Encapsulamento

Consiste em proteger os atributos internos da classe e controlar seu acesso através de métodos públicos.

Exemplos:

```cpp
getHp()
getName()
getCurrentAttackPower()
```

Benefícios:

* Maior segurança dos dados.
* Melhor organização do código.
* Facilidade de manutenção.

---

## Diagrama de Casos de Uso

O diagrama de casos de uso representa as funcionalidades disponibilizadas pelo sistema e a interação dos usuários com essas funcionalidades.

---

## Ator

Representa uma entidade externa que interage com o sistema.

Exemplo:

```text
Jogador
```

---

## Caso de Uso

Representa uma funcionalidade oferecida pelo sistema.

Exemplos:

* Selecionar Personagem
* Iniciar Partida
* Responder Pergunta
* Utilizar Item
* Encerrar Partida

---

## Relacionamento <<include>>

Representa uma funcionalidade obrigatória.

Sempre que um caso de uso é executado, o caso incluído também será executado.

Exemplo:

```text
Responder Pergunta
        |
    <<include>>
        |
Validar Resposta
```

---

## Relacionamento <<extend>>

Representa um comportamento opcional ou condicional.

Ocorre apenas quando determinada condição é satisfeita.

Exemplo:

```text
Atacar Inimigo
        |
    <<extend>>
        |
Validar Resposta
```

---

## Benefícios da UML

* Facilita o planejamento do sistema.
* Auxilia na organização das classes.
* Melhora a documentação do projeto.
* Facilita a manutenção e evolução do software.
* Permite visualizar relacionamentos antes da implementação.

```
```
