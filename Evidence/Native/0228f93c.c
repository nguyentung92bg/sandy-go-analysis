/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleResultPanel$$OnOpen
void Dino_BusSand_App_UI_BattleRoyaleResultPanel__OnOpen (Dino_BusSand_App_UI_BattleRoyaleResultPanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleResultPanel$$OnOpen
   void Dino_BusSand_App_UI_BattleRoyaleResultPanel__OnOpen
   (Dino_BusSand_App_UI_BattleRoyaleResultPanel_o* __this, Il2CppObject* param, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_BattleRoyaleResultPanel__OnOpen_218f93c(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
                    /* try { // try from 0228f958 to 0238f97b has its CatchHandler @ 0228f9a4 */
  if ((bRam0000000004f9b99e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cadf30);
                    /* try { // try from 0228f97c to 0238f9b7 has its CatchHandler @ 0228f8a8 */
    FUN_02132f7c(PTR_DAT_04cadf38);
    FUN_02132f7c(PTR_DAT_04cada30);
    FUN_02132f7c(PTR_DAT_04cadf40);
                    /* catch() { ... } // from try @ 0228f958 with catch @ 0228f9a4 */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cadf48);
    FUN_02132f7c(PTR_DAT_04cad9d0);
    FUN_02132f7c(PTR_DAT_04cadf50);
    FUN_02132f7c(PTR_DAT_04cadf58);
    FUN_02132f7c(PTR_DAT_04cadf60);
    bRam0000000004f9b99e = 1;
  }
  puVar3 = PTR_DAT_04cadf38;
  puVar2 = PTR_DAT_04caa458;
  if (param_2 == (long *)0x0) {
    param_2 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    lVar9 = *(long *)PTR_DAT_04caa458;
    plVar10 = param_2;
    if (*param_2 != lVar9) {
      plVar10 = (long *)0x0;
    }
    *(long **)(param_1 + 0x38) = plVar10;
    if (*param_2 != lVar9) {
      param_2 = (long *)0x0;
    }
  }
  puVar4 = PTR_DAT_04cadf60;
  puVar1 = PTR_DAT_04ca9ae8;
  thunk_FUN_02134474(param_1 + 0x38,param_2);
  uVar5 = Dino_BusSand_App_UI_BattleRoyaleUi__get_Core_2199bb0(0);
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  thunk_FUN_02134474();
  uVar5 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  lVar9 = *(long *)puVar3;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar9);
    lVar9 = *(long *)puVar3;
  }
  Dino_BusSand_App_UI_BattleRoyaleUi__ApplyKeys_2199be4(uVar5,**(undefined8 **)(lVar9 + 0xb8),0);
  lVar9 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar4,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
  lVar8 = 0;
  if ((uVar6 & 1) != 0) {
    if (lVar9 == 0) goto LAB_0228fccc;
    lVar8 = UnityEngine_Component__GetComponent_object__26f97e8
                      (lVar9,*(undefined8 *)PTR_DAT_04cada30);
  }
  plVar10 = (long *)(param_1 + 0x48);
  *plVar10 = lVar8;
  thunk_FUN_02134474(plVar10);
  lVar9 = *plVar10;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
  if ((uVar6 & 1) != 0) {
    if (*plVar10 == 0) goto LAB_0228fccc;
    UnityEngine_Animation__Stop_4334660(*plVar10,0);
  }
  lVar9 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cadf48,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
  uVar5 = 0;
  if ((uVar6 & 1) != 0) {
    if (lVar9 == 0) goto LAB_0228fccc;
    uVar5 = UnityEngine_Component__GetComponent_object__26f97e8
                      (lVar9,*(undefined8 *)PTR_DAT_04cadf40);
  }
  *(undefined8 *)(param_1 + 0x50) = uVar5;
  thunk_FUN_02134474();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
  if ((uVar6 & 1) != 0) {
    if (lVar9 == 0) {
LAB_0228fccc:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar5 = UnityEngine_Component__get_gameObject_43bcde8(lVar9,0);
    uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    System_Action___ctor_47b5ed0(uVar7,param_1,*(undefined8 *)PTR_DAT_04cadf30,0);
    Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar5,uVar7,0,0,0);
  }
  puVar1 = PTR_DAT_04cadf58;
  puVar3 = PTR_DAT_04cadf50;
  puVar2 = PTR_DAT_04cad9d0;
  Dino_BusSand_App_UI_BattleRoyaleResultPanel__Refresh_218fcd0(param_1);
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)puVar3,0,0);
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)puVar1,0,0);
  uVar5 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar2,0);
  uVar5 = Dino_BusSand_App_UI_CommerceCoinBar__Attach_22a7af4(uVar5,0x3e9,0,0,0);
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  thunk_FUN_02134474();
  lVar9 = Dino_BusSand_App_UI_BattleRoyaleResultPanel__BornFallback_2190180(param_1);
  uVar6 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (lVar9 == 0) {
    thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
    uVar7 = thunk_FUN_0216e89c();
    uVar5 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
    System_NullReferenceException___ctor_483267c(uVar7,uVar5,0);
  }
  else {
    uVar6 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
    if ((uVar6 & 1) != 0) {
      if ((bRam0000000004fa84ef & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf7890);
        bRam0000000004fa84ef = 1;
      }
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar8 = *(long *)(param_1 + 0x10);
      if (lVar8 != 0) {
        if (pcRam0000000004fa8560 == (code *)0x0) {
          pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
        }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa8560)(lVar8,lVar9);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
    }
    thunk_FUN_021985a8(PTR_DAT_04caa3a8);
    uVar7 = thunk_FUN_0216e89c();
    uVar5 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
    System_ArgumentException___ctor_47b660c(uVar7,uVar5,0);
  }
  uVar5 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
  FUN_021330e8(uVar7,uVar5);
}

