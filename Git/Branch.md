### [Git](Git.md)

# Branch

#### List all branch
```bash
git branch
```
### Move on a branch
```bash
git switch <name_branch>
```
### Create a branch
- without move onto 
```
git branch <name-of-branch>
```
- with move onto
```
git branch <name-of-branch>
git checkout <name-of-branch>
```
ou
```bash
git checkout -b <name_new_branch>
```
#### Pour pouvoir push une branche
```
git push --set-upstream origin <name-of-branch>
```