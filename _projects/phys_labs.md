---
title: Jupyter Notebook Physics Lab Reports - PHYS3112
layout: single
excerpt:
header:
  image: /assets/projects/phys_labs/GRS_header.png
  teaser: /assets/projects/phys_labs/GRS_Cs137_spectrum.png
class: wide
---

### Presenting novel investigation and data analysis in some classic physics experiments.

This page presents several Jupyter Notebooks I wrote in PHYS3112 - Experimental and Computational Physics.

After taking a fundamental programming course in my first-year, I recognised the potential a versatile programming skillset offers, and worked through some online Python courses alongside study.

I was fortunate to apply my newfound statistics and Python knowledge in my second year physics labs, and more recently in PHYS3112.

Note these reports were made moreso to be discussed upon rather than read word for word and so might have gaps here and there. Also don't mind the formatting, I haven't got around to fixing them all. 

Here are some of these labs.

#### Gamma Ray Spectroscopy (GRS)

This experiment was pretty cool in that I measured the gamma spectrum of several radioactive samples with a NaI scintillator detector and investigated the sources of the peaks in the spectrum. I more or less included this for the mesmerising spectrums rather than the analysis.

<iframe src="/assets/vendor/pdfjs-2.7.570-dist/web/viewer.html?file=%2Fassets%2Fprojects%2Fphys_labs%2FGRS_ACarbone_v2.pdf" frameborder="0" width="100%" height="800"></iframe>

#### Compton Effect (CE)

This experiment was to confirm the [Compton Effect](https://en.wikipedia.org/wiki/Compton_scattering), that is the change in wavelength of a photon scattered by collision with a charged particle. In this case I was using [Caesium-137](https://en.wikipedia.org/wiki/Caesium-137) as a gamma ray source, steel rod as reflecting surface, and a NaI scintillator detector.

I learned one big lesson in this experiment: with data like in this experiment, don't denoise, smooth instead.

What this means is if you have a look at the plots in the report, the data is rather noisy, and in pursuit of a better gaussian fit of the photopeak I attempted to denoise the data in four different ways. This failed spectacularly when by the end of it all the improvement in the fit was basically negligble.

My lecturer suggested that a smoothing function would've been much better suited in this context. I'll be sure to remember this lesson for the future.

<iframe src="/assets/vendor/pdfjs-2.7.570-dist/web/viewer.html?file=%2Fassets%2Fprojects%2Fphys_labs%2FCE_ACarbone.pdf" frameborder="0" width="100%" height="800"></iframe>

#### Ising Model

This one was a computational experiment on the [Ising Model](https://en.wikipedia.org/wiki/Ising_model) using a modified version of [this GitHub repo](https://github.com/red-starter/Ising-Model).

The report explores some features of the Ising model, including starting conditions and measurables.

<iframe src="/assets/vendor/pdfjs-2.7.570-dist/web/viewer.html?file=%2Fassets%2Fprojects%2Fphys_labs%2FIsing_Model_ACarbone_v2.pdf" frameborder="0" width="100%" height="800"></iframe>

#### Coupled Pendula (CP)

This experiment was a good demonstration of applying Fourier analysis in the lab.

Essentially we recorded the voltages of the transducers on top of two [coupled pendula](https://www.youtube.com/watch?v=re-qMDhaOmk) and confirmed the predictions of the equations of motion.

<iframe src="/assets/vendor/pdfjs-2.7.570-dist/web/viewer.html?file=%2Fassets%2Fprojects%2Fphys_labs%2FCP_ACarbone.pdf" frameborder="0" width="100%" height="800"></iframe>

#### What I Learned

The course was a pretty good amount of work but I'm glad to have applied some Python and stats to physical systems. I learned:
- to produce meaningful data analysis and report content rapidly in Jupyter Notebooks,
- how the [Anaconda distribution](https://www.anaconda.com/products/individual) (and its `conda` CLI) may fit into ones scientific workflow, and
- to have a think of the fundamentals before jumping in to code something, as fun of a rabbit hole it may be.

As always, if you have any questions feel free to email or tweet me @_anthonycarbone.

**Links to PDFs if you couldn't see them above:**
- [GRS Report](/assets/projects/phys_labs/GRS_ACarbone_v2.pdf)
- [CE Report](/assets/projects/phys_labs/CE_ACarbone.pdf)
- [Ising Report](/assets/projects/phys_labs/Ising_Model_ACarbone_v2.pdf)
- [CP Report](/assets/projects/phys_labs/CP_ACarbone.pdf)