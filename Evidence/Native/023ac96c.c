/* IL2CPP: Dino.BusSand.App.UI.CommonGetPanel$$OnOpen
void Dino_BusSand_App_UI_CommonGetPanel__OnOpen (Dino_BusSand_App_UI_CommonGetPanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommonGetPanel$$OnOpen
   void Dino_BusSand_App_UI_CommonGetPanel__OnOpen (Dino_BusSand_App_UI_CommonGetPanel_o* __this,
   Il2CppObject* param, const MethodInfo* method); */

void Dino_BusSand_App_UI_CommonGetPanel__OnOpen_22ac96c(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_DAT_04ca9d18;
  if ((bRam0000000004f9c2b5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cb5ed0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caef80);
    FUN_02132f7c(PTR_DAT_04cadc30);
    FUN_02132f7c(PTR_DAT_04caef88);
    bRam0000000004f9c2b5 = 1;
  }
  uVar5 = Dino_BusSand_App_UI_CommonGetPanel__ToRequest_22acb6c(param_2);
  *(undefined8 *)(param_1 + 0x38) = uVar5;
                    /* try { // try from 023aca04 to 024aca0b has its CatchHandler @ 023aca44 */
  thunk_FUN_02134474();
  lVar9 = *(long *)puVar1;
                    /* try { // try from 023aca0c to 024aca5f has its CatchHandler @ 023ac93c */
  lVar8 = *(long *)(lVar9 + 0x38);
  if (lVar8 == 0) {
    FUN_0216b4cc(lVar9);
    lVar8 = *(long *)(lVar9 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0216b470();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar4 = PTR_DAT_04caef88;
  puVar3 = PTR_DAT_04caef80;
  puVar2 = PTR_DAT_04cadc30;
  puVar1 = PTR_DAT_04ca9ae8;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023aca04 with catch @ 023aca44
                        */
  lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
                    /* try { // try from 023aca60 to 024aca63 has its CatchHandler @ 023aca7c */
                    /* try { // try from 023aca64 to 024aca7f has its CatchHandler @ 023ac93c */
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0216b470();
  }
                    /* catch() { ... } // from try @ 023aca60 with catch @ 023aca7c */
                    /* try { // try from 023aca80 to 024aca87 has its CatchHandler @ 023aca90 */
                    /* try { // try from 023aca88 to 024aca93 has its CatchHandler @ 023ac93c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 023aca80 with catch @ 023aca90
                        */
  Dino_BusSand_App_UI_UIPanel__TxtKey_2200a70
            (param_1,*(undefined8 *)puVar4,*(undefined8 *)puVar3,**(undefined8 **)(lVar8 + 0xb8),0);
  Dino_BusSand_App_UI_CommonGetPanel__RefreshTitle_22adac8(param_1);
  Dino_BusSand_App_UI_CommonGetPanel__RefreshDesc_22add50(param_1);
  Dino_BusSand_App_UI_CommonGetPanel__RefreshRewardList_22ade38(param_1);
  lVar8 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar2,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
  if ((uVar6 & 1) != 0) {
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar5 = UnityEngine_Component__get_gameObject_43bcde8(lVar8,0);
    uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
    System_Action___ctor_47b5ed0(uVar7,param_1,*(undefined8 *)PTR_DAT_04cb5ed0,0);
    Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar5,uVar7,0,0,0);
  }
  lVar8 = Dino_BusSand_App_UI_CommonGetPanel__PlayStaggered_22ae324(param_1);
  uVar6 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0,0);
  if ((uVar6 & 1) != 0) {
    if (lVar8 == 0) {
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
        if (param_1 != 0) {
          lVar9 = *(long *)(param_1 + 0x10);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
          }
          if (pcRam0000000004fa8560 == (code *)0x0) {
            pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
          }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000004fa8560)(lVar9,lVar8);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
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
  return;
}

