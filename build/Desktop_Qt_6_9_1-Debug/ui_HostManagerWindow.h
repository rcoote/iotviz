/********************************************************************************
** Form generated from reading UI file 'HostManagerWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOSTMANAGERWINDOW_H
#define UI_HOSTMANAGERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Window
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QTreeView *fileSystemView;
    QVBoxLayout *verticalLayout_2;
    QPushButton *connectButton;
    QPushButton *downloadButton;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_3;
    QPlainTextEdit *remoteCommands;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButtonSaveCommands;
    QPushButton *pushButtonSendCommand;
    QHBoxLayout *horizontalLayout_2;
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *hostLineEdit;
    QLabel *label_3;
    QLineEdit *userLineEdit;
    QLabel *label_4;
    QLineEdit *passwordLineEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonSaveCredentials;
    QTreeView *treeViewHosts;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *outputTextEdit;
    QCheckBox *checkBoxConnectOnClick;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_5;
    QPlainTextEdit *hostNotesPlainTextEdit;
    QPushButton *saveNotesButton;

    void setupUi(QDialog *Window)
    {
        if (Window->objectName().isEmpty())
            Window->setObjectName("Window");
        Window->resize(700, 676);
        gridLayout = new QGridLayout(Window);
        gridLayout->setObjectName("gridLayout");
        groupBox_2 = new QGroupBox(Window);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        fileSystemView = new QTreeView(groupBox_2);
        fileSystemView->setObjectName("fileSystemView");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(fileSystemView->sizePolicy().hasHeightForWidth());
        fileSystemView->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(fileSystemView);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        connectButton = new QPushButton(groupBox_2);
        connectButton->setObjectName("connectButton");

        verticalLayout_2->addWidget(connectButton);

        downloadButton = new QPushButton(groupBox_2);
        downloadButton->setObjectName("downloadButton");

        verticalLayout_2->addWidget(downloadButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout_3);


        gridLayout->addWidget(groupBox_2, 1, 1, 1, 1);

        groupBox_4 = new QGroupBox(Window);
        groupBox_4->setObjectName("groupBox_4");
        verticalLayout_3 = new QVBoxLayout(groupBox_4);
        verticalLayout_3->setObjectName("verticalLayout_3");
        remoteCommands = new QPlainTextEdit(groupBox_4);
        remoteCommands->setObjectName("remoteCommands");

        verticalLayout_3->addWidget(remoteCommands);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pushButtonSaveCommands = new QPushButton(groupBox_4);
        pushButtonSaveCommands->setObjectName("pushButtonSaveCommands");

        horizontalLayout_4->addWidget(pushButtonSaveCommands);

        pushButtonSendCommand = new QPushButton(groupBox_4);
        pushButtonSendCommand->setObjectName("pushButtonSendCommand");

        horizontalLayout_4->addWidget(pushButtonSendCommand);


        verticalLayout_3->addLayout(horizontalLayout_4);


        gridLayout->addWidget(groupBox_4, 2, 0, 2, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        buttonBox = new QDialogButtonBox(Window);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Close);

        horizontalLayout_2->addWidget(buttonBox);


        gridLayout->addLayout(horizontalLayout_2, 5, 1, 1, 1);

        groupBox = new QGroupBox(Window);
        groupBox->setObjectName("groupBox");
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName("formLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        hostLineEdit = new QLineEdit(groupBox);
        hostLineEdit->setObjectName("hostLineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, hostLineEdit);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        userLineEdit = new QLineEdit(groupBox);
        userLineEdit->setObjectName("userLineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, userLineEdit);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        passwordLineEdit = new QLineEdit(groupBox);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setEchoMode(QLineEdit::EchoMode::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, passwordLineEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonSaveCredentials = new QPushButton(groupBox);
        pushButtonSaveCredentials->setObjectName("pushButtonSaveCredentials");

        horizontalLayout->addWidget(pushButtonSaveCredentials);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout);


        gridLayout->addWidget(groupBox, 0, 1, 1, 1);

        treeViewHosts = new QTreeView(Window);
        treeViewHosts->setObjectName("treeViewHosts");

        gridLayout->addWidget(treeViewHosts, 0, 0, 2, 1);

        groupBox_3 = new QGroupBox(Window);
        groupBox_3->setObjectName("groupBox_3");
        verticalLayout = new QVBoxLayout(groupBox_3);
        verticalLayout->setObjectName("verticalLayout");
        outputTextEdit = new QPlainTextEdit(groupBox_3);
        outputTextEdit->setObjectName("outputTextEdit");

        verticalLayout->addWidget(outputTextEdit);


        gridLayout->addWidget(groupBox_3, 3, 1, 1, 1);

        checkBoxConnectOnClick = new QCheckBox(Window);
        checkBoxConnectOnClick->setObjectName("checkBoxConnectOnClick");

        gridLayout->addWidget(checkBoxConnectOnClick, 5, 0, 1, 1);

        groupBox_5 = new QGroupBox(Window);
        groupBox_5->setObjectName("groupBox_5");
        verticalLayout_5 = new QVBoxLayout(groupBox_5);
        verticalLayout_5->setObjectName("verticalLayout_5");
        hostNotesPlainTextEdit = new QPlainTextEdit(groupBox_5);
        hostNotesPlainTextEdit->setObjectName("hostNotesPlainTextEdit");

        verticalLayout_5->addWidget(hostNotesPlainTextEdit);

        saveNotesButton = new QPushButton(groupBox_5);
        saveNotesButton->setObjectName("saveNotesButton");

        verticalLayout_5->addWidget(saveNotesButton);


        gridLayout->addWidget(groupBox_5, 4, 0, 1, 1);


        retranslateUi(Window);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Window, qOverload<>(&QDialog::reject));
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Window, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(Window);
    } // setupUi

    void retranslateUi(QDialog *Window)
    {
        Window->setWindowTitle(QCoreApplication::translate("Window", "Preferences", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Window", "Remote File System", nullptr));
        connectButton->setText(QCoreApplication::translate("Window", "Connect", nullptr));
        downloadButton->setText(QCoreApplication::translate("Window", "Download...", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Window", "Commands", nullptr));
        pushButtonSaveCommands->setText(QCoreApplication::translate("Window", "save commands", nullptr));
        pushButtonSendCommand->setText(QCoreApplication::translate("Window", "send command", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Window", "Connection Parameters", nullptr));
        label->setText(QCoreApplication::translate("Window", "Remote host:", nullptr));
        label_3->setText(QCoreApplication::translate("Window", "User:", nullptr));
        label_4->setText(QCoreApplication::translate("Window", "Password:", nullptr));
        pushButtonSaveCredentials->setText(QCoreApplication::translate("Window", "save", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Window", "Debug output", nullptr));
        checkBoxConnectOnClick->setText(QCoreApplication::translate("Window", "Connect on click", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("Window", "Notes", nullptr));
        saveNotesButton->setText(QCoreApplication::translate("Window", "Save Notes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Window: public Ui_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOSTMANAGERWINDOW_H
