#include "mainwindow.h"
#include "QMenuBar"
#include "QToolBar"
#include "QStatusBar"
#include "QLabel"
#include "QDockWidget"
#include "QTextEdit"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    resize(700,400);

    //菜单栏///////////////只能有一个
    QMenuBar * bar = menuBar();
    this->setMenuBar(bar);
    //创建文件菜单
    QMenu *fileMenu = bar->addMenu("文件");//添加文件菜单
    QMenu *editMenu = bar->addMenu("编辑");//添加编辑菜单
    QMenu *seeMenu = bar->addMenu("视图");//添加视图菜单
    QMenu *helpMenu = bar->addMenu("帮助");//添加帮助菜单
    //添加菜单项
    QAction *newAction = fileMenu->addAction("新建");
    QAction *openAction = fileMenu->addAction("打开");
    QAction *currentAction = fileMenu->addAction("最近");
    //添加分割线
    fileMenu->addSeparator();
    QAction *closeAction = fileMenu->addAction("关闭当前项目");
    QAction *settingAction = fileMenu->addAction("设置");

    //工具栏///////////////可以有多个
    QToolBar * toolbar = new QToolBar(this);
    this->addToolBar(Qt::LeftToolBarArea,toolbar);//设置默认左边停靠
    //设置只能左右停靠
    toolbar->setAllowedAreas(Qt::LeftToolBarArea | Qt::RightToolBarArea);
    //设置不能浮动
    toolbar->setFloatable(false);
    toolbar->addAction("新建");
    toolbar->addAction("打开");

    //状态栏  //只能有一个
    QStatusBar * stBar = statusBar();//申明状态栏
    this->setStatusBar(stBar);//添加状态栏
    QLabel * label = new QLabel("提示信息",this);//提示信息
    stBar->addWidget(label);//添加提示信息到左侧

    QLabel * label2 = new QLabel("提示信息",this);
    stBar->addPermanentWidget(label2);

    //铆接部件
    QDockWidget * dock = new QDockWidget;
    this->addDockWidget(Qt::BottomDockWidgetArea,dock);
    dock->setAllowedAreas(Qt::BottomDockWidgetArea | Qt::TopDockWidgetArea);

    //核心部件 只能有一个
    QTextEdit * textEdit = new QTextEdit(this);
    this->setCentralWidget(textEdit);

}

MainWindow::~MainWindow()
{
}

