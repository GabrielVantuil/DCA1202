/********************************************************************************
** Form generated from reading UI file 'mainsudoku.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINSUDOKU_H
#define UI_MAINSUDOKU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainSudoku
{
public:
    QAction *actionReiniciar;
    QAction *actionResolver;
    QAction *actionSair;
    QAction *actionNovo_jogo;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *tabuleiro;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *HorizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *coords;
    QSpinBox *SelNum;
    QPushButton *ok_num;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QLabel *Iteracoes;
    QMenuBar *menuBar;
    QMenu *menuReiniciar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainSudoku)
    {
        if (MainSudoku->objectName().isEmpty())
            MainSudoku->setObjectName(QStringLiteral("MainSudoku"));
        MainSudoku->resize(296, 397);
        actionReiniciar = new QAction(MainSudoku);
        actionReiniciar->setObjectName(QStringLiteral("actionReiniciar"));
        actionResolver = new QAction(MainSudoku);
        actionResolver->setObjectName(QStringLiteral("actionResolver"));
        actionSair = new QAction(MainSudoku);
        actionSair->setObjectName(QStringLiteral("actionSair"));
        actionNovo_jogo = new QAction(MainSudoku);
        actionNovo_jogo->setObjectName(QStringLiteral("actionNovo_jogo"));
        centralWidget = new QWidget(MainSudoku);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        tabuleiro = new QTableWidget(centralWidget);
        if (tabuleiro->columnCount() < 9)
            tabuleiro->setColumnCount(9);
        if (tabuleiro->rowCount() < 9)
            tabuleiro->setRowCount(9);
        tabuleiro->setObjectName(QStringLiteral("tabuleiro"));
        tabuleiro->setMinimumSize(QSize(270, 270));
        tabuleiro->setMaximumSize(QSize(270, 270));
        tabuleiro->setFocusPolicy(Qt::NoFocus);
        tabuleiro->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tabuleiro->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tabuleiro->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tabuleiro->setRowCount(9);
        tabuleiro->setColumnCount(9);
        tabuleiro->horizontalHeader()->setVisible(false);
        tabuleiro->horizontalHeader()->setDefaultSectionSize(30);
        tabuleiro->horizontalHeader()->setMinimumSectionSize(30);
        tabuleiro->verticalHeader()->setVisible(false);
        tabuleiro->verticalHeader()->setMinimumSectionSize(30);

        horizontalLayout_2->addWidget(tabuleiro);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        HorizontalLayout = new QHBoxLayout();
        HorizontalLayout->setSpacing(6);
        HorizontalLayout->setObjectName(QStringLiteral("HorizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        HorizontalLayout->addItem(horizontalSpacer_2);

        coords = new QLabel(centralWidget);
        coords->setObjectName(QStringLiteral("coords"));
        coords->setMinimumSize(QSize(70, 0));
        coords->setMaximumSize(QSize(100, 50));
        coords->setAlignment(Qt::AlignCenter);

        HorizontalLayout->addWidget(coords);

        SelNum = new QSpinBox(centralWidget);
        SelNum->setObjectName(QStringLiteral("SelNum"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SelNum->sizePolicy().hasHeightForWidth());
        SelNum->setSizePolicy(sizePolicy);
        SelNum->setMaximumSize(QSize(30, 25));
        SelNum->setAlignment(Qt::AlignCenter);
        SelNum->setButtonSymbols(QAbstractSpinBox::NoButtons);
        SelNum->setMaximum(9);

        HorizontalLayout->addWidget(SelNum);

        ok_num = new QPushButton(centralWidget);
        ok_num->setObjectName(QStringLiteral("ok_num"));
        sizePolicy.setHeightForWidth(ok_num->sizePolicy().hasHeightForWidth());
        ok_num->setSizePolicy(sizePolicy);
        ok_num->setMaximumSize(QSize(40, 25));

        HorizontalLayout->addWidget(ok_num);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        HorizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(HorizontalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Iteracoes = new QLabel(centralWidget);
        Iteracoes->setObjectName(QStringLiteral("Iteracoes"));
        Iteracoes->setMaximumSize(QSize(16777215, 25));
        Iteracoes->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Iteracoes);


        verticalLayout->addLayout(horizontalLayout);

        MainSudoku->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainSudoku);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 296, 20));
        menuReiniciar = new QMenu(menuBar);
        menuReiniciar->setObjectName(QStringLiteral("menuReiniciar"));
        MainSudoku->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainSudoku);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainSudoku->setStatusBar(statusBar);

        menuBar->addAction(menuReiniciar->menuAction());
        menuReiniciar->addAction(actionNovo_jogo);
        menuReiniciar->addAction(actionResolver);
        menuReiniciar->addAction(actionReiniciar);
        menuReiniciar->addSeparator();
        menuReiniciar->addAction(actionSair);

        retranslateUi(MainSudoku);

        QMetaObject::connectSlotsByName(MainSudoku);
    } // setupUi

    void retranslateUi(QMainWindow *MainSudoku)
    {
        MainSudoku->setWindowTitle(QApplication::translate("MainSudoku", "MainSudoku", 0));
        actionReiniciar->setText(QApplication::translate("MainSudoku", "Reiniciar", 0));
        actionResolver->setText(QApplication::translate("MainSudoku", "Resolver", 0));
        actionSair->setText(QApplication::translate("MainSudoku", "Sair", 0));
        actionNovo_jogo->setText(QApplication::translate("MainSudoku", "Novo_Jogo", 0));
        label->setText(QApplication::translate("MainSudoku", "SUDOKU", 0));
        coords->setText(QApplication::translate("MainSudoku", "X: 0 Y:0", 0));
        ok_num->setText(QApplication::translate("MainSudoku", "OK", 0));
        Iteracoes->setText(QApplication::translate("MainSudoku", "Iteracoes: 0", 0));
        menuReiniciar->setTitle(QApplication::translate("MainSudoku", "Menu", 0));
    } // retranslateUi

};

namespace Ui {
    class MainSudoku: public Ui_MainSudoku {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINSUDOKU_H
