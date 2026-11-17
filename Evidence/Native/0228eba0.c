/* IL2CPP: Dino.BusSand.App.UI.BattleRoyalePanel.<MoveBottomTip>d__23$$MoveNext
bool Dino_BusSand_App_UI_BattleRoyalePanel__MoveBottomTip_d__23__MoveNext (Dino_BusSand_App_UI_BattleRoyalePanel__MoveBottomTip_d__23_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.BattleRoyalePanel.<MoveBottomTip>d__23$$MoveNext
   bool Dino_BusSand_App_UI_BattleRoyalePanel__MoveBottomTip_d__23__MoveNext
   (Dino_BusSand_App_UI_BattleRoyalePanel__MoveBottomTip_d__23_o* __this, const MethodInfo* method);
    */

undefined8
Dino_BusSand_App_UI_BattleRoyalePanel__MoveBottomTip_d__23__MoveNext_218eba0
          (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  
                    /* try { // try from 0228eba0 to 0238ebdb has its CatchHandler @ 0228eb64 */
  if ((bRam0000000004f9b998 & 1) == 0) {
                    /* catch() { ... } // from try @ 0228eb94 with catch @ 0228ebc0 */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caded0);
    bRam0000000004f9b998 = 1;
  }
  fVar6 = _UNK_00e207cc;
  if (*(int *)(param_3 + 0x10) == 1) {
    *(undefined4 *)(param_3 + 0x10) = 0xffffffff;
    if (fVar6 <= *(float *)(param_3 + 0x40)) {
      return 0;
    }
  }
  else {
    if (*(int *)(param_3 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_3 + 0x10) = 0xffffffff;
    if (*(long *)(param_3 + 0x20) == 0) goto LAB_0228ed90;
    lVar2 = Dino_BusSand_App_UI_UIPanel__Find_21f4108
                      (*(long *)(param_3 + 0x20),*(undefined8 *)PTR_DAT_04caded0,0);
    plVar4 = (long *)(param_3 + 0x30);
    *plVar4 = lVar2;
    thunk_FUN_02134474(plVar4,lVar2);
    lVar2 = *plVar4;
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar2,0,0);
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    if ((*plVar4 == 0) ||
       (lVar2 = UnityEngine_Component__get_gameObject_43bcde8(*plVar4,0), lVar2 == 0))
    goto LAB_0228ed90;
    UnityEngine_GameObject__SetActive_43c1408(lVar2,1,0);
    if (*plVar4 == 0) goto LAB_0228ed90;
    UnityEngine_Transform__get_localPosition_43cfce8(*plVar4,0);
    *(undefined4 *)(param_3 + 0x40) = 0;
    uVar1 = 0x43d20000;
    if (*(char *)(param_3 + 0x28) != '\0') {
      uVar1 = 0;
    }
    *(undefined4 *)(param_3 + 0x38) = param_2;
    *(undefined4 *)(param_3 + 0x3c) = uVar1;
  }
  uVar5 = *(undefined8 *)(param_3 + 0x30);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  fVar7 = *(float *)(param_3 + 0x40);
  fVar6 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
  fVar7 = fVar7 + fVar6;
  fVar6 = fVar7 / _UNK_00e207cc;
  *(float *)(param_3 + 0x40) = fVar7;
  if (*(char *)(param_3 + 0x28) == '\0') {
    fVar6 = (float)Dino_BusSand_App_UI_BattleRoyaleUi__InBack_219d130(fVar6,0);
  }
  else {
    fVar6 = (float)Dino_BusSand_App_UI_BattleRoyaleUi__OutBack_219d0e4();
  }
  if (*(long *)(param_3 + 0x30) != 0) {
    uVar5 = UnityEngine_Transform__get_localPosition_43cfce8(*(long *)(param_3 + 0x30),0);
    if (*(long *)(param_3 + 0x30) != 0) {
      UnityEngine_Transform__set_localPosition_43cfda8
                (uVar5,*(float *)(param_3 + 0x38) +
                       fVar6 * (*(float *)(param_3 + 0x3c) - *(float *)(param_3 + 0x38)),
                 *(long *)(param_3 + 0x30),0);
      *(undefined8 *)(param_3 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(param_3 + 0x18),0);
      *(undefined4 *)(param_3 + 0x10) = 1;
      return 1;
    }
  }
LAB_0228ed90:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

