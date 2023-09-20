#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main() {
    std::string directory = "./"; // 你想要创建HTML文件的目录路径
    std::string days[] = {"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};

    for (int i = 0; i < 7; ++i) {
        // 构建文件名，例如：Monday.html, Tuesday.html, ...
        std::ostringstream filename;
        filename << directory << days[i] << ".html";

        // 创建HTML文件并写入基本内容
        // 创建HTML文件并写入基本内容
// 创建HTML文件并写入基本内容
std::ofstream htmlFile(filename.str());
if (htmlFile.is_open()) {
    htmlFile << "<!DOCTYPE html>\n";
    htmlFile << "<html>\n";
    htmlFile << "<head>\n";
    htmlFile << "<title>" << days[i] << "课表</title>\n"; // 修改标题为课表标题
    htmlFile << "</head>\n";
    htmlFile << "<body>\n";
    htmlFile << "<center><font size=\"20px\"><h1>" << days[i] << "课表</h1></font></center>\n";
    htmlFile << "<table width=\"100%\">\n";
    htmlFile << "<tr>\n";
    htmlFile << "<td width=\"30%\">\n";
    htmlFile << "<font size=\"6px\">\n";
    htmlFile << "<table>\n";
    htmlFile << "<tr>\n";
    htmlFile << "<td> <a href=\"./index.html\">全周</a> </td>\n";
    htmlFile << "</tr>\n";
    htmlFile << "<tr>\n";
    htmlFile << "<td><a href=\"./monday.html\">周一</a></td>\n";
    htmlFile << "</tr>\n";
    htmlFile << "<tr>\n";
    htmlFile << "<td><a href=\"./tuesday.html\">周二</a></td>\n";
    htmlFile << "</tr>\n";
    htmlFile << "<tr>\n";
    htmlFile << "<td><a href=\"./wednesday.html\">周三</a></td>\n";
    htmlFile << "</tr>\n";
    htmlFile << "<tr>\n";
    htmlFile << "<td><a href=\"./thursday.html\">周四</a></td>\n";
    htmlFile << "</tr>\n";
    htmlFile << "<tr>\n";
    htmlFile << "<td><a href=\"./friday.html\">周五</a></td>\n";
    htmlFile << "</tr>\n";
    htmlFile << "<tr>\n";
    htmlFile << "<td><a href=\"./saturday.html\">周六</a></td>\n";
    htmlFile << "</tr>\n";
    htmlFile << "<tr>\n";
    htmlFile << "<td><a href=\"./sunday.html\">周日</a></td>\n";
    htmlFile << "</tr>\n";
    htmlFile << "</table>\n";
    htmlFile << "</font>\n";
    htmlFile << "</td>\n";
    htmlFile << "<td>\n";
    htmlFile << "<font size=\"8px\">\n";
    htmlFile << "<table border=\"3px\" >\n";
    htmlFile << "<tr>\n";
    htmlFile << "<td>课程名</td>\n";
    htmlFile << "<td>教室</td>\n";
    htmlFile << "<td>节次</td>\n";
    htmlFile << "<td>教师</td>\n";
    htmlFile << "</tr>\n";
    htmlFile << "<tr>\n";
    htmlFile << "<td>机器学习</td>\n";
    htmlFile << "<td>图西234</td>\n";
    htmlFile << "<td>1——2</td>\n";
    htmlFile << "<td>张老师</td>\n";
    htmlFile << "</tr>\n";
    htmlFile << "<tr>\n";
    htmlFile << "<td>数据结构</td>\n";
    htmlFile << "<td>商学院304</td>\n";
    htmlFile << "<td>3——4</td>\n";
    htmlFile << "<td>李老师</td>\n";
    htmlFile << "</tr>\n";
    htmlFile << "</table>\n";
    htmlFile << "</font>\n";
    htmlFile << "</td>\n";
    htmlFile << "</tr>\n";
    htmlFile << "</table>\n"; // 关闭外层table标签
    htmlFile << "</body>\n";
    htmlFile << "</html>\n";
    htmlFile.close();
    std::cout << "Created " << filename.str() << std::endl;
} else {
    std::cerr << "Unable to create " << filename.str() << std::endl;
}
    }

    return 0;
}
