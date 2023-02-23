Import("env")

def on_upload(source, target, env):
    print("custom_upload.py ...")
    mountPoint = env['UPLOAD_FLAGS'][0] # path
    fn = "/"
    if (len(env['UPLOAD_FLAGS']) > 1):
        fn += env['UPLOAD_FLAGS'][1] # filename
    target = str(target[0])
    firmware_path = str(source[0])
    if (target == "upload"):
        if (0 == env.Execute("cp {src} {dest}".format(src=firmware_path,dest=mountPoint+fn))):
            env.Execute("diskutil unmount {mountPoint}".format(mountPoint=mountPoint))
        else:
            print("Error trying to copy {src} to {dest}.".format(src=firmware_path,dest=mountPoint+fn))

env.Replace(UPLOADCMD=on_upload)

'''
Add custom_upload.py to platformio.ini:
extra_scripts      =
  pre:buildroot/share/PlatformIO/scripts/configuration.py
  ...
  ...
  post:custom_upload.py



Edit ini/stm32g0.ini:

[env:STM32G0B1RE_btt]
...
...
upload_protocol   = custom
upload_flags      =
  /Volumes/ENDER
  FIRMWARE.BIN

'''