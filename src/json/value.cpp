/*
 * @Author: aloneisbestes aloneisbestes@gmail.com
 * @Date: 2023-05-20 00:15:22
 * @LastEditors: aloneisbestes aloneisbestes@gmail.com
 * @LastEditTime: 2023-05-20 00:24:19
 * @FilePath: /work/git/jsonparse/src/json/value.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */

#include "../../include/jsonparse/value.h"

using namespace MJson;

const std::string MValue::__nullstr="null";
const std::string MValue::__booltrue="true";
const std::string MValue::__boolfalse="false";

MValue::MValue() {
    
}

MValue::MValue(int value) {

}

MValue::MValue(double value) {

}

MValue::MValue(bool value) {

}

MValue::MValue(const char *value) {

}

MValue::MValue(const std::string &value)
    :MValue(value.c_str())
{
}

MValue::MValue(const MValue &value) {

}