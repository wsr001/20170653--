

class FluidOz;             // ��д���Ʋ�Ҫȫ����д

class XmLinkList{}			//���������û��ʵ�������ռ䣬��Ҫ��ǰ׺���������ֳ�ͻ

class NameOneTwo
   {
   public:
      int		DoIt();
      void	HandleError();
   }						//ʹ����������ͬ�Ĺ���

   class NameOneTwo
   {
   public:
      int		VarAbc();
      int		ErrorNumber();
   private:
      int			mVarAbc;
      int			mErrorNumber;
     			
   }						//������������ĸ'm'��ͷ

  
   class NameOneTwo
   {
   public:
      int		StartYourEngines(
                               Engine& rSomeEngine, 
                               Engine& rAnotherEngine);
   }													//�����ͺ���������һ����ĸ����Сд��

   int NameOneTwo::HandleError(int errorNumber)
   {
      int            error= OsErr();
      Time           time_of_error;
      ErrorProcessor error_processor;
   }												//�ֲ�����������

   String* pName= new String;		//ָ�����������ǰ׺

   class Test
   {
   public:
      void               DoSomething(StatusInfo& rStatus);

      StatusInfo&        rStatus();
      const StatusInfo&  Status() const;

   private:
      StatusInfo&        mrStatus;
   }						//���ñ����ͷ������ú���������ǰ׺

   Logger  gLog;
   Logger* gpLog;			//ȫ�ֱ���������ǰ׺

   const int A_GLOBAL_CONSTANT= 5;			//ȫ�ֳ���������

   class Test
   {
   public:
   private:
      static StatusInfo msStatus;
   }						//��̬����������ǰ׺
	
   typedef uint16  ModuleType;
   typedef uint32  SystemType;	//�Զ������ͣ�typedef��������

	#define MAX(a,b) blah
	#define IS_ERR(err) blah		//�궨�������
 
   int
   some_bloody_function(){}			//C++����������

   
   enum PinStateType
   {
      PIN_OFF,
      PIN_ON
   };
	enum { STATE_ERR,  STATE_OPEN, STATE_RUNNING, STATE_DYING};		//ö�ٵ�����

	int AnyMethod(
                 int   arg1,  
                 int   arg2, 
                 int   arg3,
                 int   arg4);		//�����ͺ����Ĳ���

	
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
   }					//�������Ʊ���Լ��ո�

   while(1)
{
   if (valid)
   {

   } // if valid
   else
   {
   } // not valid

} // end forever				//�ڻ����Ž�����λ�ü���ע��

   
for (...) 
	{
while (...) 
    {
        ...
            if (disaster) goto error; // ����ѭ��
    }
	}
	...
	error:
	clean up the mess					//Goto

	(condition) ? funct1() : func2();		//?:

	while (*dest++ = *src++)
						;     // VOID			 //�Կ�������ע��
	
	
typedef int     bool;
   #define TRUE    1
   #define FALSE   0				//��������

