/*
 * Generated by /home/ubuntu/workspace/cmake/cmake-3.5.2/bootstrap
 * Version:     $Revision$
 *
 * Source directory: /home/ubuntu/workspace/cmake/cmake-3.5.2
 * Binary directory: /home/ubuntu/workspace/cmake/cmake-3.5.2/Bootstrap.cmk
 *
 * C compiler:   gcc
 * C flags:      
 *
 * C++ compiler: g++
 * C++ flags:    
 *
 * Make:         make
 *
 * Sources:
 *   cmake    cmakemain   cmcmd    cmCommandArgumentLexer   cmCommandArgumentParser   cmCommandArgumentParserHelper   cmCommonTargetGenerator   cmCPackPropertiesGenerator   cmDefinitions   cmDepends   cmDependsC   cmDocumentationFormatter   cmPolicies   cmProperty   cmPropertyMap   cmPropertyDefinition   cmPropertyDefinitionMap   cmMakefile   cmExportBuildFileGenerator   cmExportFileGenerator   cmExportInstallFileGenerator   cmExportTryCompileFileGenerator   cmExportSet   cmExportSetMap   cmExternalMakefileProjectGenerator   cmGeneratorExpressionEvaluationFile   cmGeneratedFileStream   cmGeneratorTarget   cmGeneratorExpressionContext   cmGeneratorExpressionDAGChecker   cmGeneratorExpressionEvaluator   cmGeneratorExpressionLexer   cmGeneratorExpressionNode   cmGeneratorExpressionParser   cmGeneratorExpression   cmGlobalCommonGenerator   cmGlobalGenerator   cmInstallDirectoryGenerator   cmLocalCommonGenerator   cmLocalGenerator   cmInstalledFile   cmInstallGenerator   cmInstallExportGenerator   cmInstallFilesGenerator   cmInstallScriptGenerator   cmInstallTargetGenerator   cmScriptGenerator   cmSourceFile   cmSourceFileLocation   cmState   cmSystemTools   cmTestGenerator   cmVersion   cmFileTimeComparison   cmGlobalUnixMakefileGenerator3   cmLocalUnixMakefileGenerator3   cmMakefileExecutableTargetGenerator   cmMakefileLibraryTargetGenerator   cmMakefileTargetGenerator   cmMakefileUtilityTargetGenerator   cmOutputConverter   cmOSXBundleGenerator   cmNewLineStyle   cmBootstrapCommands1   cmBootstrapCommands2   cmCommandsForBootstrap   cmTarget   cmTest   cmCustomCommand   cmCustomCommandGenerator   cmCacheManager   cmListFileCache   cmComputeLinkDepends   cmComputeLinkInformation   cmOrderDirectories   cmComputeTargetDepends   cmComputeComponentGraph   cmExprLexer   cmExprParser   cmExprParserHelper    cmListFileLexer   
 * kwSys Sources:
 *   Directory   EncodingCXX   FStream   Glob   RegularExpression   SystemTools     EncodingC     ProcessUNIX     String     System     Terminal
 */

/*============================================================================
  KWSys - Kitware System Library
  Copyright 2000-2009 Kitware, Inc., Insight Software Consortium

  Distributed under the OSI-approved BSD License (the "License");
  see accompanying file Copyright.txt for details.

  This software is distributed WITHOUT ANY WARRANTY; without even the
  implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the License for more information.
============================================================================*/
#ifndef cmsys_Configure_hxx
#define cmsys_Configure_hxx

/* Include C configuration.  */
#include <cmsys/Configure.h>

/* Whether wstring is available.  */
#define cmsys_STL_HAS_WSTRING 1

/* If building a C++ file in kwsys itself, give the source file
   access to the macros without a configured namespace.  */
#if defined(KWSYS_NAMESPACE)
# if !cmsys_NAME_IS_KWSYS
#  define kwsys     cmsys
# endif
# define KWSYS_NAME_IS_KWSYS            cmsys_NAME_IS_KWSYS
# define KWSYS_STL_HAS_WSTRING          cmsys_STL_HAS_WSTRING
#endif

#endif
