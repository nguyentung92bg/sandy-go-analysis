/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerTipsPanel.<Wait>d__4$$MoveNext
bool Dino_BusSand_App_UI_ClimbTowerTipsPanel__Wait_d__4__MoveNext (Dino_BusSand_App_UI_ClimbTowerTipsPanel__Wait_d__4_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerTipsPanel.<Wait>d__4$$MoveNext
   bool Dino_BusSand_App_UI_ClimbTowerTipsPanel__Wait_d__4__MoveNext
   (Dino_BusSand_App_UI_ClimbTowerTipsPanel__Wait_d__4_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_ClimbTowerTipsPanel__Wait_d__4__MoveNext_21a8068(long param_1)

{
  undefined8 uVar1;
  float fVar2;
  
  if ((bRam0000000004f9ba4d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caca88);
    bRam0000000004f9ba4d = 1;
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    fVar2 = *(float *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (0.0 < fVar2) {
      uVar1 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
      UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(fVar2,uVar1,0);
      *(undefined8 *)(param_1 + 0x18) = uVar1;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar1);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x28) + 0x40) = 0;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

