# EZ-Language (ez)

EZ-Language (ez) was created by RedLeZ and vexato with the aim of making the development experience easier, faster, and more enjoyable. It is designed to solve real-world pain points in multi-language projects while staying lightweight, efficient, and open to all.

---

## Why EZ-Language Was Created

EZ-Language was born from frustration. While working on multi-language projects like PlyLang, we faced major challenges, transferring data between languages, wishing libraries from one language existed in another, and dealing with inconsistent build environments. EZ was our answer: one language to bridge the gap between multiple ecosystems, while staying fast and minimal.

---

## Philosophy: Fast, Simple, and for Everyone

EZ gets its name from its mission: make programming **easy**. Whether you're an absolute beginner or a veteran developer, EZ reduces friction so you can focus on building, not configuring.

* **Simple syntax** for fast learning.
* **Minimal setup**: just one line (`env-name;`) to initialize your project.
* **Rapid prototyping and execution**.

We believe in universal accessibility: anyone can use, learn, and build with EZ.

---

## Core Features

### Environment Declaration

Use the `env-name;` statement in your `main.ez` file to declare your project type (e.g., `env-web;`, `env-game;`, `env-ai;`). This sets up the proper tooling, dependencies, and configurations for that environment.

You can also:

* Create and publish your own environments.
* Use the `include` keyword to link multiple `.ez` files.

### Multi-Language Support

EZ supports multiple programming languages under the hood. While its core is in C++, EZ allows seamless integration across ecosystems. You can use EZ to create:

* Web apps
* Minecraft mods (includes modding templates)
* Data pipelines
* System tools

No more switching between languages or rewriting logic. EZ does it all.

### Custom Translator/Compiler

EZ will ship with a built-in translator/compiler written in **C and Assembly** for maximum performance. This isn’t just another interpreted scripting tool, EZ compiles into real, optimized code.

### Dependency Management (WIP)

EZ handles dependencies via the environment system. We’re exploring two paths:

1. **Auto-download** dependencies during compilation.
2. **Manual installation** using a CLI (`ez install`), ideal for clean builds.

Dependency security and caching will be community-reviewed and transparent.

### Community-Driven Ecosystem

Every EZ user is part of the team. Our open-source model means:

* Anyone can contribute packages.
* All packages are hosted and shared via Git or a dedicated website.
* Our package manager is **the community itself**.

We prioritize ethics, collaboration, and freedom.

### Editor Plugins

EZ is editor-agnostic. You can use:

* Any text editor
* VSCode (dedicated plugin in progress)
* Shell + CLI for power users
* 
---

## Future Goals

* Release the first version of the translator.
* Finalize dependency management strategy.
* Grow the community through tutorials and open development.
* Host a template repository for environments like Minecraft modding.
