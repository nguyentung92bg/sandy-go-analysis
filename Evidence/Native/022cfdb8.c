/* IL2CPP: Dino.BusSand.App.UI.PassportFinishGetPanel$$OnOpen
void Dino_BusSand_App_UI_PassportFinishGetPanel__OnOpen (Dino_BusSand_App_UI_PassportFinishGetPanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportFinishGetPanel$$OnOpen
   void Dino_BusSand_App_UI_PassportFinishGetPanel__OnOpen
   (Dino_BusSand_App_UI_PassportFinishGetPanel_o* __this, Il2CppObject* param, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_PassportFinishGetPanel__OnOpen_21cfdb8(long param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  if ((bRam0000000004f9bb36 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04cb0388);
                    /* try { // try from 022cfe24 to 023cfec7 has its CatchHandler @ 022cfe24
                       catch() { ... } // from try @ 022cfe24 with catch @ 022cfe24
                       catch() { ... } // from try @ 022cfee0 with catch @ 022cfe24
                       catch() { ... } // from try @ 022cff58 with catch @ 022cfe24
                       catch() { ... } // from try @ 022d0058 with catch @ 022cfe24 */
    FUN_02132f7c(PTR_DAT_04cb0390);
    FUN_02132f7c(PTR_DAT_04caef48);
    FUN_02132f7c(PTR_DAT_04cb0398);
    FUN_02132f7c(PTR_DAT_04caa398);
    FUN_02132f7c(PTR_DAT_04cb03a0);
    FUN_02132f7c(PTR_DAT_04cb0158);
    FUN_02132f7c(PTR_DAT_04caef68);
    FUN_02132f7c(PTR_DAT_04cadd78);
    FUN_02132f7c(PTR_DAT_04caef80);
    FUN_02132f7c(PTR_DAT_04caeba8);
    FUN_02132f7c(PTR_DAT_04cb03a8);
    FUN_02132f7c(PTR_DAT_04cad948);
    FUN_02132f7c(PTR_DAT_04caef88);
    bRam0000000004f9bb36 = 1;
  }
  puVar3 = PTR_DAT_04caeba8;
  puVar4 = PTR_DAT_04caa458;
  puVar2 = PTR_DAT_04ca9d18;
                    /* try { // try from 022cfec8 to 023cfedf has its CatchHandler @ 022d00ac */
  if (param_2 == (long *)0x0) {
    param_2 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    lVar10 = *(long *)PTR_DAT_04caa458;
                    /* try { // try from 022cfee0 to 023cff3f has its CatchHandler @ 022cfe24 */
    plVar1 = param_2;
    if (*param_2 != lVar10) {
      plVar1 = (long *)0x0;
    }
    *(long **)(param_1 + 0x38) = plVar1;
    if (*param_2 != lVar10) {
      param_2 = (long *)0x0;
    }
  }
  thunk_FUN_02134474(param_1 + 0x38,param_2);
  uVar7 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar3,0);
  lVar11 = *(long *)puVar2;
  lVar10 = *(long *)(lVar11 + 0x38);
  if (lVar10 == 0) {
    FUN_0216b4cc(lVar11);
    lVar10 = *(long *)(lVar11 + 0x38);
  }
                    /* try { // try from 022cff40 to 023cff57 has its CatchHandler @ 022d0098 */
  lVar10 = *(long *)(lVar10 + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0216b470();
  }
                    /* try { // try from 022cff58 to 023cff87 has its CatchHandler @ 022cfe24 */
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar3 = PTR_DAT_04cab550;
  lVar10 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0216b470();
  }
  puVar5 = PTR_DAT_04cb0158;
                    /* try { // try from 022cff88 to 023cff97 has its CatchHandler @ 022d0094 */
  uVar12 = **(undefined8 **)(lVar10 + 0xb8);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    /* try { // try from 022cffa0 to 023cffab has its CatchHandler @ 022d0078 */
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
                    /* try { // try from 022cffb0 to 023cffcf has its CatchHandler @ 022d0058 */
  uVar12 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)puVar5,uVar12,0);
  lVar11 = *(long *)puVar2;
  lVar10 = *(long *)(lVar11 + 0x38);
  if (lVar10 == 0) {
    FUN_0216b4cc(lVar11);
    lVar10 = *(long *)(lVar11 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0216b470();
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar6 = PTR_DAT_04cb03a8;
  puVar5 = PTR_DAT_04caec68;
  puVar3 = PTR_DAT_04caa398;
  lVar10 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0216b470();
  }
  uVar8 = Dino_BusSand_App_Lang__Get_215f9c0
                    (*(undefined8 *)puVar6,**(undefined8 **)(lVar10 + 0xb8),0);
  uVar12 = System_String__Concat_46d2b84(uVar12,*(undefined8 *)puVar3,uVar8,0);
                    /* try { // try from 022d0050 to 023d0053 has its CatchHandler @ 022d00ac */
                    /* try { // try from 022d0054 to 023d0057 has its CatchHandler @ 022d0098 */
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 022cffb0 with catch @ 022d0058
                       try { // try from 022d0058 to 023d00bf has its CatchHandler @ 022cfe24 */
    thunk_FUN_0218fdac(*(long *)puVar5);
  }
  Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar7,uVar12,0);
  lVar11 = *(long *)puVar2;
  lVar10 = *(long *)(lVar11 + 0x38);
                    /* catch() { ... } // from try @ 022cffa0 with catch @ 022d0078 */
  if (lVar10 == 0) {
    FUN_0216b4cc(lVar11);
    lVar10 = *(long *)(lVar11 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
                    /* catch() { ... } // from try @ 022cff88 with catch @ 022d0094 */
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 022cff40 with catch @ 022d0098
                       catch() { ... } // from try @ 022d0054 with catch @ 022d0098 */
    lVar10 = FUN_0216b470();
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar5 = PTR_DAT_04cb03a0;
  puVar3 = PTR_DAT_04caef68;
                    /* catch() { ... } // from try @ 022cfec8 with catch @ 022d00ac
                       catch() { ... } // from try @ 022d0050 with catch @ 022d00ac */
  lVar10 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
                    /* catch() { ... } // from try @ 022d0508 with catch @ 022d00c0 */
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0216b470();
  }
  Dino_BusSand_App_UI_UIPanel__TxtKey_2200a70
            (param_1,*(undefined8 *)puVar3,*(undefined8 *)puVar5,**(undefined8 **)(lVar10 + 0xb8),0)
  ;
  lVar11 = *(long *)puVar2;
  lVar10 = *(long *)(lVar11 + 0x38);
  if (lVar10 == 0) {
    FUN_0216b4cc(lVar11);
    lVar10 = *(long *)(lVar11 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0216b470();
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar5 = PTR_DAT_04caef88;
  puVar3 = PTR_DAT_04caef80;
  puVar2 = PTR_DAT_04caef48;
  lVar10 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0216b470();
  }
  Dino_BusSand_App_UI_UIPanel__TxtKey_2200a70
            (param_1,*(undefined8 *)puVar5,*(undefined8 *)puVar3,**(undefined8 **)(lVar10 + 0xb8),0)
  ;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar5 = PTR_DAT_04cb0398;
  puVar3 = PTR_DAT_04cadd78;
  puVar2 = PTR_DAT_04cad948;
  lVar10 = Dino_BusSand_App_Meta_PassportFeature__get_I_22445dc(0);
  if (lVar10 == 0) {
    uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb0390);
    System_Collections_Generic_List_PassportFeature_Reward____ctor_3b57a78
              (uVar7,*(undefined8 *)PTR_DAT_04cb0388);
  }
  else {
    uVar7 = Dino_BusSand_App_Meta_PassportFeature__AllUnclaimedRewards_2248514(lVar10,0);
  }
  Dino_BusSand_App_UI_PassportFinishGetPanel__Build_21d0248(param_1,uVar7);
  uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
                    /* try { // try from 022d01f0 to 023d024b has its CatchHandler @ 022d0538 */
  System_Action___ctor_47b5ed0(uVar7,param_1,*(undefined8 *)puVar5,0);
  Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
            (param_1,*(undefined8 *)puVar3,uVar7,0,*(undefined8 *)puVar2,0);
  lVar10 = Dino_BusSand_App_UI_PassportFinishGetPanel__Sequence_21d0714(param_1);
  uVar9 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0,0);
  if ((uVar9 & 1) == 0) {
    return;
  }
  if (lVar10 == 0) {
    thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
    uVar12 = thunk_FUN_0216e89c();
    uVar7 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
    System_NullReferenceException___ctor_483267c(uVar12,uVar7,0);
  }
  else {
    uVar9 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
    if ((uVar9 & 1) != 0) {
      if ((bRam0000000004fa84ef & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf7890);
        bRam0000000004fa84ef = 1;
      }
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar11 = *(long *)(param_1 + 0x10);
      if (lVar11 != 0) {
        if (pcRam0000000004fa8560 == (code *)0x0) {
          pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
        }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa8560)(lVar11,lVar10);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
    }
    thunk_FUN_021985a8(PTR_DAT_04caa3a8);
    uVar12 = thunk_FUN_0216e89c();
    uVar7 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
    System_ArgumentException___ctor_47b660c(uVar12,uVar7,0);
  }
  uVar7 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
  FUN_021330e8(uVar12,uVar7);
}

