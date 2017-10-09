/********************************************************************************
** Form generated from reading UI file 'sudoku.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUDOKU_H
#define UI_SUDOKU_H

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

class Ui_Sudoku
{
public:
    QAction *actionResolver;
    QAction *actionReiniciar;
    QAction *actionSair;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QTableWidget *tabuleiro;
    QHBoxLayout *horizontalLayout_2;
    QLabel *coords;
    QPushButton *ok_num;
    QSpinBox *SelNum;
    QSpacerItem *horizontalSpacer;
    QLabel *Iteracoes;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Sudoku)
    {
        if (Sudoku->objectName().isEmpty())
            Sudoku->setObjectName(QStringLiteral("Sudoku"));
        Sudoku->resize(496, 389);
        actionResolver = new QAction(Sudoku);
        actionResolver->setObjectName(QStringLiteral("actionResolver"));
        actionReiniciar = new QAction(Sudoku);
        actionReiniciar->setObjectName(QStringLiteral("actionReiniciar"));
        actionSair = new QAction(Sudoku);
        actionSair->setObjectName(QStringLiteral("actionSair"));
        centralWidget = new QWidget(Sudoku);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tabuleiro = new QTableWidget(centralWidget);
        if (tabuleiro->columnCount() < 9)
            tabuleiro->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabuleiro->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (tabuleiro->rowCount() < 9)
            tabuleiro->setRowCount(9);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        tabuleiro->setItem(0, 1, __qtablewidgetitem1);
        tabuleiro->setObjectName(QStringLiteral("tabuleiro"));
        tabuleiro->setEnabled(true);
        tabuleiro->setMinimumSize(QSize(270, 270));
        tabuleiro->setMaximumSize(QSize(270, 270));
        tabuleiro->setFrameShape(QFrame::NoFrame);
        tabuleiro->setFrameShadow(QFrame::Plain);
        tabuleiro->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tabuleiro->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tabuleiro->setAutoScroll(false);
        tabuleiro->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tabuleiro->setProperty("showDropIndicator", QVariant(false));
        tabuleiro->setDragDropOverwriteMode(false);
        tabuleiro->setSelectionMode(QAbstractItemView::SingleSelection);
        tabuleiro->setIconSize(QSize(50, 50));
        tabuleiro->setTextElideMode(Qt::ElideMiddle);
        tabuleiro->setShowGrid(true);
        tabuleiro->setRowCount(9);
        tabuleiro->setColumnCount(9);
        tabuleiro->horizontalHeader()->setVisible(false);
        tabuleiro->horizontalHeader()->setDefaultSectionSize(30);
        tabuleiro->horizontalHeader()->setHighlightSections(false);
        tabuleiro->horizontalHeader()->setMinimumSectionSize(30);
        tabuleiro->verticalHeader()->setVisible(false);
        tabuleiro->verticalHeader()->setCascadingSectionResizes(false);
        tabuleiro->verticalHeader()->setDefaultSectionSize(30);
        tabuleiro->verticalHeader()->setHighlightSections(false);
        tabuleiro->verticalHeader()->setMinimumSectionSize(30);

        horizontalLayout->addWidget(tabuleiro);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        coords = new QLabel(centralWidget);
        coords->setObjectName(QStringLiteral("coords"));

        horizontalLayout_2->addWidget(coords);

        ok_num = new QPushButton(centralWidget);
        ok_num->setObjectName(QStringLiteral("ok_num"));
        ok_num->setMaximumSize(QSize(40, 30));

        horizontalLayout_2->addWidget(ok_num);

        SelNum = new QSpinBox(centralWidget);
        SelNum->setObjectName(QStringLiteral("SelNum"));
        SelNum->setMaximumSize(QSize(40, 30));
        SelNum->setButtonSymbols(QAbstractSpinBox::NoButtons);
        SelNum->setMinimum(0);
        SelNum->setMaximum(9);

        horizontalLayout_2->addWidget(SelNum);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        Iteracoes = new QLabel(centralWidget);
        Iteracoes->setObjectName(QStringLiteral("Iteracoes"));

        horizontalLayout_2->addWidget(Iteracoes);


        verticalLayout->addLayout(horizontalLayout_2);

        Sudoku->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Sudoku);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 496, 20));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        Sudoku->setMenuBar(menuBar);
        statusBar = new QStatusBar(Sudoku);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Sudoku->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionResolver);
        menuMenu->addAction(actionReiniciar);
        menuMenu->addSeparator();
        menuMenu->addAction(actionSair);

        retranslateUi(Sudoku);

        QMetaObject::connectSlotsByName(Sudoku);
    } // setupUi

    void retranslateUi(QMainWindow *Sudoku)
    {
        Sudoku->setWindowTitle(QApplication::translate("Sudoku", "Sudoku", 0));
        actionResolver->setText(QApplication::translate("Sudoku", "Resolver", 0));
        actionReiniciar->setText(QApplication::translate("Sudoku", "Reiniciar", 0));
        actionSair->setText(QApplication::translate("Sudoku", "Sair", 0));

        const bool __sortingEnabled = tabuleiro->isSortingEnabled();
        tabuleiro->setSortingEnabled(false);
        tabuleiro->setSortingEnabled(__sortingEnabled);

        coords->setText(QApplication::translate("Sudoku", "X: 0 Y: 0", 0));
        ok_num->setText(QApplication::translate("Sudoku", "OK", 0));
        Iteracoes->setText(QApplication::translate("Sudoku", "TextLabel", 0));
        menuMenu->setTitle(QApplication::translate("Sudoku", "Menu", 0));
    } // retranslateUi

};

namespace Ui {
    class Sudoku: public Ui_Sudoku {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUDOKU_H
