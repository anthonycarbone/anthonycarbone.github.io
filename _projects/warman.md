---
title: "Autonomous Arduino Vehicle 2 - UNSW Warman"
layout: single
excerpt: "Designing and building (another) autonomous vehicle for UNSW's internal Warman competition."
header:
  image: /assets/projects/warman/down.jpg
  teaser: /assets/projects/warman/down.jpg
---

### Designing and building (another) autonomous vehicle for UNSW's internal Warman competition.

The [ARDET project]({% link _projects/ardet.md %}) acted as a qualifier for the UNSW's internal Warman Design and Build Competition, which would decide which team would then go on to represent the uni at the international event held in Sydney.

The challenge was similar to the ARDET project, albeit more difficult geometry wise (see the track below). In an attempt to achieve a far greater time score, our design was more complicated then ARDET.

![Warman track specs]({{ site.url }}{{ site.baseurl }}/assets/projects/warman/track.png)

Unfortunately we didn't take all too many photos and videos of the vehicle, but below you can see the double-actuated main bucket driven by two extremely powerful servos on the chassis, and two medium power servos halfway up the arms.

![Warman Vehicle with arm extended]({{ site.url }}{{ site.baseurl }}/assets/projects/warman/up.jpg){: .align-center}

Again, I was responsible for the electrical design, which followed a similar pattern to the ARDET project. This time I incorporated [buck convertors](https://en.wikipedia.org/wiki/Buck_converter) to power the 7V servos while benefitting from the favourable 11.1V LiPO discharge rate. I also chose to forego the bothersome Veroboard and soldered all connecting wires (including primary buses) to one another directly.

Unfortunately in the end the design was too complicated to consistently achieve its task and we placed second in the competition of two, not going on to compete in the international competition.

The primary powerful servos also found it difficult to support the bucket at such a moment arm, and resulted in us having to bypass a fried servo chip last minute using the potentiometer to create a virtual servo chip.

#### What I Learned
- The KISS principle is just as important as people say it is
- Even light masses at large moment arms are to be dealt with great caution
- LiPO batteries are the greatest things on Earth

As always, if you have any questions feel free to [email](mailto:anthonydavidcarbone@gmail.com) or tweet me @_anthonycarbone.