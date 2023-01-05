#include "mywidget.h"

#include <QApplication> //应用程序头文件

int main(int argc, char *argv[]) //argc 命令行的变量数量 argv 命令行的变量数组
{
    //应用程序对象 a ,Qt中有且仅有一个
    QApplication a(argc, argv);
    MyWidget w;  //创建一个 MyWidgt 对象
    w.resize(600,600);
    w.show();  //弹出窗口
    return a.exec(); //进入消息循环机制
}
