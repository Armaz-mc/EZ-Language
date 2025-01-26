import os
import subprocess

def clean_build():
    if os.path.exists('build'):
        subprocess.run(['rm', '-rf', 'build'])
    os.makedirs('build')

def run_cmake():
    subprocess.run(['cmake', '..'], cwd='build')

def run_make():
    subprocess.run(['make'], cwd='build')

if __name__ == "__main__":
    clean_build()
    run_cmake()
    run_make()