;===========================================================================================================================================================

[Background]
Meter=Shape
Shape=Rectangle 0,0,(#Scale#*170),(#Scale#*170),(#Corner#*15),(#Corner#*15) | StrokeWidth 0 | Fill Color #BackgroundColor#,#BackgroundOpacity#

[WShape]
Meter=Shape
MeterStyle=KeyB:S
X=(170/2*#Scale#)
Y=((50/2+#KeyPadding#)*#Scale#)

[WLabel]
Meter=String
MeterStyle=Key#RGB#:S
Text=W

[AShape]
Meter=Shape
MeterStyle=KeyB:S
X=((50/2+#KeyPadding#)*#Scale#)
Y=((50+#KeyPadding#)*#Scale#)r

[ALabel]
Meter=String
MeterStyle=Key#RGB#:S
Text=A

[SShape]
Meter=Shape
MeterStyle=KeyB:S
X=((50+#KeyPadding#)*#Scale#)r
Y=r

[SLabel]
Meter=String
MeterStyle=Key#RGB#:S
Text=S

[DShape]
Meter=Shape
MeterStyle=KeyB:S
X=((50+#KeyPadding#)*#Scale#)r
Y=r

[DLabel]
Meter=String
MeterStyle=Key#RGB#:S
Text=D

[SpaceShape]
Meter=Shape
MeterStyle=KeyB:S | Key3Style
X=(170/2*#Scale#)
Y=((50/2+50/4+#KeyPadding#)*#Scale#)r

[SpaceLabel]
Meter=String
MeterStyle=Key#RGB#:S
Text=---
