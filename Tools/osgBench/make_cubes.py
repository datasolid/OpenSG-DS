from osgbench import *
t=TestWindow()
t.setSize(300,300)
t.open()

test=Test()
test.setWindow(t)
test.setHeadlight(1)
test.setNFrames(100)

nc=1

res=64
scene=Group()
for i in range(-nc,nc):
    for j in range(-nc,nc):
        for k in range(-nc,nc):
            geo=makeBox(1.4,1.4,1.4,res,res,res)
            geo.setDlistCache(0)
            geo.translate(i*2, j*2, k*2)
            scene.addChild(geo)
addRef(scene)

scene.save("few_high_cubes.osb")

test=Test()
test.setWindow(t)
test.setScene(scene)
test.setHeadlight(1)
test.setNFrames(100)

test.clear()
test.addFov(90)
test.makeOrbit(0,1,0)

print "%d res" % res
test.run()
