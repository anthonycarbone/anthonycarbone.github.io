---
title: "Investigating Webjpip.js Library for Spectral Data Cubes - ICRAR Summer Internship 2020/21"
layout: single
excerpt: "Investigating the Webjpip.js library for web visualisation of extremely large radio astronomy images."
header:
  image: /assets/projects/icrar/architecture.jpg
  teaser: /assets/projects/icrar/architecture_todo.jpg
---
### Investigating the Webjpip.js library for web visualisation of extremely large radio astronomy images.
In the summer of 2020/21, I was fortunate to have been offered a summer internship at the [International Centre for Radio Astronomy (ICRAR)](https://www.icrar.org), specifically at their UWA node.

My project, under the supervision of Dr Slava Kitaeff - CTO of the Australian SKA Regional Centre, was to investigate applying the [webjpip.js](https://github.com/MaMazav/webjpip.js?files=1) library to radio astronomy spectral data cubes.

This was following on from Dr Kitaeff's investigation of using the JPEG2000 image standard for transportation and visualisation of spectral data cubes.

#### The Project
The significance of this technology is particularly promising for the in-construction [SKA telescope](https://en.wikipedia.org/wiki/Square_Kilometre_Array) which is expected to produce spectral data cubes in the tens or hundreds of TBs.

To make the most of these remarkable but extremely large images, remotely accessing and exploring them efficiently is paramount.

Current formats such as FITS, CASA Image Tables, and LOFAR HDF5, all have varying degrees of accessibility, portability, and efficiency for remotely viewing large images. The JPEG2000 standard on the other hand offers great benefits in such areas with notable flexibility owing to the Part 2 extensions of the standard.

In investigating potential existing technology for such a web-based application, I explored the features of the [webjpip.js](https://github.com/MaMazav/webjpip.js?files=1) library and made recommendations to [AusSRC](https://aussrc.org) to adapt it for use with spectral data cubes.

[Find here the actual recommendations I made to AusSRC.](/assets/projects/icrar/final_presentation.pdf)

Also watch my Final Presentation on the project aim, challenges, successes, and recommendations.

{% include video id="b8XaUvykN-M" provider="youtube" %}

#### What I Learnt
Going in to the project I had basically no web development experience (or software development experience for that matter).

Leading up to the project I navigated my way through a number of Javascript and HTML tutorials to become familiar with the language and basic development philosophy.

I proceeded to become familiar with the JPEG2000 standard, and JPIP (the standards remote access protocol), and explored how webjpip.js conformed to this standard.

Playing around with the original developers demos, I found a number of issues that prevented using the library with the spectral data cubes, these I included in my final presentation and AusSRC recommendations (see above).

Overall, I learnt a great deal about how code is executed in the browser, internet protocols, proxies, the separation between front-end and back-end, and most importantly the techniques to come across some very foreign technologies and rapidly find my way around understanding and applying them.

As always, if you have any questions feel free to [email](mailto:anthonydavidcarbone@gmail.com) or tweet me @_anthonycarbone.