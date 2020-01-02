

class FluidOz;             // 缩写名称不要全部大写

class XmLinkList{}			//如果编译器没有实现命名空间，需要用前缀来避名名字冲突

class NameOneTwo
   {
   public:
      int		DoIt();
      void	HandleError();
   }						//使用与类名相同的规则

   class NameOneTwo
   {
   public:
      int		VarAbc();
      int		ErrorNumber();
   private:
      int			mVarAbc;
      int			mErrorNumber;
     			
   }						//属性名字以字母'm'开头

  
   class NameOneTwo
   {
   public:
      int		StartYourEngines(
                               Engine& rSomeEngine, 
                               Engine& rAnotherEngine);
   }													//方法和函数参数第一个字母必须小写。

   int NameOneTwo::HandleError(int errorNumber)
   {
      int            error= OsErr();
      Time           time_of_error;
      ErrorProcessor error_processor;
   }												//局部变量的命名

   String* pName= new String;		//指针变量的命名前缀

   class Test
   {
   public:
      void               DoSomething(StatusInfo& rStatus);

      StatusInfo&        rStatus();
      const StatusInfo&  Status() const;

   private:
      StatusInfo&        mrStatus;
   }						//引用变量和返回引用函数的命名前缀

   Logger  gLog;
   Logger* gpLog;			//全局变量的命名前缀

   const int A_GLOBAL_CONSTANT= 5;			//全局常量的命名

   class Test
   {
   public:
   private:
      static StatusInfo msStatus;
   }						//静态变量的命名前缀
	
   typedef uint16  ModuleType;
   typedef uint32  SystemType;	//自定义类型（typedef）的命名

	#define MAX(a,b) blah
	#define IS_ERR(err) blah		//宏定义的命名
 
   int
   some_bloody_function(){}			//C++函数的命名

   
   enum PinStateType
   {
      PIN_OFF,
      PIN_ON
   };
	enum { STATE_ERR,  STATE_OPEN, STATE_RUNNING, STATE_DYING};		//枚举的命名

	int AnyMethod(
                 int   arg1,  
                 int   arg2, 
                 int   arg3,
                 int   arg4);		//方法和函数的布局

	
   void
   func()
   {
      if (something bad)
      {
          if (another thing bad)
          {
              while (more input)
              {
              }
          }
      }
   }					//缩进、制表符以及空格

   while(1)
{
   if (valid)
   {

   } // if valid
   else
   {
   } // not valid

} // end forever				//在花括号结束的位置加上注释

   
for (...) 
	{
while (...) 
    {
        ...
            if (disaster) goto error; // 跳出循环
    }
	}
	...
	error:
	clean up the mess					//Goto

	(condition) ? funct1() : func2();		//?:

	while (*dest++ = *src++)
						;     // VOID			 //对空语句进行注释
	
	
typedef int     bool;
   #define TRUE    1
   #define FALSE   0				//布尔类型

