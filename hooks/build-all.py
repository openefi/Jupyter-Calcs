import subprocess

def main():
    subprocess.call('env')
    bashCommand = "bash ./make.sh"
    bashCommand2 = "git add *.so"
    process = subprocess.Popen(bashCommand.split(), stdout=subprocess.PIPE)
    process2 = subprocess.Popen(bashCommand2.split(), stdout=subprocess.PIPE)

    print(process.communicate())
    print(process2.communicate())
    return 1

