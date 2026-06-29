# Casos de Uso

## Ator Principal

**Jogador**


---

## Casos de Uso

### Selecionar Personagem

**Descrição:**
Permite ao jogador escolher uma classe de personagem (Guerreiro, Mago ou Arqueiro) para iniciar a partida.

**Pré-condição:**
O jogo deve estar na tela inicial.

**Pós-condição:**
O personagem escolhido é carregado para a batalha.

---

### Iniciar Partida

**Descrição:**
Inicia a batalha após a seleção do personagem.

**Pré-condição:**
Um personagem deve ter sido selecionado.

**Pós-condição:**
A primeira pergunta é exibida ao jogador.

---

### Responder Pergunta

**Descrição:**
Permite ao jogador responder às perguntas apresentadas pelo sistema.

**Pré-condição:**
Uma pergunta deve estar visível.

**Pós-condição:**
A resposta é enviada para validação.

---

### Validar Resposta

**Descrição:**
Verifica se a resposta fornecida pelo jogador está correta.

**Pré-condição:**
O jogador deve ter selecionado uma alternativa.

**Pós-condição:**
O sistema calcula dano ou recompensa correspondente.

---

### Atacar Inimigo

**Descrição:**
Executa um ataque contra o chefe após uma resposta correta.

**Pré-condição:**
A resposta deve ter sido validada como correta.

**Pós-condição:**
A vida do inimigo é reduzida.

---

### Utilizar Item

**Descrição:**
Permite utilizar itens especiais durante a batalha.

**Pré-condição:**
O jogador deve possuir itens disponíveis.

**Pós-condição:**
O efeito do item é aplicado ao personagem.  
---

### Visualizar Status

**Descrição:**
Exibe informações do personagem durante a partida.

**Pré-condição:**
Partida em andamento.

**Pós-condição:**
HP, ataque e demais atributos são exibidos.

---

### Visualizar Ranking

**Descrição:**
Permite consultar a pontuação dos jogadores.

**Pré-condição:**
O ranking deve existir.

**Pós-condição:**
As pontuações armazenadas são exibidas.

---

### Encerrar Partida

**Descrição:**
Finaliza a partida quando um dos personagens atinge 0 pontos de vida.

**Pré-condição:**
Jogador ou chefe derrotado.

**Pós-condição:**
Resultado final apresentado e ranking atualizado.
