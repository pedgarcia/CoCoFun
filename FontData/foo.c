Processing 0.png
8 x 8
 ###### 
########
###  ###
########
########
###  ###
########
 ###### 
Processing 1.png
4 x 8
### 
####
 ###
 ###
 ###
 ###
 ###
 ###
Processing 2.png
8 x 8
####### 
########
     ###
 #######
####### 
###     
########
########
Processing 3.png
8 x 8
####### 
########
     ###
   #### 
   #### 
     ###
########
####### 
Processing 4.png
8 x 8
###  ###
###  ###
###  ###
########
 #######
     ###
     ###
     ###
Processing 5.png
8 x 8
########
########
###     
####### 
 #######
     ###
########
####### 
Processing 6.png
8 x 8
 #######
########
###     
####### 
########
###  ###
########
 ###### 
Processing 7.png
8 x 8
####### 
########
     ###
     ###
     ###
     ###
     ###
     ###
Processing 8.png
8 x 8
 ###### 
########
###  ###
 ###### 
 ###### 
###  ###
########
 ###### 
Processing 9.png
8 x 8
 ###### 
########
###  ###
########
 #######
     ###
########
####### 
Processing a.png
8 x 8
 ###### 
########
###  ###
########
########
###  ###
###  ###
###  ###
Processing b.png
8 x 8
####### 
########
###  ###
####### 
####### 
###  ###
########
####### 
Processing c.png
8 x 8
 #######
########
###     
###     
###     
###     
########
 #######
Processing d.png
8 x 8
####### 
########
###  ###
###  ###
###  ###
###  ###
########
####### 
Processing e.png
8 x 8
 #######
########
###     
######  
######  
###     
########
 #######
Processing f.png
8 x 8
 #######
########
###     
######  
######  
###     
###     
###     
Processing g.png
8 x 8
 #######
########
###     
### ####
### ####
###  ###
########
 #######
Processing h.png
8 x 8
###  ###
###  ###
###  ###
########
########
###  ###
###  ###
###  ###
Processing i.png
4 x 8
###
###
###
###
###
###
###
###
Processing j.png
8 x 8
     ###
     ###
     ###
     ###
     ###
     ###
########
####### 
Processing k.png
8 x 8
###  ###
###  ###
###  ###
####### 
####### 
###  ###
###  ###
###  ###
Processing l.png
8 x 8
###     
###     
###     
###     
###     
###     
########
########
Processing m.png
12 x 8
########### 
############
###  ### ###
###  ### ###
###  ### ###
###  ### ###
###  ### ###
###  ### ###
Processing n.png
8 x 8
####### 
########
###  ###
###  ###
###  ###
###  ###
###  ###
###  ###
Processing o.png
8 x 8
 ###### 
########
###  ###
###  ###
###  ###
###  ###
########
 ###### 
Processing p.png
8 x 8
####### 
########
###  ###
########
####### 
###     
###     
###     
Processing q.png
8 x 8
 ###### 
########
###  ###
###  ###
###  ###
###  ###
########
 ###### 
Processing r.png
8 x 8
####### 
########
###  ###
####### 
####### 
###  ###
###  ###
###  ###
Processing s.png
8 x 8
 #######
########
###     
####### 
 #######
     ###
########
####### 
Processing t.png
8 x 8
########
########
   ###  
   ###  
   ###  
   ###  
   ###  
   ###  
Processing u.png
8 x 8
###  ###
###  ###
###  ###
###  ###
###  ###
###  ###
########
 ###### 
Processing v.png
8 x 8
###  ###
###  ###
###  ###
###  ###
###  ###
###  ###
########
####### 
Processing w.png
12 x 8
###  ### ###
###  ### ###
###  ### ###
###  ### ###
###  ### ###
###  ### ###
############
########### 
Processing x.png
8 x 8
###  ###
###  ###
###  ###
 ###### 
 ###### 
###  ###
###  ###
###  ###
Processing y.png
8 x 8
###  ###
###  ###
###  ###
########
 ###### 
   ###  
   ###  
   ###  
Processing z.png
8 x 8
########
########
     ###
 #######
####### 
###     
########
########
// Index into fontData. Maps chars 32->127 to offsets into fontData.
// -1 imples a glyph is not defined for that character.
char fontIndex[] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,10,20,30,40,50,60,70,80,90,100,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,110,120,130,140,150,160,170,180,190,200,210,220,238,248,258,268,278,288,298,308,318,328,346,356,366,376,-1,-1,-1,-1,-1};


// Each glyph is preceded by 2 bytes that define the rows and columns per font
// The remaining bytes define 1-bit data organized as bytes for each glyph
char fontData[] = {

// Font Data for 0
8, 8
,0x7e 
,0xff 
,0xe7 
,0xff 
,0xff 
,0xe7 
,0xff 
,0x7e 
,

// Font Data for 1
4, 8
,0xe0 
,0xf0 
,0x70 
,0x70 
,0x70 
,0x70 
,0x70 
,0x70 
,

// Font Data for 2
8, 8
,0xfe 
,0xff 
,0x7 
,0x7f 
,0xfe 
,0xe0 
,0xff 
,0xff 
,

// Font Data for 3
8, 8
,0xfe 
,0xff 
,0x7 
,0x1e 
,0x1e 
,0x7 
,0xff 
,0xfe 
,

// Font Data for 4
8, 8
,0xe7 
,0xe7 
,0xe7 
,0xff 
,0x7f 
,0x7 
,0x7 
,0x7 
,

// Font Data for 5
8, 8
,0xff 
,0xff 
,0xe0 
,0xfe 
,0x7f 
,0x7 
,0xff 
,0xfe 
,

// Font Data for 6
8, 8
,0x7f 
,0xff 
,0xe0 
,0xfe 
,0xff 
,0xe7 
,0xff 
,0x7e 
,

// Font Data for 7
8, 8
,0xfe 
,0xff 
,0x7 
,0x7 
,0x7 
,0x7 
,0x7 
,0x7 
,

// Font Data for 8
8, 8
,0x7e 
,0xff 
,0xe7 
,0x7e 
,0x7e 
,0xe7 
,0xff 
,0x7e 
,

// Font Data for 9
8, 8
,0x7e 
,0xff 
,0xe7 
,0xff 
,0x7f 
,0x7 
,0xff 
,0xfe 
,

// Font Data for a
8, 8
,0x7e 
,0xff 
,0xe7 
,0xff 
,0xff 
,0xe7 
,0xe7 
,0xe7 
,

// Font Data for b
8, 8
,0xfe 
,0xff 
,0xe7 
,0xfe 
,0xfe 
,0xe7 
,0xff 
,0xfe 
,

// Font Data for c
8, 8
,0x7f 
,0xff 
,0xe0 
,0xe0 
,0xe0 
,0xe0 
,0xff 
,0x7f 
,

// Font Data for d
8, 8
,0xfe 
,0xff 
,0xe7 
,0xe7 
,0xe7 
,0xe7 
,0xff 
,0xfe 
,

// Font Data for e
8, 8
,0x7f 
,0xff 
,0xe0 
,0xfc 
,0xfc 
,0xe0 
,0xff 
,0x7f 
,

// Font Data for f
8, 8
,0x7f 
,0xff 
,0xe0 
,0xfc 
,0xfc 
,0xe0 
,0xe0 
,0xe0 
,

// Font Data for g
8, 8
,0x7f 
,0xff 
,0xe0 
,0xef 
,0xef 
,0xe7 
,0xff 
,0x7f 
,

// Font Data for h
8, 8
,0xe7 
,0xe7 
,0xe7 
,0xff 
,0xff 
,0xe7 
,0xe7 
,0xe7 
,

// Font Data for i
4, 8
,0x70 
,0x70 
,0x70 
,0x70 
,0x70 
,0x70 
,0x70 
,0x70 
,

// Font Data for j
8, 8
,0x7 
,0x7 
,0x7 
,0x7 
,0x7 
,0x7 
,0xff 
,0xfe 
,

// Font Data for k
8, 8
,0xe7 
,0xe7 
,0xe7 
,0xfe 
,0xfe 
,0xe7 
,0xe7 
,0xe7 
,

// Font Data for l
8, 8
,0xe0 
,0xe0 
,0xe0 
,0xe0 
,0xe0 
,0xe0 
,0xff 
,0xff 
,

// Font Data for m
12, 8
,0xff ,0xe0 
,0xff ,0xf0 
,0xe7 ,0x70 
,0xe7 ,0x70 
,0xe7 ,0x70 
,0xe7 ,0x70 
,0xe7 ,0x70 
,0xe7 ,0x70 
,

// Font Data for n
8, 8
,0xfe 
,0xff 
,0xe7 
,0xe7 
,0xe7 
,0xe7 
,0xe7 
,0xe7 
,

// Font Data for o
8, 8
,0x7e 
,0xff 
,0xe7 
,0xe7 
,0xe7 
,0xe7 
,0xff 
,0x7e 
,

// Font Data for p
8, 8
,0xfe 
,0xff 
,0xe7 
,0xff 
,0xfe 
,0xe0 
,0xe0 
,0xe0 
,

// Font Data for q
8, 8
,0x7e 
,0xff 
,0xe7 
,0xe7 
,0xe7 
,0xe7 
,0xff 
,0x7e 
,

// Font Data for r
8, 8
,0xfe 
,0xff 
,0xe7 
,0xfe 
,0xfe 
,0xe7 
,0xe7 
,0xe7 
,

// Font Data for s
8, 8
,0x7f 
,0xff 
,0xe0 
,0xfe 
,0x7f 
,0x7 
,0xff 
,0xfe 
,

// Font Data for t
8, 8
,0xff 
,0xff 
,0x1c 
,0x1c 
,0x1c 
,0x1c 
,0x1c 
,0x1c 
,

// Font Data for u
8, 8
,0xe7 
,0xe7 
,0xe7 
,0xe7 
,0xe7 
,0xe7 
,0xff 
,0x7e 
,

// Font Data for v
8, 8
,0xe7 
,0xe7 
,0xe7 
,0xe7 
,0xe7 
,0xe7 
,0xff 
,0xfe 
,

// Font Data for w
12, 8
,0xe7 ,0x70 
,0xe7 ,0x70 
,0xe7 ,0x70 
,0xe7 ,0x70 
,0xe7 ,0x70 
,0xe7 ,0x70 
,0xff ,0xf0 
,0xff ,0xe0 
,

// Font Data for x
8, 8
,0xe7 
,0xe7 
,0xe7 
,0x7e 
,0x7e 
,0xe7 
,0xe7 
,0xe7 
,

// Font Data for y
8, 8
,0xe7 
,0xe7 
,0xe7 
,0xff 
,0x7e 
,0x1c 
,0x1c 
,0x1c 
,

// Font Data for z
8, 8
,0xff 
,0xff 
,0x7 
,0x7f 
,0xfe 
,0xe0 
,0xff 
,0xff 
};
