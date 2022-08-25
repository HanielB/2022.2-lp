---
layout: page
title: SML Introduction
---

# SML Introduction
{: .no_toc .mb-2 }

## Readings

- [Class notes]({{ site.baseurl }}{% link _lessons/01-sml-intro/01-sml-intro.pdf %}).
- [Old recorded lecture](https://www.youtube.com/playlist?list=PLeIbBi3CwMZxjkRr595OVUL2GC3zCouTm)
- [An SML Tutorial](http://homepages.inf.ed.ac.uk/stg/NOTES/)
- [The Definition of Standard ML](https://smlfamily.github.io/sml97-defn.pdf)
  Complete specification of the language's syntax and semantics.
- [LCF](https://en.wikipedia.org/wiki/Logic_for_Computable_Functions)
- [Isabelle proof assistant](https://isabelle.in.tum.de/)
- [CakeML](https://cakeml.org/), a formally verified SML compiler

## A bit of history

- ML was designed by Robin Milner and others on the early seventies.

- ML has many dialects, we will be using SML, which stands for Standard ML.

- It was designed as the meta-language (ML stands for "meta-language") for LCF
  (Logic for Computable Functions)

- LCF was one of the first automated theorem provers, which are tools that
  automate logic reasoning to prove theorems. Current automated theorem provers
  to use ML as meta-language include HOL4 and Isabelle.

- One of the few languages to have been completely formally specified. Link

- There is even a formally verified compiler for a substitiantial set of
  SML, CakeML.

- We will be using mostly interpreted ML.

## Topics covered

- Using the interpreter
- Overloaded operators
- Equality types and reals
- Variable declaration
- Lazy evaluation
- Tuples
- Lists
- Functions
