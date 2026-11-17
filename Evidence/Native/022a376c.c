/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerItemView.<AfterClaim>d__34$$MoveNext
bool Dino_BusSand_App_UI_ClimbTowerItemView__AfterClaim_d__34__MoveNext (Dino_BusSand_App_UI_ClimbTowerItemView__AfterClaim_d__34_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerItemView.<AfterClaim>d__34$$MoveNext
   bool Dino_BusSand_App_UI_ClimbTowerItemView__AfterClaim_d__34__MoveNext
   (Dino_BusSand_App_UI_ClimbTowerItemView__AfterClaim_d__34_o* __this, const MethodInfo* method);
    */

bool Dino_BusSand_App_UI_ClimbTowerItemView__AfterClaim_d__34__MoveNext_21a376c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if ((bRam0000000004f9ba2b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caca88);
    bRam0000000004f9ba2b = 1;
  }
  puVar2 = PTR_DAT_04caca88;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(uVar4,uVar3,0);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar3);
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_App_UI_ClimbTowerItemView__UpdateBoxState_21a17d8();
  }
  return iVar1 == 0;
}

