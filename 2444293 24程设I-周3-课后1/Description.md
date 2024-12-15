# 24程设I-周3-课后1

# HTTP 请求报文

Http协议在当今的互联网中发挥着重要的作用，因此爱学习的小洛对于HTTP协议的原理也感到非常的好奇。经过阅读标准文件[RFC 2616](https://datatracker.ietf.org/doc/html/rfc2616)，小洛总结出HTTP请求报文的格式如下图所示：

![http_get_format](/api/users/image?path=100930369/images/1727025436229.png)

其中各个字段有可选值：

- 请求方法：GET、POST
- 协议版本：HTTP/1.1、HTTP/2
- 头部字段名：Host、Origin、User-Agent、Connection等

而你作为C语言大佬，将被小洛任命实现一个非常简易的HTTP请求报文生成器。

## 问题要求

你将实现一个程序用于从标准输入中获取用户输入，并根据用户的输入生成HTTP请求报文。

用户将输入：请求方法、URL、协议版本，头部字段 Host 的值、以及请求数据。

用户输入满足以下约束：

- 请求方法只有 GET和POST
- URL的长度小于等于255
- 协议版本只有：HTTP/1.1和HTTP/2
- 头部字段 Host 的值的长度小于255
- 请求数据的长度小于4095。

**注意：输出时，每行行尾在换行前有一个看不见的回车符\r**

## 问题输入

标准输入5行。每行分别为：

- 第一行：请求方法
- 第二行：URL
- 第三行：协议版本
- 第四行：头部字段Host的值
- 第五行：请求数据

## 问题输出

按格式生成的 HTTP 请求报文

## 提示

字符串类型的变量`URL`可以这样定义和接收输入为其赋值：

```
char URL[256];
scanf("%s",URL);
```

## 输入输出样例

### 样例一

输入：

```
GET
/index.html
HTTP/1.1
www.baidu.com
aHR0cHM6Ly9tYXRyaXguc3lzdS5lZHUuY24vYWJvdXQvcmVjcnVpdGluZy8=
```

输出：

```
GET /index.html HTTP/1.1
Host:www.baidu.com

aHR0cHM6Ly9tYXRyaXguc3lzdS5lZHUuY24vYWJvdXQvcmVjcnVpdGluZy8=
```

### 样例二

输入：

```
POST
/search
HTTP/2
www.google.com
waibibabu?
```

输出：

```
POST /search HTTP/2
Host:www.google.com

waibibabu?
```

