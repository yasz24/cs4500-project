#include "object.h"  // Your file with the CwC declaration of Object
#include "string.h"  // Your file with the String class
#include "array.h"
#include <stdio.h>
 
void FAIL() {   exit(1);    }
void OK(const char* m) { printf("%s\n", m); }
void t_true(bool p) { if (!p) FAIL(); }
void t_false(bool p) { if (p) FAIL(); }
 
void test1() {
    String * s = new String("Hello");
    String * t = new String("World");
    String * u = s->concat(t);
    t_true(s->equals(s));
    t_false(s->equals(t));
    t_false(s->equals(u));
    OK("1");
}
 
void test2() {
    ArrayObj * a = new ArrayObject();
    String * s = new String("Hello");
    String * t = new String("World");
    a->push_back(s);
    a->push_back(t);
    t_true(a->get(0)->equals(s));
    t_true(a->get(1)->equals(t));
    OK("2");
}
 
void test3() {
  String * s = new String("Hello");
  String * t = new String("World");
  String * u = s->concat(t);
  ArrayObj * l = new ArrayObject();
  l->push_back(s);
  l->push_back(t);
  l->push_back(u);
  ArrayObj * l2 = new ArrayObject();
  l2->push_back(s);
  l2->push_back(t);
  l2->push_back(u);
  t_true(l->equals(l2));
  t_true(l2->equals(l));
  t_true(l->hash() == l2->hash());
  OK("3");
}
 
void test4() {
  String * s = new String("Hello");
  String * t = new String("World");
  String * u = s->concat(t);
  ArrayObj * l = new ArrayObject();
  l->push_back(s);
  l->push_back(t);
  l->push_back(u);
  ArrayObj * l2 = new ArrayObject();
  l2->add_all(0,l);
  t_true(l->size() == l2->size());
  OK("4");
}

void test5() {
  String * s = new String("Hello");
  String * t = new String("World");
  String * u = s->concat(t);
  ArrayObj * l = new ArrayObject();
  l->push_back(s);
  l->push_back(t);
  l->add(1, u);
  t_true(l->get(0)->equals(s));
  t_true(l->get(1)->equals(u));
  t_true(l->get(2)->equals(t));
  OK("5");
}

void test6() {
    String * s = new String("Hello");
    String * t = new String("World");
    String * u = s->concat(t);
    ArrayObj * l = new ArrayObject();
    t_true(l->size() == 3);
    l->clear();
    t_true(l->size() == 0);
    OK("6");
}

void test7() {
    String * s = new String("Hello");
    String * t = new String("World");
    StrList * l = new StrList();
    l->push_back(s);
    l->push_back(t);
    t_true(l->get(1)->equals(t));
    OK("7");   
}

void test8() {
  String * s = new String("Hello");
  String * t = new String("World");
  String * u = s->concat(t);
  ArrayObj * l = new ArrayObject();
  l->push_back(s);
  l->push_back(t);
  t_true(l->get(0)->equals(s));
  t_true(l->get(1)->equals(u));
  l->set(1, u);
  t_true(l->get(0)->equals(s));
  t_true(l->get(1)->equals(u));
  OK("8");
}

void test9() {
  String * s = new String("Hello");
  String * t = new String("World");
  String * u = s->concat(t);
  ArrayObj * l = new ArrayObject();
  l->push_back(s);
  l->push_back(t);
  l->push_back(u);
  t_true(l->get(0)->equals(s));
  t_true(l->get(1)->equals(t));
  t_true(l->get(2)->equals(u));
  t_true(l->remove(1);
  t_true(l->get(0)->equals(s));
  t_true(l->get(1)->equals(u));
  OK("9");
}

void test10() {
  String * s = new String("Hello");
  String * t = new String("World");
  String * u = s->concat(t);
  ArrayObj * l = new ArrayObject();
  l->push_back(s);
  l->push_back(t);
  l->push_back(u);
  t_true(l->get(0)->equals(s));
  t_true(l->get(1)->equals(t));
  t_true(l->get(2)->equals(u));
  t_true(l->remove(1);
  t_true(l->get(0)->equals(s));
  t_true(l->get(1)->equals(u));
  l->push_back(t);
  t_true(l->get(0)->equals(s));
  t_true(l->get(1)->equals(u));
  t_true(l->get(2)->equals(t));
  OK("10");
}


void test11() {
  String * s = new String("Hello");
  String * t = new String("World");
  String * u = s->concat(t);
  ArrayObj * l = new ArrayObject();
  l->push_back(s);
  l->push_back(t);
  l->push_back(u);
  t_true(l->contains(s));
  t_true(l->index_of(s) == 0);
  t_true(l->contains(t));
  t_true(l->index_of(t) == 1);
  t_true(l->contains(u));
  t_true(l->index_of(u) == 2);
  OK("11");
}

//tests for ArrayString
void test12() {
    ArrayString * a = new ArrayString();
    String * s = new String("Hello");
    String * t = new String("World");
    a->push_back(s);
    a->push_back(t);
    t_true(a->get(0)->equals(s));
    t_true(a->get(1)->equals(t));
    OK("12");
}
 
void test13() {
  String * s = new String("Hello");
  String * t = new String("World");
  String * u = s->concat(t);
  ArrayString * l = new ArrayString();
  l->push_back(s);
  l->push_back(t);
  l->push_back(u);
  ArrayString * l2 = new ArrayString();
  l2->push_back(s);
  l2->push_back(t);
  l2->push_back(u);
  t_true(l->equals(l2));
  t_true(l2->equals(l));
  t_true(l->hash() == l2->hash());
  OK("13");
}
 
void test14() {
  String * s = new String("Hello");
  String * t = new String("World");
  String * u = s->concat(t);
  ArrayString * l = new ArrayString();
  l->push_back(s);
  l->push_back(t);
  l->push_back(u);
  ArrayString * l2 = new ArrayString();
  l2->add_all(0,l);
  t_true(l->size() == l2->size());
  OK("14");
}

void test15() {
  String * s = new String("Hello");
  String * t = new String("World");
  String * u = s->concat(t);
  ArrayString * l = new ArrayString();
  l->push_back(s);
  l->push_back(t);
  l->add(1, u);
  t_true(l->get(0)->equals(s));
  t_true(l->get(1)->equals(u));
  t_true(l->get(2)->equals(t));
  OK("15");
}

void test16() {
    String * s = new String("Hello");
    String * t = new String("World");
    String * u = s->concat(t);
    ArrayString * l = new ArrayString();
    t_true(l->size() == 3);
    l->clear();
    t_true(l->size() == 0);
    OK("16");
}

void test17() {
    String * s = new String("Hello");
    String * t = new String("World");
    StrList * l = new StrList();
    l->push_back(s);
    l->push_back(t);
    t_true(l->get(1)->equals(t));
    OK("17");   
}

void test18() {
  String * s = new String("Hello");
  String * t = new String("World");
  String * u = s->concat(t);
  ArrayString * l = new ArrayString();
  l->push_back(s);
  l->push_back(t);
  t_true(l->get(0)->equals(s));
  t_true(l->get(1)->equals(u));
  l->set(1, u);
  t_true(l->get(0)->equals(s));
  t_true(l->get(1)->equals(u));
  OK("18");
}

void test19() {
  String * s = new String("Hello");
  String * t = new String("World");
  String * u = s->concat(t);
  ArrayString * l = new ArrayString();
  l->push_back(s);
  l->push_back(t);
  l->push_back(u);
  t_true(l->get(0)->equals(s));
  t_true(l->get(1)->equals(t));
  t_true(l->get(2)->equals(u));
  t_true(l->remove(1);
  t_true(l->get(0)->equals(s));
  t_true(l->get(1)->equals(u));
  OK("19");
}

void test20() {
  String * s = new String("Hello");
  String * t = new String("World");
  String * u = s->concat(t);
  ArrayString * l = new ArrayString();
  l->push_back(s);
  l->push_back(t);
  l->push_back(u);
  t_true(l->get(0)->equals(s));
  t_true(l->get(1)->equals(t));
  t_true(l->get(2)->equals(u));
  t_true(l->remove(1);
  t_true(l->get(0)->equals(s));
  t_true(l->get(1)->equals(u));
  l->push_back(t);
  t_true(l->get(0)->equals(s));
  t_true(l->get(1)->equals(u));
  t_true(l->get(2)->equals(t));
  OK("20");
}


void test21() {
  String * s = new String("Hello");
  String * t = new String("World");
  String * u = s->concat(t);
  ArrayString * l = new ArrayString();
  l->push_back(s);
  l->push_back(t);
  l->push_back(u);
  t_true(l->contains(s));
  t_true(l->index_of(s) == 0);
  t_true(l->contains(t));
  t_true(l->index_of(t) == 1);
  t_true(l->contains(u));
  t_true(l->index_of(u) == 2);
  OK("21");
}