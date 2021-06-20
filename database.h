#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QString>

/*
此数据库功分为三张表
1. material---器件表
    id:     自增id
    name:   器件名称
    price:  器件价格

2.  checklist---用户清单表
    id:                 自增id
    title:               清单表表题
    material_id:        器件id
    material_counter:   器件数量
*/

// 用于描述器件信息的结构体
typedef  struct {
    quint64 id;
    QString name;
    quint64 price;
}material_t;

// 用于描述用户清单表的结构体
typedef struct {
    quint64 id;
    QString title;
    quint64 materialID;
    quint64 materialCounter;
} checkList_t;



class database
{
public:
    database();  // 默认构造函数，初始化数据库，并生成连接池

    /* 器件表操作 */

    // 添加一个器件
    int addMaterial(QString name, quint64 price);
    // 更新一个器件信息
    int updateMaterial(quint64 id, QString name, quint64 pire);
    // 根据关键字查找器件信息
    int selectMaterial(QString key, material_t material);
    // 根据器件id删除器件信息
    int deleteMaterial(quint64 id);

    /* 用户清单表结构体 */

    // 创建一个用户清单列表
    int createCheckList(QString title);
    // 往用户清单列表中添加清单数据
    int addCheckList(quint64 materialID);
    // 更新用户清单列表单条数据
    int updateCheckList(quint64 materialID, quint64 materialCounter);
    // 根据用户清单列表的表题，查找所有该表题的数据
    int selectCheckList(QString title);
    // 根据用户清单列表的表题，删除相关表题的数据
    int deleteCheckList(QString title);
    // 析构函数
    ~database(); // 关闭数据库连接
private:
    QSqlDatabase db;
};

#endif // DATABASE_H
