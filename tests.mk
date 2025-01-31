##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Windows
ProjectName            :=tests
ConfigurationName      :=Windows
WorkspaceConfiguration :=Windows
WorkspacePath          :=C:/Users/jonat/Documents/programmering/c/snake
ProjectPath            :=C:/Users/jonat/Documents/programmering/c/snake
IntermediateDirectory  :=build-$(WorkspaceConfiguration)
OutDir                 :=$(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=jonat
Date                   :=12/12/2024
CodeLitePath           :="C:/Program Files/CodeLite"
MakeDirCommand         :=mkdir
LinkerName             :=C:/msys64/ucrt64/bin/g++.exe
SharedObjectLinkerName :=C:/msys64/ucrt64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputDirectory        :=C:/Users/jonat/Documents/programmering/c/snake/build-$(WorkspaceConfiguration)/bin
OutputFile             :=build-$(WorkspaceConfiguration)\bin\$(ProjectName).exe
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/msys64/ucrt64/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       := C:/msys64/ucrt64/bin/ar.exe -r
CXX      := C:/msys64/ucrt64/bin/g++.exe
CC       := C:/msys64/ucrt64/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/msys64/ucrt64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
TOOLDIR:=$(CodeLiteDir)/../cseapp/tools
Objects0=$(IntermediateDirectory)/tests.c$(ObjectSuffix) $(IntermediateDirectory)/snake.c$(ObjectSuffix) $(IntermediateDirectory)/paint.c$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"
	@if not exist "$(OutputDirectory)" $(MakeDirCommand) "$(OutputDirectory)"

$(IntermediateDirectory)/.d:
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/tests.c$(ObjectSuffix): tests.c 
	$(CC) $(SourceSwitch) "C:/Users/jonat/Documents/programmering/c/snake/tests.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/tests.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/tests.c$(PreprocessSuffix): tests.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/tests.c$(PreprocessSuffix) tests.c

$(IntermediateDirectory)/snake.c$(ObjectSuffix): snake.c 
	$(CC) $(SourceSwitch) "C:/Users/jonat/Documents/programmering/c/snake/snake.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/snake.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/snake.c$(PreprocessSuffix): snake.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/snake.c$(PreprocessSuffix) snake.c

$(IntermediateDirectory)/paint.c$(ObjectSuffix): paint.c 
	$(CC) $(SourceSwitch) "C:/Users/jonat/Documents/programmering/c/snake/paint.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/paint.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/paint.c$(PreprocessSuffix): paint.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/paint.c$(PreprocessSuffix) paint.c

##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


