##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=04_hexadecimaal_octaal_demo
ConfigurationName      :=Debug
WorkspacePath          :=C:/data/c_ont_omg/c_workspace
ProjectPath            :=C:/data/c_ont_omg/c_workspace/04_hexadecimaal_octaal_demo
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Joop
Date                   :=06/02/2017
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/TDM-GCC-32/bin/g++.exe
SharedObjectLinkerName :=C:/TDM-GCC-32/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="04_hexadecimaal_octaal_demo.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/TDM-GCC-32/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/TDM-GCC-32/bin/ar.exe rcu
CXX      := C:/TDM-GCC-32/bin/g++.exe
CC       := C:/TDM-GCC-32/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall  $(Preprocessors)
ASFLAGS  := 
AS       := C:/TDM-GCC-32/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/04_hexadecimaal_octaal_demo.c$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/04_hexadecimaal_octaal_demo.c$(ObjectSuffix): 04_hexadecimaal_octaal_demo.c $(IntermediateDirectory)/04_hexadecimaal_octaal_demo.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/data/c_ont_omg/c_workspace/04_hexadecimaal_octaal_demo/04_hexadecimaal_octaal_demo.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/04_hexadecimaal_octaal_demo.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/04_hexadecimaal_octaal_demo.c$(DependSuffix): 04_hexadecimaal_octaal_demo.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/04_hexadecimaal_octaal_demo.c$(ObjectSuffix) -MF$(IntermediateDirectory)/04_hexadecimaal_octaal_demo.c$(DependSuffix) -MM 04_hexadecimaal_octaal_demo.c

$(IntermediateDirectory)/04_hexadecimaal_octaal_demo.c$(PreprocessSuffix): 04_hexadecimaal_octaal_demo.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/04_hexadecimaal_octaal_demo.c$(PreprocessSuffix) 04_hexadecimaal_octaal_demo.c


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


