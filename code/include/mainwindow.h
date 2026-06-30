#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QGroupBox>
#include <QPushButton>
#include <QLabel>
#include <QRadioButton>
#include <QTextBrowser>

#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGridLayout>

#include <QVector>

#include "character.h"
#include "boss.h"
#include "questionmanager.h"
#include "item.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent =nullptr);
    ~MainWindow();

private:

    //-----------------------------
    // COMPONENTES
    //-----------------------------

    QWidget *centralWidget;

    QGroupBox *groupSelection;
    QGroupBox *groupCombat;
    QGroupBox *groupInventory;

    QPushButton *btnSelectWarrior;
    QPushButton *btnSelectMage;
    QPushButton *btnSelectArcher;

    QPushButton *btnAnswer;
    QPushButton *btnUsePotion;
    QPushButton *btnUseBuff;

    QLabel *lblPlayerHp;
    QLabel *lblPlayerAtk;
    QLabel *lblBossHp;
    QLabel *lblScore;
    QLabel *lblQuestion;

    QRadioButton *radioOpt1;
    QRadioButton *radioOpt2;
    QRadioButton *radioOpt3;
    QRadioButton *radioOpt4;

    QTextBrowser *txtBattleLog;

    QVBoxLayout *mainLayout;
    QHBoxLayout *selectionLayout;
    QGridLayout *combatLayout;
    QHBoxLayout *inventoryLayout;

    //-----------------------------
    // LÓGICA
    //-----------------------------

    Character *player;
    Boss *boss;

    QuestionManager questionManager;

    QVector<Item*> inventory;

    Question currentQuestion;

    int score;

private slots:

    void on_btnSelectWarrior_clicked();
    void on_btnSelectMage_clicked();
    void on_btnSelectArcher_clicked();

    void on_btnAnswer_clicked();

    void on_btnUsePotion_clicked();
    void on_btnUseBuff_clicked();

private:

    void createInterface();

    void createConnections();

    void startMatch();

    void nextTurn();

    void updateUiStatus();

    void checkGameOver();
};

#endif // MAINWINDOW_H