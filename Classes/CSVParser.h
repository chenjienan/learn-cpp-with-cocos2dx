//
// Created by Terence Machine on 2020/6/6.
//

#pragma once

#include "cocos2d.h"
#include <string>
#include <vector>

using namespace std;

USING_NS_CC;

namespace CSVParser {

    class Row {

    private:
        const vector<string>* m_header;
        vector<string> m_values;

    public:
        Row() { }
        ~Row() { }

        void push_back(const string& value) {
            m_values.push_back(value);
        }

        void setHeader(const vector<string>* header) {
            m_header = header;
        }

        // 每行数据有多少字段
        unsigned int size() const {
            return m_values.size();
        }

        // 运算符 [] 重载
        string& operator[](unsigned int key) {
            if (key < size()) {
                return m_values[key];
            }
            throw "cannot return this value (doesn't exist)";
        }

        // 运算符 [] 重载
        string& operator[](const string& key) {
            vector<string>::const_iterator iterator;
            int pos = 0;
            for (iterator = (*m_header).begin(); iterator != (*m_header).end(); iterator++) {
                if (key == *iterator) {
                    return m_values[pos];
                }
                pos++;
            }
            throw "cannot return this value (doesn't exist)";
        }
    };


    class Csv {

    private:
        vector<Row> m_content;
        vector<string> m_header;
        string m_strErrorInfo;

        vector<string> getHeader() const {
            return m_header;
        }

        const string& getErrorInfo() const {
            return m_strErrorInfo;
        }

        unsigned int getRowCount() const {
            return m_content.size();
        }

        unsigned int getColumnCount() const {
            return m_header.size();
        }

        void setHeader();

        void Load(const string& filename, string& Data);

        void Parse(const string& filename);

        Row& operator[](unsigned int key);

    public:
        Csv(const string& filename);
        ~Csv() {}
    };
}