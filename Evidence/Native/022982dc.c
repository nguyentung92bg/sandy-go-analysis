/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel.<MenFall>d__79$$MoveNext
bool Dino_BusSand_App_UI_BattleRoyaleScenePanel__MenFall_d__79__MoveNext (Dino_BusSand_App_UI_BattleRoyaleScenePanel__MenFall_d__79_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel.<MenFall>d__79$$MoveNext
   bool Dino_BusSand_App_UI_BattleRoyaleScenePanel__MenFall_d__79__MoveNext
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel__MenFall_d__79_o* __this, const MethodInfo* method);
    */

undefined8 Dino_BusSand_App_UI_BattleRoyaleScenePanel__MenFall_d__79__MoveNext_21982dc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 uVar7;
  
  if ((bRam0000000004f9b9d7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04cada30);
    FUN_02132f7c(PTR_DAT_04cad708);
    FUN_02132f7c(PTR_DAT_04cad7c8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caca88);
    FUN_02132f7c(PTR_DAT_04cae1f0);
    FUN_02132f7c(PTR_DAT_04cae370);
    bRam0000000004f9b9d7 = 1;
  }
  puVar2 = PTR_DAT_04caca88;
  puVar1 = PTR_DAT_04cab1e8;
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)PTR_DAT_04cae370,0);
    return 0;
  }
  if (iVar3 != 1) {
    if (iVar3 != 0) {
      return 0;
    }
    uVar7 = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(uVar7,uVar4,0);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar4);
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  lVar6 = *(long *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if ((lVar6 == 0) || (*(long *)(lVar6 + 0x40) == 0)) goto LAB_02298514;
  iVar3 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_CurrentStage_2221150
                    (*(long *)(lVar6 + 0x40),0);
  if (iVar3 == 0) {
    uVar4 = *(undefined8 *)(lVar6 + 0x78);
LAB_0229845c:
    lVar6 = Dino_BusSand_App_UI_BattleRoyaleScenePanel__GateOf_2193a88(uVar4);
  }
  else {
    lVar6 = *(long *)(lVar6 + 0x70);
    if (lVar6 == 0) goto LAB_02298514;
    if (iVar3 <= *(int *)(lVar6 + 0x18)) {
      uVar4 = System_Collections_Generic_List_object___get_Item_3a81924
                        (lVar6,iVar3 + -1,*(undefined8 *)PTR_DAT_04cad7c8);
      goto LAB_0229845c;
    }
    lVar6 = 0;
  }
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
  if ((uVar5 & 1) != 0) {
    return 0;
  }
  if (lVar6 != 0) {
    uVar4 = UnityEngine_Component__GetComponent_object__26f97e8
                      (lVar6,*(undefined8 *)PTR_DAT_04cada30);
    Dino_BusSand_App_UI_BattleRoyaleUi__Play_219a580(uVar4,*(undefined8 *)PTR_DAT_04cae1f0,0);
    uVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
    UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(_UNK_00e20664,uVar4,0);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar4);
    *(undefined4 *)(param_1 + 0x10) = 2;
    return 1;
  }
LAB_02298514:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

