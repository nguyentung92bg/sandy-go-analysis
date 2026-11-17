/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerItemView.<AfterReach>d__37$$MoveNext
bool Dino_BusSand_App_UI_ClimbTowerItemView__AfterReach_d__37__MoveNext (Dino_BusSand_App_UI_ClimbTowerItemView__AfterReach_d__37_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerItemView.<AfterReach>d__37$$MoveNext
   bool Dino_BusSand_App_UI_ClimbTowerItemView__AfterReach_d__37__MoveNext
   (Dino_BusSand_App_UI_ClimbTowerItemView__AfterReach_d__37_o* __this, const MethodInfo* method);
    */

bool Dino_BusSand_App_UI_ClimbTowerItemView__AfterReach_d__37__MoveNext_21a3870(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  
  if ((bRam0000000004f9ba2c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caca88);
    FUN_02132f7c(PTR_DAT_04cae960);
    FUN_02132f7c(PTR_DAT_04cae968);
    bRam0000000004f9ba2c = 1;
  }
  puVar2 = PTR_DAT_04caca88;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    uVar5 = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(uVar5,uVar3,0);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar3);
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    lVar4 = *(long *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar3 = Dino_BusSand_App_UI_ClimbTowerItemView__F_21a102c(lVar4,*(undefined8 *)PTR_DAT_04cae968)
    ;
    Dino_BusSand_App_UI_ClimbTowerItemView__SetActive_21a224c(uVar3,0);
    uVar3 = Dino_BusSand_App_UI_ClimbTowerItemView__F_21a102c(lVar4,*(undefined8 *)PTR_DAT_04cae960)
    ;
    Dino_BusSand_App_UI_ClimbTowerItemView__SetActive_21a224c(uVar3,0);
    Dino_BusSand_App_UI_ClimbTowerItemView__UpdateBoxState_21a17d8(lVar4);
    *(undefined1 *)(lVar4 + 0x41) = 0;
  }
  return iVar1 == 0;
}

