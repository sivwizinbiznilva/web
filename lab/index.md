title = 'Lab Log'

# Ryan Silva's Lab Log

**Suggestion?  The source behind this site is available on Github: [file a bug report or send me a pull request!](https://github.com/sivwizinbiznilva/web/issues)**

##[**Master Meeting Slides**](http://slides.ryanjsilva.com/slides/update)
| Test | Hypothesis | Status | Projection |
| :-: | :-: | :-: | :-: | :-:|
| Cleaning protocol using reconditioning solution | Solution will kill bacteria | 2x Unsuccessful tests | Reject hypothesis |
| Cleaning protocol using bleach | Bleach will kill bacteria | 6x Successful tests | Accept hypothesis |
| DVL1 | pH $\unicode{8733}$ $c(Lactose)^{-1}$ | 1x Successful test | Accept hypothesis | 
| pConst - LacZ | pH $\unicode{8733}$ $c(Lactose)^{-1}$ | 2x unsuccessful tests | Regrow and test by Friday | 
| pBad - LacZ | pH$\unicode{8595}$ inducible by Ara | Device built and sequenced (untested) | Initial test by next meeting |
| pTet - LacZ | pH$\unicode{8595}$ inducible by aTc | Device built and sequenced (untested) | Initial test by next meeting | 
| pRhl - YFP | Express YFP induced by RhlI | Voigt plasmids plated in wetlab | Initial test by next meeting |
| pLac - LacZ | pH$\unicode{8595}$ inducible by Lactose | Awaiting primers and cloning of pLac promoter | Initial test in one month |

| Month-Year | Meeting Slides | Notes | Milestones | Meeting Notes|
| :-: | :-: | :-: | :-: | :-: |
| April 2014 | [The Idea](http://slides.ryanjsilva.com/slides/idea) | [April Notes](/notes/April2014.html) | - | - |
| May 2014 | - | [May Notes](/notes/May2014.html) | - | - |
| June 2014 | [The Plan](http://slides.ryanjsilva.com/slides/plan) | [June Notes](/notes/June2014.html)| - | - |
| August 2014 | [Why?](http://slides.ryanjsilva.com/slides/why) | [August Notes](/notes/August2014.html) | - | - |
| September 2014 | [TweeColi](http://slides.ryanjsilva.com/slides/tweecoli) | [September Notes](/notes/September2014.html) | Integrate pH sensor with Yun and RPi | [22 Sept 2014](/notes/meeting/22Sept2014.html) |
| October 2014 | - | [October Notes](/notes/Oct2014.html) | -  | [6 Oct 2014](/notes/meeting/6Oct2014.html), [20 Oct 2014](/notes/meeting/20Oct2014.html) |
| November 2014 | - | [November Notes](/notes/Nov2014.html) | - | [3 Nov 2014](/notes/meeting/3Nov2014.html), [17 Nov 2014](/notes/meeting/17Nov2014.html) |

##Hardware Platform Capabilities and Limitations
| Platform | Capability | Limitation |
| :-: | :-: | :-:|
| Arduino | - Analog Inputs| - Difficult Internet connection |
| RPi | | - GPIO |
| FPGA | | |

##[EC551 Slides](http://slides.ryanjsilva.com/slides/EC551)

##Easy Driver Equations

$$
Itripmax=V_{ref}/(8*Rs)
$$

Big Easy Driver Rs = .11ohms [source](http://www.schmalzhaus.com/BigEasyDriver/BigEasyDriver_UserManal.pdf)
Easy Driver Rs = 0.75ohms [source](https://forum.sparkfun.com/viewtopic.php?f=14&t=39610)
Pololu with Nema11 ref V = 382.857mV

$$
DesiredVref=I_{max}/(0.7*2.5)
$$

[Calculate Max Stepper Motor Speed](http://www.daycounter.com/Calculators/Stepper-Motor-Calculator.phtml)
[Nema 17 Datasheet](http://www.fasttobuy.com/42hs4013a4-sumtor-twophase-stepper-motor-42byg-new_p24104.html)

##DIY Automated Valve Controller
[Expensive, Complicated, Precise (pressure regulated)](https://sites.google.com/site/rafaelsmicrofluidicspage/valve-controllers)

# June 2015
- There are many open-source microfluidic solutions that exist right now
  - I am not trying to make another one
- The problem with open source solutions is that there's no way to know if they're any good until you've invested a lot of time and energy into building it
  - "Linux is free if you value your time at zero"
  - I will do the work for you and present the results in a useful way
- I am building a tool that aggregates many open source solutions, vets them in a meaningful way, and documents them according to a standardized
- Entire papers have been written that try to help scientists navigate the open-source domain
  - "Getting started with open-hardware: Development and control of microfluidic devices" Costa et al Jul 2014 Electrophoresis

# July 2015
- Use unibody design to make a transposer
  1. Use tubing as channels (i.e. don't cast channels)
  2. Use NEMA motors attached directly to a 3D printed end to make two "roller"-type peristaltic pumps...maybe using skateboard bearings?
  3. Use MIT syringe pump or servo attached to some blunt end to create a valve mechanism
    - Essentially apply pressure on top of the tubing to squeeze it shut
  4. Create a 3D chassis to hold the above experiment

# November 2015
- Calculate burst frequency (RPM) for given channel dimensions using water
$$
RPM=\sqrt{\frac{\gamma\sin\theta}{\pi^2\rho\Delta R\overline{R}D_h^n}}*60
$$

where

$\gamma$ = 0.072 N/m (ref)[/papers/bagwe2011.pdf]
$\theta$ = 90$\unicode{176}$ 
$\rho$=1000 kg/m^3
$\Delta R$=R2-R1
$\overline{R}=\frac{R2+R1}{2}$
$D_h=\frac{4A}{C}=\frac{4(lw)}{2(l+w)}=\frac{2(lw)}{l+w}$

  - C = contact line length (perimeter of channel)

n = 1.14 for rectangular cross-sections

# Draper Visit 10 Nov 2015

- SCENT
  - Standoff WMD detection
  - Low power / minimal auxiliary components
  - Small scale (10cm)
  - RFID??
  - 

- Crossover
  - Accessible uF imply either minimal or reproducible auxiliary components
  - Controllable fluid motion via capillary force in hydrophobic materials
    - Hydrophilic surface treatments wear off after ~30min - 24hrs
  - Currently exploring in the context of accessible centrifugal uF platforms
    - Hydrophilic surface treatments (possibly) raise barrier 
  - Low power silicon nanowire pH sensing
   
# Jan 2016
- Pump wiring
  - Beware motor of polarities when connecting to dissimilar motor driver chips!

# Mar 2016
##Synthetic Biology and the Emergence of Soft Engineering
Much has been said about the purported reproducibility crisis currently plaguing the field of psychology. The questions raised about the rigorousness of research in psychology have also been leveled upon [data analysis in the scientific community as a whole](http://onlinelibrary.wiley.com/doi/10.1111/j.1740-9713.2015.00827.x/pdf). Replicability and reproducibility are core tenants of the scientific method. [It can be argued that](http://pps.sagepub.com/content/10/6/886.full) scientific research lacking these two characteristics is not, by definition, science at all. If engineering [is defined as the application of science](http://www.britannica.com/technology/engineering), what, then, does it say for a discipline to claim to be engineering while applying principles that do not seem to adhere to the scientific method? This may be an interesting data point in the analysis of a field's scientific value: can its principles be applied using the engineering method?

- Specification is important in reproducing the results an experiment
- Over-specification can often nullify, or prohibitively limit, the application value of a scientific principle (i.e., it may be good science in that it's replicable but it is probably not useful to an engineer, which is where I think synbio lies)
  - "[I don't care that [cells] in your lab, when the temperature is exactly 69 degrees, and it is high noon on the fifth Wednesday of the month, that such and such will happen](http://www.wired.com/2016/03/psychology-crisis-whether-crisis/)"


