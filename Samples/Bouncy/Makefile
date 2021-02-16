all:
	@gradle build -p Android/

install:
	@adb uninstall com.Mojoc.Samples.Bouncy
	@adb install Android/app/build/outputs/apk/debug/app-debug.apk
	@adb shell am start -n com.Mojoc.Samples.Bouncy/.GameActivity