realmake:
	cd src; make
	cd test; make
	mv src/app bin
	mv test/tester bin
