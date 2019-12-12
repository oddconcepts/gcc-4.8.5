
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_pipeline_DomConsumer__
#define __gnu_xml_pipeline_DomConsumer__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace pipeline
      {
          class DomConsumer;
          class DomConsumer$Handler;
          class EventConsumer;
      }
    }
  }
  namespace org
  {
    namespace w3c
    {
      namespace dom
      {
          class Document;
      }
    }
    namespace xml
    {
      namespace sax
      {
          class ContentHandler;
          class DTDHandler;
          class ErrorHandler;
      }
    }
  }
}

class gnu::xml::pipeline::DomConsumer : public ::java::lang::Object
{

public:
  DomConsumer(::java::lang::Class *);
public: // actually protected
  virtual void setHandler(::gnu::xml::pipeline::DomConsumer$Handler *);
private:
  ::org::w3c::dom::Document * emptyDocument();
public:
  DomConsumer(::java::lang::Class *, ::gnu::xml::pipeline::EventConsumer *);
  virtual ::org::w3c::dom::Document * getDocument();
  virtual void setErrorHandler(::org::xml::sax::ErrorHandler *);
  virtual jboolean isHidingReferences();
  virtual void setHidingReferences(jboolean);
  virtual jboolean isHidingComments();
  virtual void setHidingComments(jboolean);
  virtual jboolean isHidingWhitespace();
  virtual void setHidingWhitespace(jboolean);
  virtual jboolean isHidingCDATA();
  virtual void setHidingCDATA(jboolean);
  virtual ::org::xml::sax::ContentHandler * getContentHandler();
  virtual ::org::xml::sax::DTDHandler * getDTDHandler();
  virtual ::java::lang::Object * getProperty(::java::lang::String *);
public: // actually package-private
  virtual ::gnu::xml::pipeline::EventConsumer * getNext();
  virtual ::org::xml::sax::ErrorHandler * getErrorHandler();
  static ::org::w3c::dom::Document * access$0(::gnu::xml::pipeline::DomConsumer *);
private:
  ::java::lang::Class * __attribute__((aligned(__alignof__( ::java::lang::Object)))) domImpl;
  jboolean hidingCDATA;
  jboolean hidingComments;
  jboolean hidingWhitespace;
  jboolean hidingReferences;
  ::gnu::xml::pipeline::DomConsumer$Handler * handler;
  ::org::xml::sax::ErrorHandler * errHandler;
  ::gnu::xml::pipeline::EventConsumer * next;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_pipeline_DomConsumer__
