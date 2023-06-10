# RegCOM
Friendly interface for registering annoying dll

## What is RegCOM exactly
RegCOM is a tiny Windows app, which provides a friendly interface for registering (via regsvr32) 1S platform's comcntr.dll. When the platform is (re)installed,
the mentioned dll does not register automatically, which results in an error for a client.

## How to deploy
Just open the project in MSVS and build it. After that you can easily distribute the app simply by copying an executable + settings.txt.

## Techstack
- The app is written in **C++(17)**
- Provided as a **MSVS 2022 project**
- Uses [**Dear ImGUI**](https://github.com/ocornut/imgui) as an interface library (mostly for _educational purposes_).
