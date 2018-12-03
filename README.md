# Structure-as-formal-parameter-of-function
1.数组不可以整个传递，可以将数组封装在结构体中，然后使用结构体传递，这样就可以将数组传递过去。  
2.通常情况下结构体作为形参直接传递是不可取的，因为结构体比较大，占用内存较多，在函数调用时，直接传递结构体会造成严重的内存浪费，
  所以，一般会使用结构体指针的方式进行传递。  

In main : sizeof(a) = 24;  
In main : &a = 0060FEF8;  
In main : &(a.name)= 0060FEF8;  
In main : a.name = Hello world;  
In func : sizeof(x) = 24;  
In func : &x = 0060FED0;  
In func : &(x.name) = 0060FED0;  
In func : a.name = abcdefg;  
In main : a.name = Hello world,  
In func1 : sizeof(y) = 4;  
In func1 : y = 0060FEF8;  
In func1 : &y = 0060FED0;  
In func1 :Hello world;  
In main : a.name = Hello world,  
请按任意键继续. . .
