#include <QMainWindow>
#include <QMessageBox>
#include <QInputDialog>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QString>
#include <vector>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void isidata();
    void sequensial_search();
    void binary_search();
    void cetakdata();

private:
    QTableWidget *tableWidget;
    std::vector<int> nim;
    std::vector<QString> nama;
    std::vector<int> nilai;
};

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), tableWidget(new QTableWidget(this))
{
    // Setup GUI and connect signals to slots
}

MainWindow::~MainWindow() {}

void MainWindow::isidata()
{
    bool ok;
    while (true)
    {
        int inputNIM = QInputDialog::getInt(this, "Input NIM", "Masukkan NIM:", 0, 0, 9999999, 1, &ok);
        if (!ok)
            break; // Jika pengguna menekan cancel

        QString inputNama = QInputDialog::getText(this, "Input Nama", "Masukkan Nama Mahasiswa:", QLineEdit::Normal, "", &ok);
        if (!ok)
            break;

        int inputNilai = QInputDialog::getInt(this, "Input Nilai", "Masukkan Nilai Ujian:", 0, 0, 100, 1, &ok);
        if (!ok)
            break;

        // Simpan data ke dalam vector
        nim.push_back(inputNIM);
        nama.push_back(inputNama);
        nilai.push_back(inputNilai);
    }
}

// Implementasi untuk fungsi sequensial_search(), binary_search(), dan cetakdata() di sini

// temp = arr[minIndex];
nim_temp = nim[z];
nm_temp = nm[z];
nl_temp = nl[z];

// arr[minIndex] = arr[i];
nim[z] = nim[x];
nm[z] = nm[x];
nl[z] = nl[x];

// arr[i] = temp;
nim[x] = nim_temp;
nm[x] = nim_temp;
nl[x] = nl_temp;