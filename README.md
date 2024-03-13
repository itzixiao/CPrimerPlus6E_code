# CPrimerPlus6E_code
C Primer Plus（第六版中文版） 原书配套代码(包含编程练习答案)

### Directory
```
    CprimerPlus6E_code
    |---bin
    |---doc
    |---solution
    |---src
    |---XB
```

# 1.Solution Git Large File 
remote: error: Trace: e5b21b4ed1dd361b19ffbc677b66a3ff38dbccbcc0c53973958a35490cacdd5c
remote: error: See https://gh.io/lfs for more information.
remote: error: File doc/C Primer Plus中文版附录.pdf is 161.21 MB; this exceeds GitHub's file size limit of 100.00 MB
remote: error: GH001: Large files detected. You may want to try Git Large File Storage - https://git-lfs.github.com.

1.Download and install the Git command line extension. Once downloaded and installed, set up Git LFS for your user account by running:
```
git lfs install
```
You only need to run this once per user account.

2.In each Git repository where you want to use Git LFS, select the file types you'd like Git LFS to manage (or directly edit your .gitattributes). You can configure additional file extensions at anytime.
```
git lfs track '.\doc\C Primer Plus Chinese appendix.pdf'
```
Now make sure .gitattributes is tracked:
```
git add .gitattributes
```
Note that defining the file types Git LFS should track will not, by itself, convert any pre-existing files to Git LFS, such as files on other branches or in your prior commit history. To do that, use the git lfs migrate(1) command, which has a range of options designed to suit various potential use cases.

3.There is no step three. Just commit and push to GitHub as you normally would; for instance, if your current branch is named main:
```
git add .
git commit -m "feat(): Configure LFS tracking for large files"
git push origin main
```

# 2.Solution for WSL config Valgrind
## 2.1 Install WSL and Related Programs in WSL
```shell
sudo apt-get install cmake # Install cmake  
sudo apt-get install build-essential # Install build-essential  
sudo apt-get install clang # Install clang  
sudo apt-get install valgrind # Install valgrind
```
## 2.2 Configure WSL as the Default Toolchain in CLion
## 2.3 Set the Path for Valgrind (Code Format Remains Unchanged)
