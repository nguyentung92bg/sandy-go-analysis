/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController.<HeadStart>d__130$$MoveNext
bool Dino_BusSand_App_Gameplay_GameplayController__HeadStart_d__130__MoveNext (Dino_BusSand_App_Gameplay_GameplayController__HeadStart_d__130_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Gameplay.GameplayController.<HeadStart>d__130$$MoveNext
   bool Dino_BusSand_App_Gameplay_GameplayController__HeadStart_d__130__MoveNext
   (Dino_BusSand_App_Gameplay_GameplayController__HeadStart_d__130_o* __this, const MethodInfo*
   method); */

undefined8
Dino_BusSand_App_Gameplay_GameplayController__HeadStart_d__130__MoveNext_22a0484(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  
  if ((bRam0000000004f9c258 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba90);
    FUN_02132f7c(PTR_DAT_04caaa78);
    bRam0000000004f9c258 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    iVar3 = *(int *)(param_1 + 0x2c) + 1;
    *(int *)(param_1 + 0x2c) = iVar3;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 == 0) goto LAB_023a05c0;
    *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
    uVar1 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248(lVar4);
    if (*(int *)(*(long *)PTR_DAT_04caba90 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04caba90);
    }
    Dino_BusSand_App_Meta_JourneyTracking__Boost_221c4bc(uVar1,0x3eb,0,0xffffffffffffffff,0);
    iVar3 = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (iVar3 < *(int *)(param_1 + 0x28)) {
    if (lVar4 == 0) {
LAB_023a05c0:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if ((*(int *)(lVar4 + 0x20) == 2) &&
       (uVar2 = Dino_BusSand_App_Gameplay_GameplayController__BotStep_229eadc(lVar4),
       (uVar2 & 1) != 0)) {
      uVar1 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caaa78);
      UnityEngine_WaitForSeconds___ctor_43ca4f4(_UNK_00e208d0,uVar1,0);
      *(undefined8 *)(param_1 + 0x18) = uVar1;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar1);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
  return 0;
}

