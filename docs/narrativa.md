
# Roteiro e Narrativa do Jogo - Battle Quiz Arena

Este arquivo contém o banco de dados inicial de perguntas, alternativas, as falas de fim de jogo e as reações dinâmicas do Chefão ("O Grão-Mestre do Silício") para interações em tempo real.

---

##  Perfil do Adversário: O Grão-Mestre do Silício
* **HP Base:** 200
* **Descrição:** Uma entidade cibernética que se alimenta de bugs e circuitos mal projetados. Ele odeia código limpo e adora humilhar estudantes que esquecem de colocar ponto e vírgula.

---

##  Banco de Perguntas e Alternativas

###  Bloco 1: Programação Orientada a Objetos (POO)

**Pergunta 1:** Qual pilar da POO é responsável por esconder os detalhes internos de um objeto e expor apenas o necessário através de métodos públicos?
* A) Herança
* B) Polimorfismo
* C) Encapsulamento (Correta)
* D) Abstração
> **Provocação do Chefão (Erro):** "Haha! Seus atributos estão totalmente expostos! Você não sabe nem se proteger com um modificador `private`!"

**Pergunta 2:** O que acontece quando declaramos um método como "virtual puro" (com `= 0` no final) em C++?
* A) O método é deletado do programa.
* B) A classe se torna Abstrata e não pode ser instanciada. (Correta)
* C) O método só pode ser chamado uma vez.
* D) O programa compila mais rápido.
> **Provocação do Chefão (Erro):** "Você tentou instanciar o impossível! Sua lógica é tão abstrata quanto a sua chance de passar nessa matéria!"

**Pergunta 3:** Na herança em C++, qual modificador de acesso permite que as classes filhas acesssem os membros da classe mãe, mas impede o acesso do mundo exterior?
* A) public
* B) private
* C) protected (Correta)
* D) friend
> **Provocação do Chefão (Erro):** "Acesso negado! Nem suas classes filhas confiam em você. Você é um estranho no escopo!"

**Pergunta 4:** Qual é a função principal de um "Destrutor" em uma classe C++?
* A) Apagar o código-fonte do computador.
* B) Liberar a memória e recursos alocados pelo objeto quando ele é destruído. (Correta)
* C) Reiniciar o jogo do zero.
* D) Criar cópias do objeto.
> **Provocação do Chefão (Erro):** "Seu código está vazando memória igual às suas chances de me vencer! Memory leak fatal!"

**Pergunta 5:** Quando uma classe filha reescreve um método virtual que já existia na classe mãe, qual palavra-chave do C++11 usamos para garantir que estamos fazendo isso certo?
* A) virtual
* B) static
* C) override (Correta)
* D) overload
> **Provocação do Chefão (Erro):** "Você tentou dar um overload na minha paciência, mas esqueceu do `override`! Erro de compilação na sua cara!"

---

###  Bloco 2: Conhecimentos Básicos de Eletrônica

**Pergunta 6:** De acordo com a Lei de Ohm, se você mantiver a resistência de um circuito constante e duplicar a tensão (Voltagem), o que acontece com a corrente elétrica?
* A) A corrente cai pela metade.
* B) A corrente também duplica. (Correta)
* C) A corrente zera.
* D) A corrente explode o circuito.
> **Provocação do Chefão (Erro):** "Incrível! Você conseguiu queimar o circuito antes mesmo de ligar a fonte! Que falta de resistência!"

**Pergunta 7:** Qual componente eletrônico básico é conhecido por armazenar energia em um campo elétrico e descarregá-la rapidamente?
* A) Resistor
* B) Diodo
* C) Capacitor (Correta)
* D) Transistor
> **Provocação do Chefão (Erro):** "Sua mente está sem capacitância nenhuma... Não consegue reter nem um bit de informação!"

**Pergunta 8:** Qual é a função de um Diodo em um circuito eletrônico?
* A) Aumentar a resistência total do circuito.
* B) Permitir que a corrente flua em apenas um sentido. (Correta)
* C) Armazenar corrente alternada.
* D) Transformar calor em eletricidade.
> **Provocação do Chefão (Erro):** "Você tentou colocar a corrente no sentido inverso! Seu fluxo de pensamentos está totalmente bloqueado por mim!"

**Pergunta 9:** Se você associar dois resistores de 100 Ohms em PARALELO, qual será a resistência equivalente desse circuito?
* A) 200 Ohms
* B) 100 Ohms
* C) 50 Ohms (Correta)
* D) 0 Ohms
> **Provocação do Chefão (Erro):** "Até a matemática básica da eletrônica te esmaga! Dividido por dois e você ainda erra?"

**Pergunta 10:** Qual componente semicondutor revolucionou a eletrônica moderna, funcionando como um interruptor ou amplificador de sinal em processadores?
* A) Transistor (Correta)
* B) Fusível
* C) Indutor
* D) Potenciômetro
> **Provocação do Chefão (Erro):** "Eu sou feito de bilhões de transistores, e você não consegue decodificar a lógica de um único portal!"

---

##  Reações do Chefão ao Uso de Itens (Inventário)

Quando o jogador decide gastar seu turno usando um item estratégico, o Chefão reage de forma ácida no log de batalha (sorteado aleatoriamente):

###  Uso da Poção de Cura
* **Frase 1:** "O quê?! Usando patch de correção em tempo de execução? Isso é gambiarra, seu código continua quebrado!"
* **Frase 2:** "Pode recuperar o seu HP, mas não há memória RAM suficiente no mundo para salvar a sua nota!"

###  Uso do Elixir de Overclock (Attack Buff)
* **Frase 1:** "Overclock? Cuidado para não fritar seus neurônios antes de responder a próxima pergunta!"
* **Frase 2:** "Pode aumentar o seu poder de ataque, mas se errar a sintaxe, o compilador vai te esmagar do mesmo jeito!"

---

##  Eventos Aleatórios de Turno (Fator RPG)

Eventos que podem acontecer de forma inesperada no início de um turno, alterando as regras temporariamente:

* ** Evento 1: Oscilação na Rede Elétrica**
  * *Texto na Tela:* "AVISO: Uma forte oscilação de energia atingiu a arena! O próximo ataque de qualquer um dos lados causará DANO CRÍTICO DUPLO!"
* ** Evento 2: Ataque DDOS**
  * *Texto na Tela:* "ALERTA: O Chefão iniciou um ataque DDOS nos seus servidores! Você perdeu um item aleatório do seu inventário devido à sobrecarga!"
* ** Evento 3: Refatoração de Código**
  * *Texto na Tela:* "BÔNUS: Você encontrou um trecho de código antigo e o refatorou com sucesso. Você recuperou 20 de HP instantaneamente!"

---

##  Sistema de Conquistas (Achievements)

Medalhas internas que o jogador desbloqueia e que serão validadas e exibidas na aba de Ranking:

1. ** Mestre do Silício**
   * *Requisito:* Responder corretamente a 5 perguntas seguidas de Eletrônica Básica.
   * *Mensagem:* "Conquista Desbloqueada: Mestre do Silício! O Grão-Mestre respeita seus conhecimentos de hardware."

2. ** Código Limpo (Clean Code)**
   * *Requisito:* Vencer o jogo sem usar nenhuma Poção de Cura do inventário.
   * *Mensagem:* "Conquista Desbloqueada: Código Limpo! Você passou pela arena sem precisar de remendos ou gambiarras."

3. ** À Beira do Crash**
   * *Requisito:* Vencer a batalha final com menos de 5% de HP restante.
   * *Mensagem:* "Conquista Desbloqueada: À Beira do Crash! Sobreviveu por um ponteiro!"

---

## 🔀 Sistema de Fim de Jogo (Sorteio Aleatório)

### 🏆 Mensagens de Vitória (O Chefão entra em Curto-Circuito)
* **Frase 1:** "Não... Impossível! Meu sistema entrou em curto-circuito... Minha memória foi desalocada... Você... compilou um código perfeito!"
* **Frase 2:** "Sistema corrompido... Minhas portas lógicas estão falhando... Como você conseguiu resolver todos os blocos sem un único erro de sintaxe?!"

### 💀 Mensagens de Derrota (Game Over)
* **Frase 1:** "Retorne para o primeiro semestre, mero usuário! Seu destino é passar o resto da vida caçando `Segmentation Fault`!"
* **Frase 2:** "Parece que o seu projeto de fim de semestre acabou de soltar fumaça preta! Seu circuito entrou em curto total e a sua nota foi carbonizada junto com os seus transistores. Volte para a bancada!"
* **Frase 3:** "GAME OVER! Seu código gerou um erro na alma! Você tentou acessar um ponteiro nulo e sua dignidade foi desalocada da memória."
* **Frase 4:** "Compilação falhou: 99 erros e 0 acertos. Eu avisei que copiar código da internet sem entender a matéria não te ajudaria na minha Arena! Linha do horizonte: reprovado!"
* **Frase 5:** "Que trágico! Você ligou a fonte invertida, esqueceu de colocar o resistor no LED e ainda tentou dar herança privada na classe errada. O resultado? Uma explosão de bugs que resetou a sua vida para zero!"

---

## 💾 Modelo de Exportação do Log da Partida (`log_partida.txt`)

```text
==================================================
        LOG DE BATALHA - BATTLE QUIZ ARENA        
==================================================
Jogador: [Nome_Do_Player] | Classe: [Classe_Escolhida]
Resultado: VITÓRIA / DERROTA
--------------------------------------------------
[TURNO 1] Pergunta sobre Encapsulamento exibida.
[TURNO 1] Jogador ACERTOU a resposta.
[TURNO 1] Herói causou 25 de dano. HP do Chefão: 175.
--------------------------------------------------
[TURNO 2] EVENTO: Oscilação na Rede Elétrica ativo!
[TURNO 2] Pergunta sobre Lei de Ohm exibida.
[TURNO 2] Jogador ERROU a resposta.
[TURNO 2] Chefão ativou contra-ataque Crítico: -40 HP do Jogador.
[TURNO 2] Fala do Chefão: "Incrível! Você conseguiu queimar o circuito..."
--------------------------------------------------
FIM DE JOGO - Partida encerrada em X turnos.
==================================================
