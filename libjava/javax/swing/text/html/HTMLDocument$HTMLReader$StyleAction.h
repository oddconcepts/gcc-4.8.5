
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_html_HTMLDocument$HTMLReader$StyleAction__
#define __javax_swing_text_html_HTMLDocument$HTMLReader$StyleAction__

#pragma interface

#include <javax/swing/text/html/HTMLDocument$HTMLReader$TagAction.h>
extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
          class MutableAttributeSet;
        namespace html
        {
            class HTML$Tag;
            class HTMLDocument$HTMLReader;
            class HTMLDocument$HTMLReader$StyleAction;
        }
      }
    }
  }
}

class javax::swing::text::html::HTMLDocument$HTMLReader$StyleAction : public ::javax::swing::text::html::HTMLDocument$HTMLReader$TagAction
{

public: // actually package-private
  HTMLDocument$HTMLReader$StyleAction(::javax::swing::text::html::HTMLDocument$HTMLReader *);
public:
  virtual void start(::javax::swing::text::html::HTML$Tag *, ::javax::swing::text::MutableAttributeSet *);
  virtual void end(::javax::swing::text::html::HTML$Tag *);
public: // actually package-private
  ::javax::swing::text::html::HTMLDocument$HTMLReader * __attribute__((aligned(__alignof__( ::javax::swing::text::html::HTMLDocument$HTMLReader$TagAction)))) this$1;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_text_html_HTMLDocument$HTMLReader$StyleAction__
