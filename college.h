//********************
//Matthew Aberegg
//Project 3
//CS 2401
//10/8/2015
//********************

/**
 * @file college.h
 * @author Matthew Aberegg
 * @date 10/8/2015
 */

#include <iostream>
#include <fstream>
#include <string>
#include "course.h"
#include "node.h"


#ifndef COLLEGE_H
#define COLLEGE_H

/// Stores a college student's name and course information.
class College{
	public:
	/**
	 * @brief Default constructor. Creates a new empty course list
	 * for a student.
	 * @param s Name of the student.
	 */
	College(std::string s);
	~College();
	College(const College& other);
	College& operator =(const College& other);
	/**
	 * @brief Adds a new course to the current student's course list.
	 * @param c The course to be added.
	 */
	void add(course& c);
	void remove(std::string coursename);
	void display(std::ostream& outs);
	double hours();
	/**
	 * @brief Lists the current student's GPA.
	 * @return The current GPA.
	 */
	double gpa();
	void save(std::ostream& outs);
	void load(std::istream& ins);
	private:
	std::string name;
	node * head;




};
#endif
