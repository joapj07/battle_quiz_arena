#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "character.h"
#include "boss.h"
#include "questionmanager.h"
#include "item.h"
#include <QVector>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

private:
    Ui::MainWindow *ui;

    // Ponteiros para as instâncias do jogo (POO na prática!)
    Character* player;
    Boss* boss;
    QuestionManager questionManager;
    QVector<Item*> inventory;

    Question currentQuestion;
    int score;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    // Slots para os botões da interface gráfica
    void on_btnSelectWarrior_clicked();
    void on_btnSelectMage_clicked();
    void on_btnSelectArcher_clicked();
    void on_btnAnswer_clicked();
    void on_btnUsePotion_clicked();
    void on_btnUseBuff_clicked();

private:
    void startMatch();
    void nextTurn();
    void updateUiStatus();
    void checkGameOver();
};

#endif // MAINWINDOW_H