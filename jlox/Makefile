JFLAGS = -g
JC = javac
.SUFFIXES: .java .class
.java.class:
	$(JC) $(JFLAGS) $*.java

CLASSES = \
        Main.java 

default: classes

classes: $(CLASSES:.java=.class)

run: classes
	java -cp . Main

clean: 
	$(RM) *.class