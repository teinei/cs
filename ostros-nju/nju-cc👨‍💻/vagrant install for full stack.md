# Resources for Pre-Requisites and Preparation

Udacity offers additional courses that cover the pre-requisites to this course:[
Object-Oriented Python](https://www.udacity.com/course/ud036)
[SQL](https://www.udacity.com/course/ud197)
[HTML & CSS](https://mena.udacity.com/course/intro-to-html-and-css--ud304)

# Installing Git, Virtual Box, and Vagrant

In this course, you'll use a virtual machine (VM) to run a web server and a web app that uses it. The VM is a Linux system that runs on top of your own machine. You can share files easily between your computer and the VM.

> **Note:** The VM for this course is the same as the one for the Relational Databases course. If you've completed that course, feel free to keep using the same VM; you do not need to reinstall it.

We're using the Vagrant software to configure and manage the VM. Here are the tools you'll need to install to get it running:

## Git

If you don't already have Git installed, download Git from [git-scm.com](https://git-scm.com/downloads). Install the version for your operating system.

On Windows, Git will provide you with a Unix-style terminal and shell (Git Bash). (On Mac or Linux systems you can use the regular terminal program.)

You will need Git to install the configuration for the VM. If you'd like to learn more about Git, take a look at [our course about Git and Github](https://www.udacity.com/course/how-to-use-git-and-github--ud775).

## VirtualBox

VirtualBox is the software that actually runs the VM. [You can download it from virtualbox.org, here](https://www.virtualbox.org/wiki/Download_Old_Builds_5_1). Install the *platform package* for your operating system. You do not need the extension pack or the SDK. You do not need to launch VirtualBox after installing it.

> **Note:** Currently (October 2017), the version of VirtualBox you should install is 5.1. Newer versions are not yet compatible with Vagrant.

> **Ubuntu 14.04 Note:** If you are running Ubuntu 14.04, install VirtualBox using the Ubuntu Software Center, not the virtualbox.org web site. Due to a [reported bug](https://ubuntuforums.org/showthread.php?t=2227131), installing VirtualBox from the site may uninstall other software you need.

## Vagrant

Vagrant is the software that configures the VM and lets you share files between your host computer and the VM's filesystem. [You can download it from vagrantup.com](https://www.vagrantup.com/downloads.html). Install the version for your operating system.

**Windows Note:** The Installer may ask you to grant network permissions to Vagrant or make a firewall exception. Be sure to allow this.



### Software Installations

##### If you already have these items installed, you are all set! No need to re-install.

Task List

- Install Git

  

- Install Virtual Box

  

- Install Vagrant

  



# Fetch the Source Code and VM Configuration

**Windows:** Use the Git Bash program (installed with Git) to get a Unix-style terminal.

**Other systems:** Use your favorite terminal program.

### Fork the starter repo

Log into your personal Github account, and fork the [fullstack-nanodegree-vm](https://github.com/udacity/fullstack-nanodegree-vm) so that you have a personal repo you can push to for backup. Later, you'll be able to use this repo for submitting your projects for review as well.

### Clone the remote to your local machine

From the terminal, run the following command (be sure to replace `<username>` with your GitHub username): `git clone http://github.com/<username>/fullstack-nanodegree-vm fullstack`

This will give you a directory named `fullstack` that is a clone of your remote `fullstack-nanodegree-vm` repository.

## Run the virtual machine!

Using the terminal, **c**hange **d**irectory using the command `cd fullstack/vagrant`, then type `vagrant up` to launch your virtual machine.

Once it is up and running, type `vagrant ssh`. This will log your terminal into the virtual machine, and you'll get a Linux shell prompt. When you want to log out, type `exit` at the shell prompt. To turn the virtual machine off (without deleting anything), type `vagrant halt`. If you do this, you'll need to run `vagrant up` again before you can log into it.

Now that you have Vagrant up and running type `vagrant ssh` to log into your virtual machine (VM). Change directory to the /vagrant directory by typing `cd /vagrant`. This will take you to the shared folder between your virtual machine and host machine.

### Sharing files between the vagrant virtual machine and your home machine.

Be sure to change to the `/vagrant` directory by typing `cd /vagrant` before creating new files or pasting files that you want to be shared between your host machine and the VM.



### Getting the Vagrant VM Up and Running