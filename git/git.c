
.git ---> 暂存区 分支信息 

其他 ---> 工作区

//--------------分支操作------------------//

#查看分支
git fetch
git branch -av

#创建分支并切换分支
git checkout -b feat_xxxx

#提交本地分支到远程
git push origin feat_xxxx

#删除本地分支
git branch -d feat_xxxx

#删除远程分支
git push origin --delete feat_xxxx

or 

git push origin : feat_xxxx

#本地分支从命名
git branch -m feat_old feat_new

#远程分支重命名
git push origin : feat_old
git branch -m feat_old feat_new
git push origin   feat_new



//-------------版本合并----------------//

#合并某次修改
git cherry-pick 某次修改的版本ID记录

#撤销工作区相对于暂存区修改，暂存区无影响
git checkout -- file

#撤销暂存区修改
git restore --staged file

#git reset
git reset 版本号 / git reset --mixed 	// 回到 git add 之前的状态（保留修改等待git add git commit）
git reset --soft 版本号					// 回到 git commit 之前的状态（保留修改等待 git commit）
git reset --hard 版本号 					// 还原暂存区 工作区到哪个版本

#版本号
HEAD 		--> 当前版本
HEAD~1		--> 上一个版本

#合并feat_xxxx分支到当前分支 
git merge feat_xxxx

#将当前分支rebase到feat_xxxx分支 
git rebase feat_xxxx

#rebase 工作流程
git fetch
git rebase origin/develop
git push origin feat_xxxxx --force


