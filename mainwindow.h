#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QDebug>
#include <QFileDialog>
#include <QPropertyAnimation>
#include <QClipboard>
#include <QPrinter>
#include <QPrintDialog>
#include <QPainter>
#include <QPageSetupDialog>

#include "settings.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void MainWindow::resizeEvent(QResizeEvent * event);
    void MainWindow::closeEvent(QCloseEvent *event);

private slots:
    void clipboardChanged();

    void on_actionRazveljavi_triggered();

    void on_actionPonovi_triggered();

    void on_actionIzhod_triggered();

    void on_actionShrani_triggered();

    void on_actionShrani_kot_triggered();

    void on_plainTextEdit_textChanged();

    void on_actionOdpri_triggered();

    void on_actionZavrzi_spremembe_triggered();

    void on_actionNajdi_triggered();

    void on_plainTextEdit_undoAvailable(bool b);

    void on_plainTextEdit_copyAvailable(bool b);

    void on_plainTextEdit_redoAvailable(bool b);

    void on_actionIzberi_vse_triggered();

    void on_actionIzbrisi_triggered();

    void on_actionPrilepi_triggered();

    void on_actionIzrezi_triggered();

    void on_actionKopiraj_triggered();

    void on_pushButtonSearch_clicked();

    void on_pushButtonCount_clicked();

    void on_toolButtonSwitch_clicked();

    void on_pushButtonReplace_clicked();

    void on_pushButtonReplaceAll_clicked();

    void on_actionNastavitve_triggered();

    void on_actionNov_triggered();

    void on_toolButtonNew_clicked();

    void on_toolButtonOpen_clicked();

    void on_toolButtonSave_clicked();

    void on_toolButtonPrint_clicked();

    void on_toolButtonCut_clicked();

    void on_toolButtonCopy_clicked();

    void on_toolButtonPaste_clicked();

    void on_toolButtonUndo_clicked();

    void on_toolButtonRedo_clicked();

    void on_toolButtonSearch_clicked();

    void on_toolButtonSettings_clicked();

    void on_plainTextEdit_cursorPositionChanged();

    void on_actionNatisni_triggered();

    void on_actionNastavitev_strani_triggered();

    void on_toolButtonZoomIn_clicked();

    void on_toolButtonZoomOut_clicked();

    void on_actionPovecaj_triggered();

    void on_actionPomanjsaj_triggered();

    void on_actionPrivzeta_povecava_triggered();

private:
    Ui::MainWindow *ui;

    Settings *set = new Settings();

    QPrinter printer;
    QFile file;
    QString filename;

    bool textChanged;
    bool searchBarVisible;
    bool replaceBarVisible;
    int zoom;

    int fileChanged();
    bool save();
};

#endif // MAINWINDOW_H
