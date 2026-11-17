/* IL2CPP: Dino.BusSand.App.UI.PassportGetPanel$$OnTap
void Dino_BusSand_App_UI_PassportGetPanel__OnTap (Dino_BusSand_App_UI_PassportGetPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportGetPanel$$OnTap
   void Dino_BusSand_App_UI_PassportGetPanel__OnTap (Dino_BusSand_App_UI_PassportGetPanel_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_PassportGetPanel__OnTap_21d1edc(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
                    /* try { // try from 022d1ee4 to 023d1f6f has its CatchHandler @ 022d1ee4
                       catch() { ... } // from try @ 022d1ee4 with catch @ 022d1ee4
                       catch() { ... } // from try @ 022d24e0 with catch @ 022d1ee4 */
  if ((bRam0000000004f9bb43 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04cb0428);
    FUN_02132f7c(PTR_DAT_04cb04e0);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9bb43 = 1;
  }
  puVar2 = PTR_DAT_04cab1e8;
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 != 3) {
    if (iVar1 == 2) {
      UnityEngine_MonoBehaviour__StopAllCoroutines_43c4224(param_1,0);
                    /* try { // try from 022d1f70 to 023d1f83 has its CatchHandler @ 022d24f4 */
      uVar6 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cb0428,0);
      if (*(int *)(*(long *)PTR_DAT_04caec68 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04caec68);
      }
      Dino_BusSand_App_UI_GiftPackUi__Sample_21adb38(uVar6,*(undefined8 *)PTR_DAT_04cb04e0,1,0);
      *(undefined4 *)(param_1 + 0x40) = 3;
    }
    else if (iVar1 == 1) {
      lVar3 = Dino_BusSand_App_UI_PassportGetPanel__PlayBC_21d1e48(param_1);
      goto LAB_022d2014;
    }
    return;
  }
                    /* try { // try from 022d1fe0 to 023d2027 has its CatchHandler @ 022d2500 */
  *(undefined4 *)(param_1 + 0x40) = 4;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Audio__Play_214da60(0x3f800000,*(undefined8 *)PTR_DAT_04cad948,0);
  lVar3 = Dino_BusSand_App_UI_PassportGetPanel__Finish_21d202c(param_1);
LAB_022d2014:
  uVar4 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (lVar3 == 0) {
    thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
    uVar5 = thunk_FUN_0216e89c();
    uVar6 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
    System_NullReferenceException___ctor_483267c(uVar5,uVar6,0);
  }
  else {
    uVar4 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
    if ((uVar4 & 1) != 0) {
      if ((bRam0000000004fa84ef & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf7890);
        bRam0000000004fa84ef = 1;
      }
      if (param_1 != 0) {
        lVar7 = *(long *)(param_1 + 0x10);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
        }
        if (pcRam0000000004fa8560 == (code *)0x0) {
          pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
        }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa8560)(lVar7,lVar3);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    thunk_FUN_021985a8(PTR_DAT_04caa3a8);
    uVar5 = thunk_FUN_0216e89c();
    uVar6 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
    System_ArgumentException___ctor_47b660c(uVar5,uVar6,0);
  }
  uVar6 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
  FUN_021330e8(uVar5,uVar6);
}

