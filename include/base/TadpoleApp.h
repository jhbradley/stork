#ifndef TADPOLEAPP_H
#define TADPOLEAPP_H

#include "MooseApp.h"

class TadpoleApp;

template<>
InputParameters validParams<TadpoleApp>();

class TadpoleApp : public MooseApp
{
public:
  TadpoleApp(InputParameters parameters);
  virtual ~TadpoleApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* TADPOLEAPP_H */
