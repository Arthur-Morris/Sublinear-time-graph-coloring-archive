# Sublinear-time-graph-coloring-archive
i wrote this code in the summer of 2019 for my honours project at carletion university.it is based primarly on the paper "Sublinear Algorithms for (Δ+1) Vertex Coloring" by Sepehr Assadi, Yu Chen, Sanjeev Khanna. avalabe at https://arxiv.org/abs/1807.08886, see the file "Arthur Morris Honours Project Final.pdf" for the full write up. 

Overview of the algorithm (from midterm report)

The algorithm works as follows:

     “After sampling O (logn) colors for each vertex randomly, the total number of monochromatic edges is only O (n·log2(n))with high probability …, by computing                     a proper coloring of G using only these O(n·log2(n)) edges … we obtain a (∆ + 1) coloring of G.”  
     
     (Assadi, Chen, Khanna, 2018: section 1.1)
Or more formally: 

     “ColoringAlgorithm (G,∆): A meta-algorithm for finding a (∆+1)-coloring in a graph G(V, E) with maximum degree ∆.
     
     1. Sample Θ (log n) colors L(v) uniformly at random for each vertex v ∈ V(as in Theorem1).
     
     2. Define, for each color c ∈ [∆ + 1], a set χc ⊆ V where v ∈ χc iff c ∈ L(v).
     
     3. Define E conflict as the set of all edges (u, v) where both u, v ∈ χc for some c ∈ [∆ + 1].
     
     4. Construct the conflict graph G conflict (V, E conflict).
     
     5. Find a proper list-coloring of G conflict (V, E conflict) with L(v) being the color list of vertex v ∈ V.”
     
     (Assadi, Chen, Khanna, 2018: section 4)

there are signifagent problems with this code, i am in the prosses of evaluating this code and reimplementing this algorithim in the repo "Sublinear-time-graph-coloring" this repo is an arcive of my honours project, it is not maintained. 
 
file list explanation: 
.gitignore                              - ignore

Arthur Morris Honours Project Final.pdf - the report itself

README.md                               - this file

TheGreedyAlgorithm.cpp                  - an implementation of the currant state of the art greedy algorithm

ackAlgorithm.cpp                        - an implementation of the algorithim exactly as described in the paper

myAlgorithm.cpp                         - an implementation of the algorithim with my alterations

random.cpp                              - a random test case generator

Comp 4905 project midterm report.pdf    - the midterm report
