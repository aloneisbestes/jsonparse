/*
 * @Author: aloneisbestes aloneisbestes@gmail.com
 * @Date: 2023-05-19 00:16:54
 * @LastEditors: aloneisbestes aloneisbestes@gmail.com
 * @LastEditTime: 2023-05-20 00:24:04
 * @FilePath: /jsonparse/include/json/json.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
 
#ifndef __MJSON_VALUE_H__
#define __MJSON_VALUE_H__

#include <string>

namespace MJson{

// MJsonType: 用于表示json存储的类型
enum MJsonType {
    nullType,
    intType,
    /*int64Type,
    uintType,*/
    doubleType,
    stringType,
    arrayType,
    objectType,
    boolType
};

class MValue {
private:
    // 存储类型
    union RandomData
    {
        /* data */
        int integer;
        double decimals;
        bool boolean;
        std::string *str;
        MValue *value;
    };
     
    // null, bool特殊类型值
    const static std::string __nullstr;
    const static std::string __booltrue;
    const static std::string __boolfalse;

public:
    MValue();
    MValue(int);
    MValue(double);
    MValue(bool);
    MValue(const char *);
    MValue(const std::string &);
    MValue(const MValue &);

private:
    RandomData m_random_data;
    MJsonType m_json_type;  // 数据类型
};

};

#endif // __JSON_VALUE_H__