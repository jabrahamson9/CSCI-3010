import '../QtModule.qbs' as QtModule

QtModule {
    qtModuleName: "Qml"
    Depends { name: "Qt"; submodules: ["core-private","qml"]}

    architectures: []
    targetPlatform: "macos"
    hasLibrary: false
    staticLibsDebug: []
    staticLibsRelease: []
    dynamicLibsDebug: []
    dynamicLibsRelease: []
    linkerFlagsDebug: []
    linkerFlagsRelease: []
    frameworksDebug: []
    frameworksRelease: []
    frameworkPathsDebug: []
    frameworkPathsRelease: []
    libNameForLinkerDebug: undefined
    libNameForLinkerRelease: undefined
    libFilePathDebug: undefined
    libFilePathRelease: undefined
    pluginTypes: []
    moduleConfig: []
    cpp.defines: []
    cpp.includePaths: ["/Users/oceaneandreis/Qt/5.12.5/clang_64/lib/QtQml.framework/Headers/5.12.5","/Users/oceaneandreis/Qt/5.12.5/clang_64/lib/QtQml.framework/Headers/5.12.5/QtQml"]
    cpp.libraryPaths: []
    
}
