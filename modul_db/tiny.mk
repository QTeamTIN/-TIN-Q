##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=tiny
ConfigurationName      :=Debug
WorkspacePath          :=/home/osboxes/Documents/tiny_db
ProjectPath            :=/home/osboxes/Documents/tiny_db/tiny
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=osboxes.org
Date                   :=29/05/18
CodeLitePath           :=/home/osboxes/.codelite
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
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
ObjectsFileList        :="tiny.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := $(LibrarySwitch)pqxx $(LibrarySwitch)pq 
ArLibs                 :=  "pqxx" "pq" 
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/PostgresQueueDAO.cpp$(ObjectSuffix) $(IntermediateDirectory)/Queue.cpp$(ObjectSuffix) $(IntermediateDirectory)/User.cpp$(ObjectSuffix) $(IntermediateDirectory)/PostgresUserDAO.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Connection.cpp$(ObjectSuffix) 



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
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/PostgresQueueDAO.cpp$(ObjectSuffix): PostgresQueueDAO.cpp $(IntermediateDirectory)/PostgresQueueDAO.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/osboxes/Documents/tiny_db/tiny/PostgresQueueDAO.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/PostgresQueueDAO.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/PostgresQueueDAO.cpp$(DependSuffix): PostgresQueueDAO.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/PostgresQueueDAO.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/PostgresQueueDAO.cpp$(DependSuffix) -MM PostgresQueueDAO.cpp

$(IntermediateDirectory)/PostgresQueueDAO.cpp$(PreprocessSuffix): PostgresQueueDAO.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/PostgresQueueDAO.cpp$(PreprocessSuffix) PostgresQueueDAO.cpp

$(IntermediateDirectory)/Queue.cpp$(ObjectSuffix): Queue.cpp $(IntermediateDirectory)/Queue.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/osboxes/Documents/tiny_db/tiny/Queue.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Queue.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Queue.cpp$(DependSuffix): Queue.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Queue.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Queue.cpp$(DependSuffix) -MM Queue.cpp

$(IntermediateDirectory)/Queue.cpp$(PreprocessSuffix): Queue.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Queue.cpp$(PreprocessSuffix) Queue.cpp

$(IntermediateDirectory)/User.cpp$(ObjectSuffix): User.cpp $(IntermediateDirectory)/User.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/osboxes/Documents/tiny_db/tiny/User.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/User.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/User.cpp$(DependSuffix): User.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/User.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/User.cpp$(DependSuffix) -MM User.cpp

$(IntermediateDirectory)/User.cpp$(PreprocessSuffix): User.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/User.cpp$(PreprocessSuffix) User.cpp

$(IntermediateDirectory)/PostgresUserDAO.cpp$(ObjectSuffix): PostgresUserDAO.cpp $(IntermediateDirectory)/PostgresUserDAO.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/osboxes/Documents/tiny_db/tiny/PostgresUserDAO.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/PostgresUserDAO.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/PostgresUserDAO.cpp$(DependSuffix): PostgresUserDAO.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/PostgresUserDAO.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/PostgresUserDAO.cpp$(DependSuffix) -MM PostgresUserDAO.cpp

$(IntermediateDirectory)/PostgresUserDAO.cpp$(PreprocessSuffix): PostgresUserDAO.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/PostgresUserDAO.cpp$(PreprocessSuffix) PostgresUserDAO.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/osboxes/Documents/tiny_db/tiny/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/Connection.cpp$(ObjectSuffix): Connection.cpp $(IntermediateDirectory)/Connection.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/osboxes/Documents/tiny_db/tiny/Connection.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Connection.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Connection.cpp$(DependSuffix): Connection.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Connection.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Connection.cpp$(DependSuffix) -MM Connection.cpp

$(IntermediateDirectory)/Connection.cpp$(PreprocessSuffix): Connection.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Connection.cpp$(PreprocessSuffix) Connection.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


