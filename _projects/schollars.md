---
title: "UNSW CSESoc Annual Hackathon 2021"
layout: single
excerpt: "Schollars, a one-stop scholarship search and crowdfunding service to connect donors directly with students."
header:
  image: /assets/projects/schollars/header.png
  teaser: /assets/projects/schollars/presentation_title.png
classes: wide
---

### Schollars, a one-stop scholarship search and crowdfunding service to connect donors directly with students.

#### The Background
On the 17th-18th July, 2021, I entered the UNSW CSESoc Annual Hackathon in a team with three other friends, mostly out of curiosity for what a hackathon would be like, and for how well we'd go.

Our diverse team was made up of a first year Comp Sci student, second year Comp Sci student, a Masters of IT student, and me, a (then) Aerospace Engineering and Physics student. Out of the team, only the Masters student had hackathon experience.

Regardless of our experience, we were keen to put some energy into the challenge and see what would result.

#### The Problem
So now to introduce the problem. At 11am on the first day (the Saturday), the organisers briefed us on the rules, and most importantly the theme: **Education**.

The problem statement read:

![Problem Statement](/assets/projects/schollars/problem_statement.png)

Our challenge was now set: come up with an idea and prototype addressing the problem statement, and give a 3 minute pitch with 2 minutes of Q&A.

So with the task set, we got to work coming up with a hackathon-winning idea.

#### The Idea
This next phase we spent as a group around a whiteboard discussing what innovative ideas we could successfully protoype and pitch to our judges.

Ideas included:
- A service connecting remote-learning students with local study/tutorial groups, to form an effective hybrid educational experience for students who haven't got the opportunity to relocate for in-person education
- A math Optical Character Recognition (OCR) service that helps students with their math homework by recognising and interacting directly with what they've wrote down on paper or in digital ink

Ultimately however we went for this: recognising the insanity of how thinly spread out scholarship information is on the web, and the hurdles that presents for the most in-need students, we would build a one-stop service for scholarship searching, collating all scholarships, from institutions to private donors.

As we discussed the idea further, we thought of more ways to enhance the service:
- Instant notifications of posted scholarships to eligible students
- Make it an attractive platform for institutions to publish scholarships *directly* to, capturing a greater target audience (and bypassing the burdensome error-prone web-scraping tasks)
- Leverage the scale and generosity of small-time scholarship donors to provide crowdfunded scholarships with effective target demographic capture
- Enable in-need students to request crowdfunded scholarships
- Automatic application tools for students

We named this idea of ours *Schollars*.

![Schollars Logo](/assets/projects/schollars/schollars_logo.png){: .align-center}

#### The Prototype
Up until now we felt confident about where we going, but the realities of general inexperience in web dev came to deliver a chilling message: how to build the damn thing, and to do so in 24hrs.

We explored all facets of the build individually, frontend, backend, data. Particularly we found the frontend difficult, and how we could use existing templates and technologies to do all the heavy lifting for us.

We had grand plans to make a complete backend, utilise a React template, and leverage an existing search API, to make a functional and beautiful demo.

We soon realised though that this would remain a grand plan, and upon a quick mentor session with one of the judges, recalculated to make something that at least somewhat works, to truly hack something together.

So one of our team members got to collecting scholarship data for the demo, another researching the general system of scholarships to bolster our business idea pitch, another hacking together a rudimentary Flask backend, and myself researching and implementing the search service.

The search service we settled on was [Algolia's React InstantSearch](https://www.algolia.com/doc/guides/building-search-ui/what-is-instantsearch/react/) which seemed to provide the easiest set-up, and the possibility of just implementing it as a React component in an existing React template.

I had major troubles getting it working in the React template, so resorted to repurposing the demo they provided in the docs. This is what is seen in the pitch...

#### The Pitch
With the deadline fast approaching, and the scratchy but functional prototype, we whipped together some slides and recorded our pitch video submission:

{% include video id="0h4EioAO6ug" provider="youtube" %}

#### The Result
Despite how disappointed we were about our prototype not living up to our grand vision, the judges were super-impressed with idea, the pitch, and the demo, and it was great to hear them appreciate our past 24 hours of work, especially given our limited experience.

We accepted after sizing up the other pitches that we were certainly not in for any podium prize, but we were in for a surprise as at the awards ceremony we were awarded Prospa's Beginners Prize which came with $150 prize money.

So we were over the moon with that result.

#### What I Learnt
It was a great experience working on the challenge together with the team, and certainly had some lessons to take away:
1. How to hack together a prototype under timed pressure, and accepting it's likely not going to be close to your grand vision
2. In a driven team, you'll really surprise yourself what you can achieve
3. I **need** to learn React

As always, if you have any questions feel free to [email](mailto:anthonydavidcarbone@gmail.com) or tweet me @_anthonycarbone.
