#ifndef WORKMODEDIALOG_H
#define WORKMODEDIALOG_H

#include <QtGui/QDialog>

#include <QAction>

class MainWindow;

namespace Ui {
    class WorkModeDialog;
}

class WorkModeDialog : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(WorkModeDialog)
public:
    explicit WorkModeDialog( QWidget *parent = 0);
    virtual ~WorkModeDialog();

protected:
    virtual void changeEvent(QEvent *e);
    void enterEvent( QEvent* event );
    void leaveEvent( QEvent* event );

private:
    Ui::WorkModeDialog *m_ui;

    QAction* toEditMode;
    MainWindow* p;

private slots:
    void hideSnippets();
    void showSnippets();

// friend declarations
    friend class MainWindow;
};

#endif // WORKMODEDIALOG_H