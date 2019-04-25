Part 1 – 3: Why is this the case. 
It is because in between two classes ToDoList and Task, there is one level: parent-child so get child and get parent are only happening between these two classes. 
In the case of there are too many classes with many levels of parents and children, if necessary, we can get class from upper levels to lower levels. Hence, if the functionality are different then we need to override.  

Part 1 – 4.a.iv Review the factory method pattern. How is this method an example of a factory method?
In order to apply factory method pattern here, we need to create/define some types of tasks. 

Part 1 - 9.c In your own words, how does the decorator pattern work?
The DisplayableComponentDecorator class inheriting from DisplayableComponent is the heart of the decorator pattern that contains a pointer to an object of class DisplayableComponent
2 CompleteDecorator classes, PriorityDecorator inherits the DisplayableComponentDecorator class and override function display () to change the display of the DisplayableComponent class object contained in it.
The ToDoListInterface class contains 2 functions markComplete and markComplete that get into the index parameter to the task that needs to be displayed by the two classes corresponding to the 2 functions - CompleteDecorator, PriorityDecorator.

