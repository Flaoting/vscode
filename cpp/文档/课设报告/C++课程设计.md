<br>
<br>

  `<center>

<font size=8> 

南京航空航天大学

<br>

《程序设计课程设计》报告 
  
  </font>


<font  size=7>  状元阁管理系统 </font>


<br>

<br>
<br>
<br>
<font face="黑体" size=6>
<br>
<br>
<br>

班级 1619103

学号 161910322

姓名 潘佳辉           

 指导教师 郑洪源

 完成日期  2020年5月20日

</font>


<div STYLE="page-break-after: always;"></div>

## 目录(最后写)

<div STYLE="page-break-after: always;"></div>

##  A 需求分析 

  </center>`

### 背景陈设

状元阁坐落于河北省滦州市，创立于2019年夏，是由沈俊东(大连理工大学)、李品桥(清华大学)等河北衡水第一中学优秀毕业生牵头创办的高中生课外辅导机构。自机构成立以来，得到一众高中学生和家长的一致认可，状元阁在当地广受好评。去年暑假，成立之初的状元阁便取得营业额30万元的佳绩。

作为机构任课教师，我有能力和义务用所学的专业知识为状元阁添砖加瓦。

适逢在大一下学期学习了《C++程序设计》这门课程，让酷爱编程学习的我得到一个展示自己的机会，在课程设计布置任务之初，我便决定为状元阁开发一个实用、高效、安全的管理系统，虽然这个设计的出发点远远没有其他同学的宏大雄伟，但是经过一系列的测试，此系统的可靠性和可拓展性是非常不错的。

此外，开发状元阁管理系统的工作量还是比较大的，截止到2020/5/19，有效代码量已经超过了10000行，值得一提的是，在当前的版本中，有些程序的接口虽然没有被用到，但这些接口为以后的版本更新和增减新功能提供了极大的便利，这也体现了此次开发管理系统是从实际出发的特点，所有功能和设计都为满足现有或者未来的的用户需求。

总结一下就是状元阁管理系统是从实际的需求出发，开发出的一款实用性、可拓展性都很强的管理系统。


### 开发目的：

1. 减轻状元阁内部的管理压力
2. 避免人为因素(核对课表和缴费信息错误等)造成的店内不必要的损失
3. 提升数据管理效率和安全性
4. 实现内部数据统一管理和保存
5. 实现可视化数据和内部存储数据的转换
6. 增强机构的整体竞争力
	
### 开发目标：
1. 操作界面图形化界面
2. 操作简便，上手容易
3. 安全性高，可移植性好（稍加修改可为其他机构服务）
4. 文件生成和保存的机制严密
5. 实现数据的备份和隐藏


### 为什么使用C++
+ C++ 是一门伟大的编程语言，同时具有面向对象和面向过程的特性
+ 对开发者友好，减轻了函数和控制的负担
+ 利用面向对象的编程形式方便版本升级
+ 能够连接SQL，在有条件时进行数据库的连接
+ 学生、老师、课表等典型的类能够实现很好地操作
+ 文件保存比较便捷

<div STYLE="page-break-after: always;"></div>

`<center>

## B 程序主要功能
</center>`


<font color=8470FF> 以下灰色部分为尚未实现的功能</font>

+ **对于学生**
  
  1. 学员报名并登记信息（姓名 性别 联系电话 补习科目 QQ等）
  2. 修改学生信息（可以实现单项修改）
  3. 学生预约课程（可选择是否缴纳定金）
  4. 学生确定课程（支付学费，与定金核查）
  5. 缴费时提醒应缴金额
  6. 建立学生课表
  7. 提醒上课科目和时间，任课老师
  8. 修改学生课表
  9. 课表自动生成csv文件
  10. 课表内容屏幕显示
  11. 移除学生课表<font color=#D3D3D3>
  12. 学生重名启用第二关键字（性别等）
  13. 学生退课 学生退费（退课后的确认退费）
  14. 学生意见反馈
  15. 学生请求更换老师（记录下）
  16. 成功更换老师（进行课表转移和拼接）</font>


+ **对于教师**
  
  1. 添加教师并记录基本信息（姓名 性别 联系电话 教授科目等 ）
  2. 修改教师个人信息（可单项修改）
  3. 展示自我介绍文件（连接网站）
  4. 添加教师课表
  5. 查询教师课表
  6. 修改教师课表
  7. $\color{#D3D3D3}{ 教师日常反馈记录}$
  8.  $\color{#D3D3D3}{清除教师教学事故记录}$
  9.  教师工资预查询
  10. 工资结算（呈现Excel和屏幕显示）


<div STYLE="page-break-after: always;"></div>


+ **对于管理人员**
  1. 注册管理员
  2. 管理员登录系统
  3. 一键总账（有密钥，总收款 ）
  4. $\color{#D3D3D3}{一键总账（收款加退款）}$ 
  5. 课表核对（双向入口，核对教师课表和学生课表是否一致）
  6. 添加教师违规记录
  7. 查询单项教学事故
  8. 查询教师违规总表
  9.  添加店内流水账（店内日常开销）
  10. 查询单项流水情况
  11. 查询流水账总表
  12. 收银功能
  13. 记录当次交易信息
  14. 查询单项交易数据
  15. 查询所有交易数据
  16. 初始化课程收费标准
  17. 初始化教师工资标准
  18. 修改课程收费标准
  19. 修改教师工资标准<font color=#D3D3D3>
  20. 备份所有数据
  21. 联系开发人员，进行数据解密（启用解密程序）
  22. 反馈管理系统问题给开发人员</font>

+ **对于经营者**
  1. 管理人员所有权限<font color=#D3D3D3>
  2. 数据加密和备份
  3. 利用二进制的简单加密算法进行加密和备份
  4. 利用程序系统反馈管理系统问题给开发人员 
  5. 删除学生、教师</font>

<center> 


<div STYLE="page-break-after: always;"></div>


## C 系统总框架图

</center>

![Summery](Summery.png)


系统功能大致可分为四个模块，分别是增加模块、查询模块、修改模块、管理模块，操作的对象有学生、教师、课表、记录、课程价位等。

<div STYLE="page-break-after: always;"></div>

<center>

## D 程序运行平台 Visual Studio 2019 


 
</center>

<font color=8470FF size=5>VisualStudio简介</font>



Visual Studio 集成开发环境是一种创新启动板，可用于编辑、调试并生成代码，然后发布应用 。 集成开发环境 (IDE) 是一个功能丰富的程序，可用于软件开发的许多方面。 除了大多数 IDE 提供的标准编辑器和调试器之外，Visual Studio 还包括编译器、代码完成工具、图形设计器和许多其他功能，以简化软件开发过程。


<font color=8470FF size=5>为什么选用VS2019</font>


在设计之初，我原本想用我熟悉的轻量级编辑器 Visual Studio Code 作为开发环境，在写了程勋进行到一定程度的时候，我发现没有IDE的开发是很耗费精力的，没有自动生成的文件夹和筛选器让文件的管理变得异常困难，因此我选用了强大的IDE Visual Studio 2019 社区版，为软件的调试和管理提供了很大的便利。另外，VS支持打开和编辑Qt工程，日后增加图形化界面不必再转为选用其他的IDE

<center>

<div STYLE="page-break-after: always;"></div>

## E 程序类的说明和模块设计分析

</center>

<font color=8470FF size=5> 介绍类前的一些说明</font>

在设计之初，我本想按照往年的课程设计的模板(比如图书馆管理系统)来进行类的设计，用一些名词作为Class，然后其中添加方法，这样一来程序的主体部分还是程序的主函数(或者其他的功能性函数)。**但考虑到此次选题各种的功能需求比较复杂，并且初学编程的我没有把这个系统功能分解为几十上百个函数的能力**，我努力的使用完全面向对象的思想，类似于Java的一切皆是类的思想。
现在返回来看当时类的设计，确实有很多的缺点和不足，甚至曾经出现了头文件循环包含的问题。这里类的说明会有一些比较难理解的地方，我会尽我最大努力把的当初的设计思想展现出来。

<font color=8470FF size=4 >友情提示 此部分容量较大，阅读大约需要十分钟，最顶层的操作封装在最后部分，如有需要请先查看顶层的封装和逻辑</font>

### 类的继承关系视图

#### 有关人员的类

![people](ppp.png)

1. 关系介绍
   1. Student，Teacher，Manager均为抽象类People的派生类
   2. Student代表学生，Teacher代表教师，这两个是数据类型的成员，基本没有对应自身行为的方法
   3. Manager为操作者，用Manager的身份信息获得系统的操作权限
   4. Manager具有个人密码，支持登录时设置和自行修改


<div STYLE="page-break-after: always;"></div>


2. 类定义源码
   1. Class People 

```C++

  class People
  {
  private:
      
      static int numID;//静态变量，一个人一个ID

  protected:
      
      char name[30];//姓名
      char gender;//性别
      char phone[20];//电话号码
      int ID;//状元阁唯一识别号,存入文件时候进行更新

  public:
      
      People(char* name, char sex, char* phone);
      People(char*name, char* phone,char sex='F');
      People(char* name);
      People(char* name, char sex);
      People(const People&);
      People();

      virtual ~People(){}
      
      People operator =(const People&);
      
      static int checkNumID();
      
      void setName(char *);
      void setGender(char sex);
      void setPhone(char *);
      void display();
      char* getName();
      char getGender();
      char* getPhone();
      int getID();

      friend class OperateSTD;    //存入文件时会通过友元
      friend class OperateTEA;    //通过友元进行内部访问

  };

```
<div STYLE="page-break-after: always;"></div>

   2. Class Student 
   
```C++
class Student : public People {
	//学生类，是People 的派生类,已经有的的成员有，name,ID,gender,phone ，phone 是家长的手机号
	//还要记录学生的QQ号，科目（内置分数），学生的其他要求，是否缴纳了定金
private:
	char QQ[20];
	int downPayment;//预付订金
	Purpose sub;//科目
	char requirement[100];//学生的要求
public:
	//姓名 性别 电话 QQ 科目 要求 定金
	//姓名 性别 电话 科目 要求 定金
	//姓名 电话 科目 要求 定金
	//姓名 科目 要求 定金
	//姓名 性别 科目 要求 定金
	//最后两项都是缺省构造
	Student(char*, char, char*, char*, Purpose, string requirement = "无", int downpayment = 0);

	Student(char*, char, char*, Purpose, string requirement = "无", int downpayment = 0);

	Student(char*, char*, Purpose, string requirement = "无", int downpayment = 0);

	Student(char*, Purpose, string requirement = "无", int downpayment = 0);

	Student(char*, char, Purpose, string requirement = "无", int downPayment = 0);

	Student();
	Student(const Student& obj);//拷贝构造函数
	Student operator = (const Student obj);
	void display();

	void setQQ(char*);

	void setDownPayment(int);

	void setRequirement(string);
	friend class OperateSTD;
	int getDownPayment();
};

```

<div STYLE="page-break-after: always;"></div>


  3. Class Teacher

``` C++

class Teacher :public People {
	
	//教师类，是People 的派生类,
	//已经有的的成员有，name,ID,gender,phone ，phone 是老师的
	//还要记录老师的QQ号，科目，工资标准

private:
	
	char QQ[20];
	Purpose sub;//科目
	int salary;//工资标准

public:
	
	//构造函数 ， 添加老师只需一个构造函数，薪水为60
	//姓名 性别 phone QQ salary
	
	Teacher(char* name, char sex, char* phone, char* QQ, Purpose subj, int salary=60);
	Teacher(const Teacher& obj);
	Teacher();

	~Teacher();

	void setQQ(char*);
	
	void setSalary(int);
	
	void display();

	Teacher operator=(const Teacher& obj);

	friend class OperateTEA;


};
```

<div STYLE="page-break-after: always;"></div>

  4. Class Manager

```C++
class Manager :public People

{

protected :

	char SSH[30];		//密钥，一些关于账目的管理需要密钥验证身份
					      	//需要使用时转成string进行比较
public :


	Manager(char* name, char sex, char* phone, char*);
	Manager();
	~Manager();
	Manager(const Manager&);
	
    //重载一下赋值号	
	Manager operator =(const Manager& obj);
	
	  //更改个人管理密钥
	void display();

	bool setSSH();

	string getSSH();	//返回密钥,只能通过友元Handler调用

	bool checkSSH(string ssh);

};

```
3. 展示源码后的一些解释
   1. 类声明有OperateMode(操作模块)类的友元类，为的是在进行人员信息保存的时候进行ID的更改。
   2. 需要进行字符串储存的成员，用字符数组储存
   3. 返回字符串或者传入字符串的地方用string和字符数组相结合


<div STYLE="page-break-after: always;"></div>


#### 文件储存位置的类

![BaseFile](NewBaseFile.png)

1. 展示代码前的一些说明
   1. BaseFile记录了文件的储存位置，分为三层进行记录，分别是数据文件夹储存位置，数据文件夹子文件夹的名称，当前问价你的名称
   2. 设计这个类的初衷是在储存文件时直接生成类，防止每次都添加绝对路径的繁琐形式，避免了不必要的错误。更改文件的储存位置时只要从配置文件中读取出储存的字符串即可，避免因为路径完全集成在代码中造成的不便
   3. 每个储存路径Class的命名都是见名知意的形式，对系统的调试提供了方便
   4. STDInfo派生出的几个文件类都是为了让代码更加精简，因为一些要用的方法在STDInfo中已经实现，不必再次从TEAInfo中进行重复的重载或者覆盖
   5. PeoNum和Table是人和课表的唯一识别码，都把当前ID存入文件中，在下一次调用是自动更新一个ID，这样就为查询时提供了很大的便利


<div STYLE="page-break-after: always;"></div>

2. BaseFile为基类的源码展示
   1. Class BaseFile
   
```C++
   
   class BaseFile 

	//创建基础文件类，是所有文件类的基类
	//文件绝对路径= saveAddress+uniqueAddress+fileName
	//功能文件夹，按照文件的种类进行分类

{

private:

	static string REGISTERADDRESS;//储存的绝对路径，只会出现在参数列表里
	static void RESETADDRESS(string);//修改绝对路径

protected :
	
	const string saveAddress;//储存位置,绝对路径，到位置文件夹,一般不进行修改
	string uniqueAddress;//功能文件夹
	string fileName;//文件的名称
	string completeFile;//把前三个整合到一起，这是为了方便调用

public :
	
	BaseFile();
	BaseFile(string UA, string FA);	//第一个参数是功能描述uniqueAddress，第二个参数是文件名称filename
	BaseFile(const BaseFile&);
	BaseFile operator=(const BaseFile&);

	string getCompleteAddress();
	string getSaveAddress();
	string getfileName();
	void setFileName(string FA);//参数是filename
	void changeSaveAddress();//改变储存的位置，需要验证密码
	void display();
	virtual ~BaseFile(){}
};

```

<div STYLE="page-break-after: always;"></div>


 2. Class STDInfo

```C++
class  STDInfo : public BaseFile 

	//这是学生信息文件类
	//有保存位置和数据类型，也是文件类型
{

public:

	STDInfo(string Name);
	
	STDInfo();
	
	STDInfo(const STDInfo&);

	virtual ~STDInfo();


	STDInfo operator = (const STDInfo&);

	void setName(string Name);


};
```


<div STYLE="page-break-after: always;"></div>


  3. Class PeoNum

```C++
class PeoNum :public BaseFile 

{

protected:
	
	int NowNum;//当前数字

	bool setFile(int a=1);//设置此文件
	
	bool getNum();//取出文件内容

	void setNowNum(int);//更新当前的NowNum

	void update(int);//更新了ID数

public:
	
	PeoNum();
	~PeoNum();
	int returnNum();

};
```
3. 展示代码后的一些说明
   1. 记录表格ID的类(TabInfo)与PeoNum大同小异，不在此进行赘述
   2. STDInfo的派生类与其基类的差别是内置的储存位置不同，各项功能基本是继承下来的

<div STYLE="page-break-after: always;"></div>


#### 以Menu为基类的Class的介绍

![Menu](Menu.png)
1. 展示代码前的一些说明
   1. Menu类是一个抽象类，是所有显示菜单的基类
   2. 菜单分为两种，一种是简单的菜单，只有向屏幕输出信息和获取命令的功能，另一种是高度封装的菜单，对外部只提供显示菜单的接口，能够在调用中进行数据的查询，比如便利课表或者查询教师和学生的信息，而且在调用结束前能够对从从屏幕捕获的输入信息生成相应的文件进行储存
   3. 现在请看上图，教师教学事故菜单(ViolationMenu),店内流水菜单(RunningMenu),收银菜单(TollMenu),注册管理员的菜单(RegisterManagerMenu)都属于上述第二种菜单，从屏幕获得信息并进行储存
   4. 增添老师、学生、课表的菜单，分别是AddTEAMenu，AddSTDMenu，和AddTABMenu，都是从屏幕获取到信息，生成相应的对象，并提供接口把此对象返回
   5. 主菜单和内部功能菜单是进行屏幕显示，并获取相应命令的菜单，这里应该还有一个管理员专有功能的菜单，但是体量较小，我把他内置在了最顶层的命令处理部分，这个问题稍后会详细的进行说明
   6. 值得一提的是，登录菜单LoginMenu是我通过充分的考虑，把一些本来在外部的函数封装进来的菜单，登录菜单的功能是对的登录人员进行权限的检测，只有获得店铺经营者授予权限的人才能注册使用这个管理系统
   7. 补充上一点，这里的注册和管理员注册不是一个概念，这里的注册只是能使用其中的一些功能，比如查询自己的课表和修改自己的个人信息等等
   
<div STYLE="page-break-after: always;"></div>

2. 下面进行以Menu为基类的派生类的源代码展示

    1. Class Menu 
```C++
class Menu 

//这是一个菜单的抽象类

{
public:
	
	Menu() {};
	virtual void display()=0;
	virtual ~Menu() {}

};

```

  2. Class AddTABMenu


```C++
class AddTABMenu :public Menu 
{

protected:

	Table table ;
	
	Date getDateFromScreen();
	int display2();
		
	Student checkThisStudent(string name);

public:

	AddTABMenu();
	~AddTABMenu();
	AddTABMenu(const AddTABMenu&);

	void display();

	Table getTable();

};
```
<div STYLE="page-break-after: always;"></div>

   3. Class RegisterManagerMenu
```C++
class RegisterManagerMenu:public Menu 
{
protected:
	
	Manager Man;
	bool checkQuality();
	string getSSHFromScreen();
	bool saveThisMan(string name);

public:
	
	RegisterManagerMenu();
	~RegisterManagerMenu();
	virtual void display();  //填入成员的属性

	Manager getManager();

};

```

<div STYLE="page-break-after: always;"></div>


   4. Class TollMenu
```C++

class TollMenu :public Menu 

{
protected:


	Manager operatorManager;

	bool display2();  //附加项目询问

	bool saveThisTranRecord(TransactionRecord );  
		//保存这个交易记录，只能内部访问
	
	Student checkSTDInfo(string STDname); 
		//通过学生姓名查询学生信息，并生成一个学生对象返回会来 
	int HowMuchToPay(Student &);

	int getClassTypeInPrice(int );

public:

	//生成交易菜单必须传入当前的操作者
	//否则不能生成这个对象

	TollMenu(Manager &);
	TollMenu(const TollMenu&);
	~TollMenu();
	
	void display();
	

};
```
<div STYLE="page-break-after: always;"></div>

  5. Class LoginMenu

```C++
class LoginMenu:public Menu 
{

protected:

	bool checkBigPassword(string s);				//检测经营者邀请码

	bool checkPassword(string input);				//检测个人登录密码
	
	bool saveAccount(string name, string password); //保存当前注册账户

	string login_one();								//接收密钥

	void register_one();							//进行注册的第一部分

	void register_two();							//进行注册的第二部分

public :

	void display();									//外部唯一接口

};
```
3. 展示代码后的一些说
   1. 一些接口的功能已经在注释里说明，其他未经展示部分的类的实现方法与已经展示的类具有相似之处，具体实现请查看源代码

<div STYLE="page-break-after: always;"></div>

#### 操作模块类的说明


![OperateMode](OperateMode.png)


1. 展示代码前的一些说明
   1. 操作模块是数据对象和操作者的介质，具有十分重要也十分强大的功能
   2. 所有可以对实际对象进行操作的类都是OperateMode这个基类的子类
   3. 这些操作包括增添，读取，修改并保存等功能
   4. 根据实际需求，其中对课表的增添只有从学生出发，修改只能从教师出发
2. 下面进行OperateMode为基类的代码展示
   1. Class  OperateMode

```C++

class OperateMode 

	//OperateMode ，抽象类
	//刚开始我想把查询模块和增加模块分开的
	// 现在觉得这俩放一起挺好
{

public:
	
	virtual bool readPreFile() = 0;//读取前置文件
	virtual bool saveThisFile() = 0;//保存当前文件
	
	OperateMode(){}
	virtual ~OperateMode(){}
	
};

```

<div STYLE="page-break-after: always;"></div>

   2. Class OperateTable
```C++

class OperateTable : public OperateMode 
{
	//操作学生课表的类
protected :
	Table table;
	TableInfo saveAddress;

	bool checkIsThisTable();
	bool changeThisTable();
	bool addLesson();
	bool deleteLesson();

	int checkHowLongBelonging(Table TEATab);

public:

	OperateTable( Table &tab);
	OperateTable();
	~OperateTable();

	//对父类虚函数进行重写 
	virtual bool saveThisFile();		//保存当前文件，把当前的Table保存文件
	
	bool saveThisFile(int ruler);

	virtual bool readPreFile();			//读取前置文件，把数据读出到当前的Table
	
	bool readPreFile(string name);

	bool readPreFile(string name, int ordinal);//读出这个人的第几个课表
	
	bool updateThisTable();                //更新这个课表

	bool transformSTToCSV();
	bool transformTTToCSV();

	void getTableFromScreen();

	void clearHidenTable();
	
	Table getTable();			//返回这个让table对象

	string getAddress();
};

```
<div STYLE="page-break-after: always;"></div>

3. Class OperateSTD

```C++
class OperateSTD :public OperateMode

	//刚开始我想把查询模块和增加模块分开的
	// 现在觉得这俩放一起挺好的
	//为了避免来回改名字，类名就不变了
{
private:
	//内置函数，声明成Student的友元函数
	//修改自己数据的ID，进行数据保护
	void setStdsID(People&);
protected:

	Student stud;//学生对象
	STDInfo saveAddress;//文件地址对象

	void getChangeInfo();
	bool catchElection();
	bool doChangeInfo(int election);
	Purpose catchPurpose();

public:

	OperateSTD( );
	~OperateSTD( );
	void getInfoFromScreen( );//把保护变量里的STD 填入信息
	bool saveThisFile( );//保存文件
	bool readPreFile( );//无参 从文件中读取文件信息
	bool readPreFile( string );//包含学生姓名参数读取学生信息
	bool readPreFile(int oridinal);//参数是学生的第几个信息
	Student getStudent();
	bool updateStudentInfo(string STDname);
};
```
3. 展示代码后的一些说明
     1. 这个模块中的类进行了较多的重载，以适应多种参数的需求
     2. 这里操作课表的模快有两个函数是把当前的课表对象输出为csv文件，并用当前课表的拥有着进行命名，csv文件可以用Excel打开，这样就可以实现可视化的课表，方便查询和核对。 


<div STYLE="page-break-after: always;"></div>

#### 记录模块的介绍

![Record](Record.png)


1. 展示代码前的一些说明
   1.  系统内所有的记录的类都是抽象类类Record的派生类
   2.  基类Record中Unix时间戳(TimeStamp)的记录是这个基类的核心
   3.  Record中记录的时间戳是int类型，在显示时用外部的函数转换成标准时间格式(Standard)
   4. 基类派生出的其他类，会根据自身需求扩展所记录的信息 
   5. Record中有一个Manager成员，是用来记录当前记录的生成者是谁，便于后期的核对
   6. Record模块里所有的类都没有无参构造，因为不能凭空产生一条记录

2. 下面进行代码展示

   1.  Class Record

```C++
class Record
{
protected:
	Manager operatorManager;		//操作者
	int timeStamp;					//系统时间戳，记录操作时的时间
public:
	//只能含参构造，不能缺省，因为操作人员不明确会出问题
	Record(Manager &) ;

	virtual ~Record() ;
	Record(const Record&);

	virtual Record operator =(const Record&);
	virtual int getTimeStamp();
};
```
<div STYLE="page-break-after: always;"></div>

   2. Class TransactionRecord
```C++
class TransactionRecord :public Record

	//交易记录类

{
protected:
	
	Student stud;    //学生对象信息
	float payment;	// 缴纳费用
	char collectWay[20]; // 收款方式
	char remarks[100]; //收款备注

public:
	
	//不能有无参构造函数

	TransactionRecord(Manager&, Student&, float pay=0,string CW="现金收款",string R="无");
	
	virtual ~TransactionRecord();
	
	TransactionRecord(const TransactionRecord&);
	
	virtual TransactionRecord operator =(const TransactionRecord&);

	void display();

	void shortShow();

	float getPayment();
};
```

<div STYLE="page-break-after: always;"></div>


  3. Class ViolationRecord 

```C++

class ViolationRecord :public Record 
{
protected:
	
	Teacher VioTeacher;
	int FirstVioCode;
	int SecondCVioCode;
	Date OccurTime;
	char Remarks[100];//备注或者其他教学事故

public : 
	
	ViolationRecord(Manager&,Teacher &,int first,int second,Date d,string remark );
	~ViolationRecord();
	ViolationRecord(const ViolationRecord&);
	ViolationRecord operator =(const ViolationRecord&);
	void display();
};

```

<div STYLE="page-break-after: always;"></div>


  4. Class RUnningRecord 
```C++
/**************************************************************
	类型说明
	店内流水账类，主要记录店内日常开销，比如购买水性笔，桶装水等
	需要记录信息 操作人员（Manager 或者 Teacher ） 
***************************************************************/

class RunningRecord :public Record 

{
protected:

	float payment;			// 此次费用
	char collectWay[20];	// 支付方式
	char remarks[100];		//用途备注
	char payer[30];			//支付者说明，是否是管理员本人

public:

	RunningRecord(Manager&, float pay, string Remarks
		, string payer = "管理员本人", string collect = "微信支付");

	~RunningRecord();
	

	RunningRecord(const RunningRecord&);

	RunningRecord operator= (const RunningRecord&);
	
	//重载一个赋值号


	void display();
	void shortShow();

};

```
<div STYLE="page-break-after: always;"></div>

#### 表格数据模块和日期模块说明

![NewTable](NNewTable.png)


<font color=8470FF> 这张图十分的简洁， 但设计时却花费了我大量的心血，经过了很多次的修改，才有实现了最后的功能，这里的讲解会从需求分析讲起，说明我一步一步解决问题的过程，如果对开发过程不感兴趣，请直接下拉，查看类的定义即可。
</font>
在设计之初，我想到了很多不易实现并且很重要的需求，在这其中如何记录课表是最令人挠头的部分，虽然现在看起来是顺理成章的，但是从刚开始的过程来看，这个过程并不容易。

+ **从需求层面来看**，状元阁有一对一、一对二、一对三、一对四、小班课等多种课程类型，此外，还要记录课程的上课时间，而且每个课表都是由老师和学生双向维护的，也就是课表内要包含这两个互相对应的关系。另外，展示出的课表是要经过排序的，不能是乱序的。
+ 在一开始，我想到让单节课程作为成员直接储存在课表中，这样就模拟了现实中的课表。而容器又是一个问题，直接开大的课程数组会造成占用很多不必要的空间。但是课程类型如何记录呢？是一对一还是一对多？用字符串记录在其中的话势必会造成记录不统一的情况。
+ 在后来我了解到了**优先队列**，我用优先队列储存课表，就满足了自动排序的功能，在便利和修改时更是很方便

1. 展示源代码前的几点说明
   1. 日期Date类是Lesson的基类，但Date的功能不局限于此，它在Record类中也得到了很多的应用
   2. Date类中进行了大量的运算符重载，这并不是无用的，作为一个基础类型，它必须像基础数据类型一样强大和稳健，支持多种运算。
   3. FatherTable与刚开始的设计出现了一些偏差，只是派生出了课表类
   4. Fathertable 会记录这个表格的拥有者，也会记录表格的名称
   5. 这里值得说明一点的是Table类中有一个theOtherName的成员，这记录了与课表拥有着对应的老师或者学生，发挥着很重要的作用，在下文中还会介绍到。

<div STYLE="page-break-after: always;"></div>

2. 展示上述类的源代码
   1. Class Date
```C++
class Date {
    //日期类，包含月日年,主要功能是记录课在哪天上
protected:

    int year;
    int month;
    int day;

public:

    Date();
    Date(int year, int month, int day);//普普通通的构造函数
    Date(int month, int day);//重载构造函数，缺省年的构造
    Date(const Date& obj);//拷贝构造函数

    void display();//演示一下
    
    int operator - (const Date& obj);//重载+ - = ，日期相减返回整数，日期加整数返回日期

    Date operator + (int x);

    Date operator =(const Date& obj);//赋值号，按位赋值
    bool operator >(const Date& obj)const;//重载大于小于和等于
    bool operator <(const Date& obj)const;
    bool operator ==(const Date& obj)const;
    bool operator <= (const Date& obj)const;
    bool operator >=(const Date& obj)const;

    Date operator ++ (int);//重载后置++
    Date operator ++ ();//重载前置++
    Date operator --(int );//重载后置--
    Date operator --();//重载前置--
    
    int getYear();
    int getMonth();
    int getDay();
    bool Simplify();//进行加法后简化，向月份和年份上加；
};

```

<div STYLE="page-break-after: always;"></div>

  2. Class Lesson
```C++
class Lesson :public Date

	//这是一个课程类，是Date的子类，包含课的日期和第几节的信息

{
private:

	int ordinalNumber;//记录这是第几节课
    

public:

    Lesson();
    
    Lesson(int year, int month, int day,int ordinalNumber);//普普通通的构造函数
    
    Lesson(int month, int day,int ordinalNumber);//重载构造函数，缺省年的构造
    
    Lesson(const Lesson& obj);//拷贝构造函数
    
    Lesson(const Date& obj, int num);//日期和课程节数进行构造

    bool operator <(const Lesson& obj)const;
    
    //这个很重要，为了避免使用比较函数，
    //这里把小于号重载为大于号，再Table中就能实现小根堆

    void display();//演示一下

    int getOriginalNumber();//返回这是第几节课

    bool operator !=(const Lesson&)const;
};

```

<div STYLE="page-break-after: always;"></div>

3. Class FatherTable 

```C++

class FatherTable 

	//这是一个表格类，拥有表头，所有者姓名，所有者ID
	//会派生出老师的课表和学生的课程表Table，老师的工资表 SalaryTable

{
protected :
	
	//char dataHeader[30];

	char ownerName[20];//所有者姓名

	int ownerID;//所有者的状元阁唯一识别号

	string selfName;  //

public :

	FatherTable(People*);

	FatherTable();
	FatherTable(const FatherTable&);
	FatherTable operator=(const FatherTable&);
	void display();//展示一下
	
	virtual string getSelfName();

	string getOwnerName();

	int getOwnerID();
};

```

<div STYLE="page-break-after: always;"></div>

  4. Class Table

```C++
class Table : public FatherTable 

{

protected:

    //这是一个优先队列，存放课程
    priority_queue <Lesson> lessonTimeTable;
    
    Date startDate;

    Date endDate;
    
    int number;//课程节数

    char theOtherName[30];//配对教师姓名

    int classType;//记录课程类型
    
    int tableID;

public:

    
    friend class OperateTable;
    friend class StoreTable;

    //构造函数
    Table();

    Table(People*, Date startDate, Date endDate,int num, char* name,int Type);
    //起止时间，推入队列
    
    Table(People*, char* name, int Type);
    //只传入人，然后进行输入课表，推入队列
    
    Table(People*, Date startDate, int x,int num, char* name,int Type);
    //开始时间，课程节数

    Table(const Table&);

    Table( StoreTable& );
    
    Table operator =(const Table&);
    

    void ReviseTeam();//转换拥有着为老师

    void ReviseTeamToSTD();//转换拥有着为学生

    void translateFromStoreTable(StoreTable&);// 转为储存课表

    void displaySTD();  //展示学生课表

    void displayTEA();  //展示老师课表
    
    void shortShowSTD(); //简短展示学生表头信息
    
    void shortShowTEA(); //简短展示老师表头信息

    void shortShortShowTEA(); //精简的展示信息

    void clearThisTable(); //清空当前课表内的内容

    int getNum();// 获得课程节数
    
    string getSelfName();//获得表格名称

    int getClassType();//获得类型代号

    string getTheOtherName();//获得对应成员的姓名

    int getTableID();//获得课表的编号
};

```

<div STYLE="page-break-after: always;"></div>

![guer](gudu.png)

#### 一些比较孤单的类的说明

<font color=8470FF> 这里对一些与其他类没有继承只有组合关系的类进行说明，别看没有亲人，他们的功能同样十分重要，没有这些，这个系统是有缺陷的，甚至是瘫痪的。</font>

<font color = 8470FF>下面对这些类进行一一说明</font>

1. 展示源码前的说明
   1. Storetable是Table储存在文件中是要转换为的类型，因为Table中含有优先队列，方便操作，但是不方便储存，转换成StoreTable进行储存就能解决这个问题
   2. Purpose类是科目类型，之所以没有用Subject这个单词是因为用Subject作为类型名会被编译器识别为别的符号，因此有Purpose这个名称进行替代
   3. ClassPrice是课程单价的类型，记录一种课程学生的收费标准和老师的工资标准
   4. ConClassPrice是对课程单价进行初始化的类，能够对配置文件进行初始化和修改，也能读出一个 map<int,ClassPrice>,其中的含义是课程类型代码对应课程和的收费和支出标准。
   5. SalaryTable，这个不同于以上的类，是一个集成的类，能够通过传入一个教师对象的引用，查询教师所有的课表，并且通过查询相应的课程单价，计算应该支付的工资。
   6. QueryRecord 这是查询三种主要记录的类，通过传入记录的条数能够返回相应的记录对象
   7. FeasibleCmd 这是简单的适应窗口类，能够调整dos窗口为比较好看的模式

<div STYLE="page-break-after: always;"></div>

2. 所有这些类的源代码展示
   1. Class StoreTable
```C++
class StoreTable 

	//因为Table使用优先队列实现的，不能存入文件
	//这个类型的对象用于储存在文件中 
	//这两个类互为友元类，方便互相初始化

{
protected:

	char ownerName[20];			//所有者姓名
	int ownerID;				//所有者ID

	char selfName[50];
	char theOtherName[30];
	
	Lesson lessonTable[100];			//课表数组
	int num;							//课程数
	int classType;
	int tableID;						//课表编号
	
public:

	friend class Table;
	
	~StoreTable();
	StoreTable();
	StoreTable(const StoreTable& );
	StoreTable( Table  );

	void buildStoreTable( Table );
	void setOtherName(string name);

	int getNum();
	int getClassType();

	Lesson* getLessonTable();

	string GetTheOtherName();

	void setTableID();				//更改课表的编号，在存入文件的时候更改
	void setTableID( const  StoreTable &);
};
```

<div STYLE="page-break-after: always;"></div>

  2. Class Purpose
```C++
class Purpose
{
private:

	char subject[7][10];
	int sum;

	//把vector存车的方式改成了string数组和记录数量的变量
public:
	
	Purpose( vector <string>  );//含参数构造
	Purpose();//无参数构造
	Purpose(const Purpose& obj);//拷贝构造
	~Purpose();//析构
	void display();
	Purpose operator=(const Purpose&);

};
```


3. Class ClassPrice

```C++
/***************************************************************************
			这是一个简单的数据类
		负责记录课程类型的收入单价和发放单价
		注意也要对应课程的类型
****************************************************************************/
class ClassPrice 
{
private:
	int classTypeCode;				//课程类型的代码
	int inPrice;					//从学生处收取
	int outPrice;					//发放给教师
	char Remarks[20];

public:
	ClassPrice(int classTC,int IP,int OP,string remark);
	~ClassPrice();

	void updateCP(int IP, int OP, string remark);				//读取出来后进行修改
	void setClassPrice(int classTC, int IP, int OP, string remark);
	
	int getType();
	int getInPrice();
	int getOutPrice();
};
```
<div STYLE="page-break-after: always;"></div>

4. Class ConClassPrice

```C++
/****************************************************************
			对课程单价进行增添和修改的类
		增加是初始化的时候进行调用，修改是读取并进行修改
		用一个读取函数进行检验
*****************************************************************/


class ConClassPrice 
{
protected:

	ClassPrice classPrice;
	void getInfo(int type);

public:

	ConClassPrice();
	~ConClassPrice();
	ConClassPrice(const ConClassPrice&);
	bool initClassPrice();
	bool setClassPrice();
	map<int ,ClassPrice> getMapFromCon();//返回一个课程类型到单价的map

};
```
<div STYLE="page-break-after: always;"></div>

5. Class SalaryTable

```C++

class SalaryTable 

{
protected:
	
	int totalSalary;		//总薪水

	Teacher teacher;		//老师的数据

	void caculateSalary();  //计算总薪水
	
	
	int HowMuchInShort();

	int getClassTypeOutPrice(int key);

	int HowMuchInDisplay();

public:
	
	SalaryTable(Teacher &);
	
	SalaryTable(const SalaryTable&);
	
	~SalaryTable();
	
	SalaryTable operator =(const SalaryTable&);

	void showAllTable();	//展示这位老师的所有课表
	void briefShow();		//进行简短的展示

};

```

<div STYLE="page-break-after: always;"></div>

6. Class QueryRecord

```C++
/*****************************************************
	这是查询课表的操纵台，只能被handler所调用

	能够查询收银记录，店内流水账，教师违规记录
	需要传入的参数是第几条记录
	返回这个类型的record
	注意收银记录有两条查询路线，第二条隐藏

	因为交易记录类型的类没有默认构造函数，所以需要创建一个临时的对象
	进行有参构造，当然这个记录是无意义的
	
	为了函数的简洁性，打开文件失败会抛出异常,要记得处理
******************************************************/
class QueryRecord 

{
protected:

	friend class Handler;			//只能通过友元类调用方法

	RunningRecord getRunningRecord(int ruler=1);
	ViolationRecord getViolationRecord(int ruler=1);
	TransactionRecord getTransactionRecord(int ruler=1);
	TransactionRecord getHidenTransactionRecord(int ruler = 1);

public :	
	QueryRecord();
	~QueryRecord();
};
```

7. Class FeasibleCmd

```C++
class FeasibleCmd 

	//这是窗口类，能够调整窗口大小和颜色
{

public:
	
	FeasibleCmd( );
	FeasibleCmd(FeasibleCmd& obj){}
	~FeasibleCmd(){}

};
```

<div STYLE="page-break-after: always;"></div>

#### 最顶层的操作类的介绍

![entrance](Entrance.png)


<font color=8470FF>
这是直接从主函数调用的类，也是系统消息处理机制的最外层表现。下面将介绍这两个最容易设计而且最好操作的类。
</font>

1. 展示源码前的一些说明
   1. Handler控制台内置了一个Manager(管理员)和一个开关变量LOGIN
   2. LOGIN是记录当前是否有管理员已经进行了登录，如果没有进行登录，那么程序的功能将受到一定的限制，只有在登录以后才能正常使用所有功能
   3. 主入口类内置一个Handler成员，根据需求，让Handler对功能接口进行调用，或者在自身实现
   4. 主入口类是在主函数中与外界进行交流的窗口，即调用菜单获取命令，然后把命令交给处理命令的成员函数，处理时根据功能的复杂程度选择是否调用Handler控制台，如果处理此项命令的程序比较复杂，那么讲交由Handler处理。


<div STYLE="page-break-after: always;"></div>

2. 展示顶层两个类的源代码

   1.  Class Handler

```C++
class Handler 

	//控制台类，进行权限释放

{
private :
	
	Manager operatorManager;
	bool LOGIN;

public:
	
	Handler();
	~Handler();

	bool LoginManager(string name,string SSH );			//传入姓名和密钥进行登录
	bool getStatus();									//获得登录状态

	void addSTD();										//增加学生，教师，课表
	void addTEA();											
	void addTAB();
	void addToll();										//增加交易记录，流水，违规记录
	void addVio();
	void addRun();
	void setTable();									//修改课表
	void changeMAGSSH();								//修改当前管理员的密钥

	void showOneRun(int ruler,int small );				//传入数据位置参数展示三种记录
	void showOneToll_S(int ruler, int small);
	void showOneVio(int ruler);
	void showOneToll(int ruler, int small);

	void showAllRun(int  );								//展示所有的三种记录
	void showAllVio(  );
	void showAllToll( int );
	
	bool checkSSH();									//某些操作的密码验证

	void showAllTEA();									//展示总表中的教师和学生信息
	void shouwAllSTD();								

	float checkSummery(int show);						//一键总账


};

```

<div STYLE="page-break-after: always;"></div>


   2.   Class MainEntrance 

```C++
class MainEntrance 
{

private:
	int commender;//命令代码寄存器
	Handler Hander;

public :
	
	MainEntrance();
	~MainEntrance();
	

	void ShowThe_First();				//展示先导界面
	void ShowPre_Login();				//登录界面
	int  ShowMain_Menu();				//主菜单
	bool DealFirt_Comd(int Comd);		//处理主菜单的命令
	int  ShowInde_Menu();				//显示内部菜单
	bool DealSecn_Comd(int Comd);		//处理内部菜单的命令
	int  ShowMang_Menu();				//管理员特有功能，集成一体化

};

```
3. 这里本该有一些说明，但我觉得代码注释里边说的已经够详细了，所有此项略过


<div STYLE="page-break-after: always;"></div>


#### 外部函数的介绍

<font color=8470FF >
到这里所有的类已经介绍完毕了，但这里还有一个头文件要介绍一下，他包含了所有的外部函数，利用了C++面向过程编程的思想，让程序变得简单易读
他就是stdafx，这里我们先来看源代码
</font>

```C++
								
bool checkBigPassword(string s);			//检测经营者授权码

bool saveAccount(string name, string password); //新建使用者

bool checkPassword(string input);     //检测登录权限

bool checkSaveAddress(string);      //检查修改后的储存位置是否合法

string getStringWithoutShow();			//不显示屏幕获取字符串

string TimeStampToStandard(int );		//把时间戳转换为标准时间

bool checkToContinue();					//询问是否继续

void operationCancled();				//操作取消

string translateNumToClassType(int);	//代码转为课程类型

char checkGender();						//获取性别

string trnaslateVioCode(int, int);		//违规代码转换为具体事项

```

1. 这里使用最多的是检测是否继续执行，就是从屏幕获取一个字符，并检测是否是Y 或者 y，是则返回true，否则返回false
2. 从屏幕获得字符串但不显示时用来输入密码的
3. 传入违规代码转换为具体的违规事项是一个简单的解码
4. 转换课程类型也是代码和字符串对应的关系

<center>

## F 比较有特色的算法

<div STYLE="page-break-after: always;"></div>

</center>

<font color =8470FF size =5 >

介绍前的一些话
</font>

<font color=1E90FF size=4>
说实话在这个地方我确实不知道该讲些什么，在进入南航计算机专业学习以来，课内所接触到的都是计算机语言或者导论课，说到算法我一时间不知道如何来讲。从我的个人经历来讲，我在学校的算法组织学了一些ACM竞赛的基础算法，但基本都是数论图论动态规划这些东西，能用到课设里边的并不多，实际也没用上，本来想用一个二维连通图来记录教师和学生的教学关系，但是这样一来表里边的数据非常稀疏，二来如果定义在一个类里边的话会发生爆栈的情况，实际上课设里边并没有用到很多让我引以为豪的算法，只有记录课表时的双向查找和保存我觉得是自己想出来最经典的东西，其他的算法多为从其他开源的资源库上学习模仿下来的东西，但是通过课设这个磨炼的机会还是学习了不少的东西。

</font>

<br>
</br>

<font color =8470FF size =5 >
开始进行矮子里边拔将军--程序里特色算法的介绍
</font>

<br>
</br>

1. 使用了STL标准模板库

   + 在课表内记录课程时，Lesson的容器运用了STL中的**优先队列**

```C++

class Table : public FatherTable
    //这是一个优先队列，存放课程
    priority_queue <Lesson> lessonTimeTable;


```

优先队列STL中封装了优先队列（priority_queue）这种结构，它和普通队列的区别是：普通的队列是一种先进先出的数据结构，元素在队列尾部追加，从队列头删除。而在优先队列中，元素被赋予优先级。当访问元素时，具有最高优先级的元素最先删除。优先队列具有最高级先出（first in,largest out)的行为特征。为此我重载了Lesson的小于号运算符

```C++

bool Lesson::operator <(const Lesson& obj)const

	//这个很重要，为了避免使用比较函数
	//这里把小于号重载为大于号，就能在Table里边实现小根堆
	//从而实现可变的排列顺序是从小日期到大日期

{
	int a = year - obj.year;

	if (a > 0)return 1;
	if (a < 0)return 0;
	
	if (a == 0) 
	{
		int b = month - obj.month;
		
		if (b > 0)return 1;
		if (b < 0)return 0;
		
		if (b == 0) 
		{
			int c = day - obj.day;
		
			if (c > 0)return 1;
			
			if (c < 0)return 0;
			
			if (c == 0)return 0;
		}
	}

	if (this->ordinalNumber >= obj.ordinalNumber) 
		//课程节数的比较，效地在前，不理解看上一条注释	
	{
		return 1;
	}
	//否则都是返回0
	return 0;
}
```
+ 使用了STL标准模板库中的map，进行通过键值查找Value的操作

  + 通过代码查找课程类型的函数

```C++
string translateNumToClassType(int key) 
{
	map<int, string > classType;
	classType.insert(pair<int, string>(1, "一对一课程"));
	classType.insert(pair<int, string>(2, "一对二课程"));
	classType.insert(pair<int, string>(3, "一对三课程"));
	classType.insert(pair<int, string>(4, "一对四课程"));
	classType.insert(pair<int, string>(5, "小班课课程"));
	classType.insert(pair<int, string>(6, "其他类课程"));
	
	string Type = "未查找到此种课程类型 ";
	
	auto it = classType.find(key);

	if (it != classType.end())
	{
		Type = (*it).second;
	}
	return Type;
```
  + 生成一个代号和课程单价对象的map并返回，便于外部的利用

```C++
map<int, ClassPrice> ConClassPrice::getMapFromCon() 

{

	ConfigInfo CF("ClassPrice");//产生文件储存路径
	ifstream file;

	file.open(CF.getCompleteAddress(), ios::in | ios::binary);

	if (!file)
	{
		cout << "ClassPrice文件打开失败，请检查路径是否存在" << endl;
		cout << "当前路径 :  " << CF.getCompleteAddress();
	}

	map<int, ClassPrice> MAP;    //生成课程代码与单价的map

	for (int i = 1; i <= 6; i++) 
	{
		file.read((char*)&this->classPrice, sizeof(this->classPrice));
		MAP.insert(pair<int, ClassPrice>(i, this->classPrice));
	}

	return MAP;

}
```

2. 











