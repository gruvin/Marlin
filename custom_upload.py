Import("env")

def on_upload(source, target, env):
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