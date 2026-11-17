/* IL2CPP: Dino.BusSand.App.UI.StreakRateTipsPanel$$OnOpen
void Dino_BusSand_App_UI_StreakRateTipsPanel__OnOpen (Dino_BusSand_App_UI_StreakRateTipsPanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakRateTipsPanel$$OnOpen
   void Dino_BusSand_App_UI_StreakRateTipsPanel__OnOpen (Dino_BusSand_App_UI_StreakRateTipsPanel_o*
   __this, Il2CppObject* param, const MethodInfo* method); */

void Dino_BusSand_App_UI_StreakRateTipsPanel__OnOpen_21e5ec8(long param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uStack_54;
  
  if ((bRam0000000004f9bbd0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cada30);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae9a8);
    FUN_02132f7c(PTR_DAT_04cb0e20);
    FUN_02132f7c(PTR_DAT_04cb0e28);
    FUN_02132f7c(PTR_DAT_04cb0e30);
    FUN_02132f7c(PTR_DAT_04cb0e38);
    FUN_02132f7c(PTR_DAT_04cb0e40);
    FUN_02132f7c(PTR_DAT_04cb0e48);
    FUN_02132f7c(PTR_DAT_04cb0e50);
    FUN_02132f7c(PTR_DAT_04cadd78);
    FUN_02132f7c(PTR_DAT_04cb0e58);
    FUN_02132f7c(PTR_DAT_04caeb88);
    FUN_02132f7c(PTR_DAT_04caf2c8);
    FUN_02132f7c(PTR_DAT_04caeb90);
    FUN_02132f7c(PTR_DAT_04cb0e60);
    FUN_02132f7c(PTR_DAT_04caeb98);
    FUN_02132f7c(PTR_DAT_04cb0e68);
    FUN_02132f7c(PTR_DAT_04cb0e70);
    FUN_02132f7c(PTR_DAT_04cb0e78);
    FUN_02132f7c(PTR_DAT_04caeba8);
    FUN_02132f7c(PTR_DAT_04cb0ae0);
    FUN_02132f7c(PTR_DAT_04cb0e80);
    FUN_02132f7c(PTR_DAT_04cb0e88);
    FUN_02132f7c(PTR_DAT_04cada38);
    FUN_02132f7c(PTR_DAT_04caebb8);
    bRam0000000004f9bbd0 = 1;
  }
  puVar7 = PTR_DAT_04cb0e80;
  puVar6 = PTR_DAT_04cb0e70;
  puVar5 = PTR_DAT_04cb0e58;
  puVar4 = PTR_DAT_04cb0e48;
  puVar3 = PTR_DAT_04caa458;
  puVar2 = PTR_DAT_04ca9d18;
                    /* try { // try from 022e6080 to 023e6097 has its CatchHandler @ 022e6178 */
  uStack_54 = 0;
  if (param_2 == (long *)0x0) {
    param_2 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    lVar10 = *(long *)PTR_DAT_04caa458;
                    /* try { // try from 022e6098 to 023e6193 has its CatchHandler @ 022e5e08 */
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
  uStack_54 = Dino_BusSand_App_Meta_StreakRateFeature__StreakRateByLevelType_224c2e0(0,0);
  uVar8 = System_Int32__ToString_482d750(&uStack_54,0);
  uVar8 = System_String__Concat_46c82e0(*(undefined8 *)puVar7,uVar8,0);
  Dino_BusSand_App_UI_UIPanel__Txt_2200924(param_1,*(undefined8 *)puVar6,uVar8,0);
  uStack_54 = Dino_BusSand_App_Meta_StreakRateFeature__StreakRateByLevelType_224c2e0(1,0);
  uVar8 = System_Int32__ToString_482d750(&uStack_54,0);
  uVar8 = System_String__Concat_46c82e0(*(undefined8 *)puVar7,uVar8,0);
  Dino_BusSand_App_UI_UIPanel__Txt_2200924(param_1,*(undefined8 *)puVar5,uVar8,0);
  uStack_54 = Dino_BusSand_App_Meta_StreakRateFeature__StreakRateByLevelType_224c2e0(2,0);
  uVar8 = System_Int32__ToString_482d750(&uStack_54,0);
                    /* catch() { ... } // from try @ 022e6080 with catch @ 022e6178 */
  uVar8 = System_String__Concat_46c82e0(*(undefined8 *)puVar7,uVar8,0);
  Dino_BusSand_App_UI_UIPanel__Txt_2200924(param_1,*(undefined8 *)puVar4,uVar8,0);
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
  puVar5 = PTR_DAT_04cb0e88;
  puVar4 = PTR_DAT_04cb0e68;
  lVar10 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0216b470();
  }
  Dino_BusSand_App_UI_UIPanel__TxtKey_2200a70
            (param_1,*(undefined8 *)puVar5,*(undefined8 *)puVar4,**(undefined8 **)(lVar10 + 0xb8),0)
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
  puVar6 = PTR_DAT_04cb0e38;
  puVar5 = PTR_DAT_04cb0e28;
  puVar4 = PTR_DAT_04caeba8;
  lVar10 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0216b470();
  }
  Dino_BusSand_App_UI_UIPanel__TxtKey_2200a70
            (param_1,*(undefined8 *)puVar6,*(undefined8 *)puVar5,**(undefined8 **)(lVar10 + 0xb8),0)
  ;
  uVar8 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar4,0);
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
  puVar4 = PTR_DAT_04cab550;
  lVar10 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0216b470();
  }
  puVar6 = PTR_DAT_04cb0ae0;
  puVar5 = PTR_DAT_04cae9a8;
  uVar12 = **(undefined8 **)(lVar10 + 0xb8);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar4);
  }
  puVar4 = PTR_DAT_04caeb90;
  uVar12 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)puVar6,uVar12,0);
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar5);
  }
  Dino_BusSand_App_UI_StreakRateHallBar__SetTexts_21e0a40(uVar8,uVar12);
  uVar8 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar4,0);
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
  puVar5 = PTR_DAT_04cb0e50;
  puVar4 = PTR_DAT_04caeb98;
                    /* catch() { ... } // from try @ 022e6690 with catch @ 022e63bc
                       catch() { ... } // from try @ 022e678c with catch @ 022e63bc */
  lVar10 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0216b470();
  }
  uVar12 = Dino_BusSand_App_Meta_StreakTowerUtil__L_2251bd4
                     (*(undefined8 *)puVar5,**(undefined8 **)(lVar10 + 0xb8),0);
  Dino_BusSand_App_UI_StreakRateHallBar__SetTexts_21e0a40(uVar8,uVar12);
  uVar8 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar4,0);
  lVar11 = *(long *)puVar2;
  lVar10 = *(long *)(lVar11 + 0x38);
  if (lVar10 == 0) {
    FUN_0216b4cc(lVar11);
    lVar10 = *(long *)(lVar11 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
                    /* try { // try from 022e6430 to 023e6447 has its CatchHandler @ 022e67cc */
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0216b470();
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar5 = PTR_DAT_04cb0e78;
  puVar4 = PTR_DAT_04caebb8;
  lVar10 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0216b470();
  }
                    /* try { // try from 022e6480 to 023e648f has its CatchHandler @ 022e67c4 */
  uVar12 = Dino_BusSand_App_Meta_StreakTowerUtil__L_2251bd4
                     (*(undefined8 *)puVar5,**(undefined8 **)(lVar10 + 0xb8),0);
  Dino_BusSand_App_UI_StreakRateHallBar__SetTexts_21e0a40(uVar8,uVar12);
  uVar8 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar4,0);
  lVar11 = *(long *)puVar2;
  lVar10 = *(long *)(lVar11 + 0x38);
  if (lVar10 == 0) {
    FUN_0216b4cc(lVar11);
                    /* try { // try from 022e64bc to 023e6513 has its CatchHandler @ 022e6840 */
    lVar10 = *(long *)(lVar11 + 0x38);
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0216b470();
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar5 = PTR_DAT_04cb0e40;
  puVar4 = PTR_DAT_04cb0e30;
  lVar10 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0216b470();
  }
  uVar12 = Dino_BusSand_App_Meta_StreakTowerUtil__L_2251bd4
                     (*(undefined8 *)puVar5,**(undefined8 **)(lVar10 + 0xb8),0);
  Dino_BusSand_App_UI_StreakRateHallBar__SetTexts_21e0a40(uVar8,uVar12);
  uVar8 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar4,0);
  lVar11 = *(long *)puVar2;
  lVar10 = *(long *)(lVar11 + 0x38);
  if (lVar10 == 0) {
                    /* try { // try from 022e654c to 023e657b has its CatchHandler @ 022e67b4 */
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
  puVar5 = PTR_DAT_04cb0e60;
  puVar4 = PTR_DAT_04caeb88;
  lVar10 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0216b470();
  }
  uVar12 = Dino_BusSand_App_Meta_StreakTowerUtil__L_2251bd4
                     (*(undefined8 *)puVar5,**(undefined8 **)(lVar10 + 0xb8),0);
  Dino_BusSand_App_UI_StreakRateHallBar__SetTexts_21e0a40(uVar8,uVar12);
  uVar8 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar4,0);
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
  puVar7 = PTR_DAT_04cb0e20;
  puVar6 = PTR_DAT_04caf2c8;
  puVar5 = PTR_DAT_04cadd78;
  puVar4 = PTR_DAT_04cada38;
  puVar2 = PTR_DAT_04ca9ae8;
  lVar10 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
                    /* try { // try from 022e6630 to 023e668f has its CatchHandler @ 022e67e0 */
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0216b470();
  }
  uVar12 = Dino_BusSand_App_Lang__Get_215f9c0
                     (*(undefined8 *)puVar6,**(undefined8 **)(lVar10 + 0xb8),0);
  Dino_BusSand_App_UI_StreakRateHallBar__SetTexts_21e0a40(uVar8,uVar12);
  uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Action___ctor_47b5ed0(uVar8,param_1,*(undefined8 *)puVar7,0);
                    /* try { // try from 022e6690 to 023e673b has its CatchHandler @ 022e63bc */
  Dino_BusSand_App_UI_UIPanel__Btn_2200cb0(param_1,*(undefined8 *)puVar5,uVar8,0,0,0);
  lVar10 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar4,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
  lVar11 = 0;
  if ((uVar9 & 1) != 0) {
    if (lVar10 == 0) goto LAB_022e67b8;
    lVar11 = UnityEngine_Component__GetComponent_object__26f97e8
                       (lVar10,*(undefined8 *)PTR_DAT_04cada30);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
  uVar13 = 0;
  if ((uVar9 & 1) != 0) {
    if (lVar11 == 0) {
LAB_022e67b8:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar8 = UnityEngine_Animation__get_clip_43341a8(lVar11,0);
                    /* try { // try from 022e673c to 023e673f has its CatchHandler @ 022e6840 */
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
                    /* try { // try from 022e6750 to 023e6763 has its CatchHandler @ 022e678c */
    uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
    if ((uVar9 & 1) != 0) {
      lVar10 = UnityEngine_Animation__get_clip_43341a8(lVar11,0);
      if (lVar10 == 0) goto LAB_022e67b8;
      uVar13 = UnityEngine_AnimationClip__get_length_4338218(lVar10,0);
    }
  }
                    /* try { // try from 022e677c to 023e6787 has its CatchHandler @ 022e67cc */
  uVar8 = Dino_BusSand_App_UI_StreakRateTipsPanel__WaitIntro_21e67bc(uVar13,param_1);
                    /* try { // try from 022e6788 to 023e678b has its CatchHandler @ 022e67a4 */
                    /* catch() { ... } // from try @ 022e6750 with catch @ 022e678c
                       try { // try from 022e678c to 023e687f has its CatchHandler @ 022e63bc */
  Dino_BusSand_App_UI_UIPanel__Run_2200f98(param_1,uVar8,0);
                    /* catch() { ... } // from try @ 022e6788 with catch @ 022e67a4 */
                    /* catch() { ... } // from try @ 022e654c with catch @ 022e67b4 */
  return;
}

