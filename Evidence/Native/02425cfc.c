/* IL2CPP: Dino.BusSand.App.UI.RewardPopup.<>c__DisplayClass12_0$$<BuildButtons>b__2
void Dino_BusSand_App_UI_RewardPopup___c__DisplayClass12_0___BuildButtons_b__2 (Dino_BusSand_App_UI_RewardPopup___c__DisplayClass12_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.RewardPopup.<>c__DisplayClass12_0$$<BuildButtons>b__2
   void Dino_BusSand_App_UI_RewardPopup___c__DisplayClass12_0___BuildButtons_b__2
   (Dino_BusSand_App_UI_RewardPopup___c__DisplayClass12_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_RewardPopup___c__DisplayClass12_0___BuildButtons_b__2_2325cfc(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  plVar12 = *(long **)(param_1 + 0x10);
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((((*(char *)((long)plVar12 + 0x42) == '\0') || ((char)plVar12[8] != '\0')) ||
      (*(char *)((long)plVar12 + 0x41) != '\0')) || (*(char *)((long)plVar12 + 0x2c) != '\0')) {
    return;
  }
  *(undefined1 *)((long)plVar12 + 0x41) = 1;
  puVar2 = PTR_DAT_04cb8c80;
  if ((bRam0000000004f9c5db & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04caece0);
    FUN_02132f7c(PTR_DAT_04caece8);
    FUN_02132f7c(PTR_DAT_04caecf0);
    FUN_02132f7c(PTR_DAT_04cadd90);
    FUN_02132f7c(PTR_DAT_04cadd98);
    FUN_02132f7c(PTR_DAT_04caed00);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac1e8);
    FUN_02132f7c(PTR_DAT_04cb8c88);
    FUN_02132f7c(PTR_DAT_04cb8c80);
    bRam0000000004f9c5db = 1;
  }
  uStack_88 = 0;
  uStack_90 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar8,0);
  if (lVar8 != 0) {
    *(long *)(lVar8 + 0x10) = (long)plVar12;
    thunk_FUN_02134474((long *)(lVar8 + 0x10),plVar12);
    lVar9 = (**(code **)(*plVar12 + 0x1c8))(plVar12,1,*(undefined8 *)(*plVar12 + 0x1d0));
    plVar13 = (long *)(lVar8 + 0x18);
    *plVar13 = lVar9;
    thunk_FUN_02134474(plVar13,lVar9);
    puVar7 = PTR_DAT_04cb8c88;
    puVar6 = PTR_DAT_04caece8;
    puVar5 = PTR_DAT_04caece0;
    puVar4 = PTR_DAT_04cac1e8;
    puVar3 = PTR_DAT_04caa458;
    puVar2 = PTR_DAT_04ca9ae8;
    if (*plVar13 != 0) {
      System_Collections_Generic_List_KeyValuePair_int__long____GetEnumerator_3966258
                (&uStack_90,*plVar13,*(undefined8 *)PTR_DAT_04caed00);
      lVar9 = 0;
      while (uVar10 = System_Collections_Generic_List_Enumerator_KeyValuePair_int__long____MoveNext_35b53dc
                                (&uStack_90,*(undefined8 *)puVar6), (uVar10 & 1) != 0) {
        lVar14 = lStack_78;
        if ((int)uStack_80 != 0x3e9) {
          lVar14 = 0;
        }
        lVar9 = lVar14 + lVar9;
      }
      System_Collections_Generic_List_Enumerator_KeyValuePair_int__long____Dispose_35b53d8
                (&uStack_90,*(undefined8 *)puVar5);
      lVar14 = plVar12[7];
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar14,0,0);
      if (((uVar10 & 1) != 0) && (0 < lVar9)) {
        if (plVar12[7] == 0) goto LAB_02425288;
        Dino_BusSand_App_UI_KitTopBar__Hold_2283310(plVar12[7],lVar9,0,0);
      }
      (**(code **)(*plVar12 + 0x1f8))
                (plVar12,*(undefined8 *)(lVar8 + 0x18),1,*(undefined8 *)(*plVar12 + 0x200));
      uVar1 = _UNK_00e20328;
      uVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
      System_Action___ctor_47b5ed0(uVar11,lVar8,*(undefined8 *)puVar7,0);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar8 = Dino_BusSand_App_Tween__Delayed_2161264(uVar1,uVar11,0);
      if ((lVar8 != 0) &&
         (lVar8 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar8,1,0), lVar8 != 0)) {
        Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar8,plVar12,0);
        return;
      }
    }
  }
LAB_02425288:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

