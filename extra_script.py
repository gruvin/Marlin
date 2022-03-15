Import("env")

def on_upload(source, target, env):
    target = str(target[0])
    firmware_path = str(source[0])
    if (target == "upload"):
        cmd = "cp {src} /Volumes/ENDER && diskutil unmount /Volumes/ENDER".format(src=firmware_path)
        env.Execute(cmd)

env.Replace(UPLOADCMD=on_upload)