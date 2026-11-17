/* IL2CPP: Dino.BusSand.App.UI.StreakRateHallBar$$InitRates
void Dino_BusSand_App_UI_StreakRateHallBar__InitRates (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakRateHallBar$$InitRates
   void Dino_BusSand_App_UI_StreakRateHallBar__InitRates (const MethodInfo* method); */

void Dino_BusSand_App_UI_StreakRateHallBar__InitRates_21dfa24(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  int iStack_54;
  
  if ((bRam0000000004f9bba6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae9a8);
    FUN_02132f7c(PTR_DAT_04cabb10);
    FUN_02132f7c(PTR_DAT_04cb0b90);
    FUN_02132f7c(PTR_DAT_04cb0b98);
    FUN_02132f7c(PTR_DAT_04cb0ba0);
    FUN_02132f7c(PTR_DAT_04cb0ba8);
    bRam0000000004f9bba6 = 1;
  }
  puVar6 = PTR_DAT_04cb0ba8;
  puVar5 = PTR_DAT_04cb0ba0;
  puVar4 = PTR_DAT_04cb0b98;
  puVar3 = PTR_DAT_04cb0b90;
  puVar2 = PTR_DAT_04cae9a8;
  puVar1 = PTR_DAT_04cabb10;
  iVar7 = 0;
  iStack_54 = 0;
  do {
    lVar8 = *(long *)puVar2;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar8 = *(long *)puVar2;
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x20);
    if (lVar8 == 0) goto LAB_022dfd0c;
    iStack_54 = Dino_BusSand_App_Meta_StreakRateFeature__RateNumber_224c86c(lVar8,iVar7,0);
    uVar9 = System_Int32__ToString_482d750(&iStack_54,0);
    uVar9 = System_String__Concat_46c82e0(*(undefined8 *)puVar1,uVar9,0);
    iVar7 = iVar7 + 1;
    lVar8 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    iStack_54 = iVar7;
    uVar10 = System_Int32__ToString_482d750(&iStack_54,0);
    uVar10 = System_String__Concat_46c82e0(*(undefined8 *)puVar3,uVar10,0);
    if (lVar8 == 0) goto LAB_022dfd0c;
    uVar10 = UnityEngine_Transform__Find_43d4bec(lVar8,uVar10,0);
    Dino_BusSand_App_UI_StreakRateHallBar__SetTexts_21e0a40(uVar10,uVar9);
    lVar8 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    iStack_54 = iVar7;
    uVar10 = System_Int32__ToString_482d750(&iStack_54,0);
    uVar10 = System_String__Concat_46d2b84(*(undefined8 *)puVar6,uVar10,*(undefined8 *)puVar4,0);
    if (lVar8 == 0) goto LAB_022dfd0c;
    uVar10 = UnityEngine_Transform__Find_43d4bec(lVar8,uVar10,0);
    Dino_BusSand_App_UI_StreakRateHallBar__SetTexts_21e0a40(uVar10,uVar9);
  } while (iVar7 != 3);
  lVar8 = *(long *)puVar2;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar2;
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x20);
  if (lVar8 != 0) {
    iVar7 = Dino_BusSand_App_Meta_StreakRateFeature__CurRateIndex_224cc70(lVar8,0);
    iStack_54 = iVar7 + 1;
    lVar8 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    uVar9 = System_Int32__ToString_482d750(&iStack_54,0);
    uVar9 = System_String__Concat_46d2b84(*(undefined8 *)puVar6,uVar9,*(undefined8 *)puVar4,0);
    if (lVar8 != 0) {
      lVar8 = UnityEngine_Transform__Find_43d4bec(lVar8,uVar9,0);
      lVar12 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
      if (lVar12 != 0) {
                    /* try { // try from 022dfc68 to 023dfc6b has its CatchHandler @ 022dfc6c */
                    /* catch() { ... } // from try @ 022df7a0 with catch @ 022dfc6c
                       catch() { ... } // from try @ 022dfc68 with catch @ 022dfc6c
                       try { // try from 022dfc6c to 023dfc7f has its CatchHandler @ 022df724 */
        lVar12 = UnityEngine_Transform__Find_43d4bec(lVar12,*(undefined8 *)puVar5,0);
        puVar1 = PTR_DAT_04ca9ae8;
        if (iVar7 < 3) {
          if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar8,0,0);
          if ((uVar11 & 1) != 0) {
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar12,0,0);
            if ((uVar11 & 1) != 0) {
              if ((lVar8 == 0) ||
                 (UnityEngine_Transform__get_position_43d0e48(lVar8,0), lVar12 == 0))
              goto LAB_022dfd0c;
              UnityEngine_Transform__set_position_43d0f1c(lVar12,0);
            }
          }
        }
        return;
      }
    }
  }
LAB_022dfd0c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

