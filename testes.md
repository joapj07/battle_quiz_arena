
# Processo de Validação e Testes do Sistema

## 🔎 Casos de Teste Estruturados

## Verificação de Seleção de Classe
- **Ação Executada:** Clicar em um dos botões de herói na primeira aba da aplicação.
- **Comportamento Esperado:** O jogo cria a instância do personagem correto na memória com os valores exatos de HP e ataque da classe correspondente.

## Resposta de Pergunta Correta
- **Ação Executada:** Selecionar a alternativa correta em uma das questões do Quiz central.
- **Comportamento Esperado:** O herói dispara sua rotina de ataque, a barra de vida do Chefão reduz proporcionalmente e o turno passa para o jogador sem sofrer dano.

### Resposta de Pergunta Incorreta
- **Ação Executada:** Selecionar uma alternativa incorreta nas opções do painel.
- **Comportamento Esperado:** A rotina de ataque falha, o Chefão dispara seu contra-ataque em tempo real reduzindo a barra de progresso de vida do jogador e imprime a provocação exata no log.

### Ativação de Consumível do Inventário
- **Ação Executada:** Clicar no gatilho de usar a Poção de Cura no painel lateral.
- **Comportamento Esperado:** O ponteiro do item é removido do vetor de inventário do herói, o HP do jogador recupera 50 pontos na barra visual e o Chefão emite uma reclamação textual sem desferir ataque.

### Persistência Física do Ranking
- **Ação Executada:** Concluir a batalha com vitória, digitar o nome no campo apropriado e fechar o executável.
- **Comportamento Esperado:** O sistema cria ou atualiza o arquivo físico `ranking.txt` localmente. Ao reiniciar o jogo, os dados salvos reaparecem preenchidos na tabela.

### Inicialização de Evento Aleatório
- **Ação Executada:** Avançar os turnos do quiz até disparar um dos gatilhos de probabilidade.
- **Comportamento Esperado:** O painel de texto de combate altera o fluxo, gera a mensagem de aviso na tela e altera os multiplicadores de dano ou itens da rodada atual.

### Transição de Temas em Tempo de Execução
- **Ação Executada:** Clicar no botão seletor de modo visual.
- **Comportamento Esperado:** A interface injeta o novo StyleSheet alterando as cores de botões e planos de fundo de forma global sem quebrar ou resetar as vidas do combate ativo.

### Geração de Arquivo Externo de Log
- **Ação Executada:** Encerrar a partida e clicar no comando para exportar o histórico.
- **Comportamento Esperado:** O software varre o componente textual de log da memória, cria um arquivo físico `log_partida.txt` e transfere o relatório idêntico para o computador.
