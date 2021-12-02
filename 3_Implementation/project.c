<?xml version="1.0" encoding="utf-8"?>
<Project DefaultTargets="Build" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
  <PropertyGroup>
    <SchemaVersion>2.0</SchemaVersion>
    <ProjectVersion>6.1</ProjectVersion>
    <ToolchainName>com.HPInfoTech.CodeVisionAVR.C</ToolchainName>
    <ProjectGuid>{4F22BD79-423D-497C-A76A-A46C3F34E8A0}</ProjectGuid>
    <avrdevice>ATmega16</avrdevice>
    <avrdeviceseries>none</avrdeviceseries>
    <OutputType>Executable</OutputType>
    <Language>C</Language>
    <OutputFileName>$(MSBuildProjectName)</OutputFileName>
    <OutputFileExtension>.cof</OutputFileExtension>
    <OutputDirectory>$(MSBuildProjectDirectory)\$(Configuration)</OutputDirectory>
    <AssemblyName>c file</AssemblyName>
    <Name>c file</Name>
    <RootNamespace>c file</RootNamespace>
    <ToolchainFlavour>Native</ToolchainFlavour>
    <KeepTimersRunning>true</KeepTimersRunning>
    <OverrideVtor>false</OverrideVtor>
    <OverrideVtorValue />
    <eraseonlaunchrule>0</eraseonlaunchrule>
  </PropertyGroup>
  <PropertyGroup Condition=" '$(Configuration)' == 'Release' ">
    <ToolchainSettings>
      <CV>
        <CVProjectPath>"c file.prj"</CVProjectPath>
      </CV>
    </ToolchainSettings>
  </PropertyGroup>
  <PropertyGroup Condition=" '$(Configuration)' == 'Debug' ">
    <ToolchainSettings>
      <CV>
        <CVProjectPath>"c file.prj"</CVProjectPath>
      </CV>
    </ToolchainSettings>
  </PropertyGroup>
  <ItemGroup>
    <Compile Include="C file.c">
      <SubType>compile</SubType>
    </Compile>
  </ItemGroup>
  <Import Project="$(AVRSTUDIO_EXE_PATH)\\vs\\CV.targets" />
</Project
