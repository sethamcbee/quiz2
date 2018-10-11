.PHONY: all
all: build doczip

.PHONY: clean
clean:
	-rm -rf *.o course-manager html/ latex/ doc.tar.gz

.PHONY: build
build: course-manager

.PHONY: doczip
doczip: doc.tar.gz

.PHONY: doc
doc: html/index.html

doc.tar.gz: html/index.html
	tar czf $@ html/ latex/

html/index.html: *.cc *.h
	doxygen doxygen.cfg

course-manager: course.o college.o collegemain.o
	g++ -o $@ $^

%.o: %.cc
	g++ -c $<
