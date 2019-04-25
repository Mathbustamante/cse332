Part 1 – 2: compare and contrast the Strategy pattern and the Template Method pattern
Answer:
	Strategy and Template Method both encapsulate algorithm, Template by inheritance and strategy by composition.
	Template Method is much more efficient than Strategy, while Strategy is more flexible because use object composition.
	In template method all duplicate code are in super class so that all the subclass share those duplicate code. while in Strategy, few of the duplicate code can be in all the subclass.
	Strategy says , I don’t depend on anyone , I can do the entire algorithm my self. While Template says, I do not keep any duplicate code so I use important technique code reuse and much efficient.
	In Strategy , client can change their algorithm at runtime simply by using different strategy object.
	In Template , abstract methods are implemented by sub-classes. while not abstract method in Strategy, it’s self contained code.
	To prevent the subclass from changing the algorithm in the Template method , declare Template Method as final
	Template Method and Hollywood Principle , do’t call Us we will call you .

