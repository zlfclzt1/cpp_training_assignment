# cpp_training_assignment

1. 写一个计算3D空间两点距离（坐标用float表示）的函数，封装成动态库并进行调用测试。

2. 设计一个 Book 类，至少包含 ISBN、书名、作者、出版社、出版时间、价格等私有属性，通过键盘录入 10 本书的信息后在屏幕输出价格>100元的书名列表。

3. 设计一个人类 Person 和 它的一个子类 Chinese。要求如下：
    - Person 类有 name 和 age 属性，一个包含两个参数的构造方法，用于给 name 和 age 属性赋值，一个 show() 方法打印 Person 的属性信息；
    - 中国人类 Chinese 增加一个  shengXiao（生肖）属性。有一个包含三个参数的构造方法，前两个参数用于给继承的 name 和 age 属性赋值，第三个参数给 shengXiao 赋值，一个 show() 方法用于打印 Chinese 的属性信息；
    - 在测试类中分别创建 Person 对象和 Chinese 对象，调用它们的 show() 方法。

4. 基于 C++ 标准库中的 string 类扩展实现一个新的字符串处理类，要求至少新增 toInt（将当前字符串对象转化为整数）和 toFloat（将当前字符串对象转化为浮点数）方法。

5. 设计一个 Shape（形状）接口（抽象类）和它的两个实现类  Rectangle（矩形）、Triangle（三角形）。要求如下：
    - Shape 接口中有一个抽象方法 area()，该方法没有参数，返回值为 double 类型；
    - 在 Rectangle 类和 Triangle 类中实现 Shape 接口的 area() 抽象方法，分别用于计算矩形和三角形的面积（都通过边长属性进行计算）；
    - 在测试类中提示用户输入一个矩形和三角形的边长，然后通过 Rectangle 和 Triangle 对象计算出它们的面积并打印。

6. 针对1题写一个模板类，以支持其他数据类型。

7. 举例说明 shared_ptr 智能指针相互引用导致的内存泄漏问题，并给出解决方法。
