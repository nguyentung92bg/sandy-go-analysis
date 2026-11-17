/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinFinishGetPanel$$OnOpen
void Dino_BusSand_App_UI_GoldenCoinFinishGetPanel__OnOpen (Dino_BusSand_App_UI_GoldenCoinFinishGetPanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GoldenCoinFinishGetPanel$$OnOpen
   void Dino_BusSand_App_UI_GoldenCoinFinishGetPanel__OnOpen
   (Dino_BusSand_App_UI_GoldenCoinFinishGetPanel_o* __this, Il2CppObject* param, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_GoldenCoinFinishGetPanel__OnOpen_21ae508(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  
  puVar2 = PTR_DAT_04caee40;
  if ((bRam0000000004f9ba7c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04caec48);
    FUN_02132f7c(PTR_DAT_04caec68);
    FUN_02132f7c(PTR_DAT_04caef58);
    FUN_02132f7c(PTR_DAT_04caee40);
    FUN_02132f7c(PTR_DAT_04caef60);
    FUN_02132f7c(PTR_DAT_04caef68);
    FUN_02132f7c(PTR_DAT_04caef70);
    FUN_02132f7c(PTR_DAT_04cadd78);
    FUN_02132f7c(PTR_DAT_04caef78);
    FUN_02132f7c(PTR_DAT_04caef80);
    FUN_02132f7c(PTR_DAT_04caeba8);
    FUN_02132f7c(PTR_DAT_04cad948);
    FUN_02132f7c(PTR_DAT_04caef88);
    FUN_02132f7c(PTR_DAT_04cab288);
    bRam0000000004f9ba7c = 1;
  }
  if (param_2 == (long *)0x0) {
LAB_022ae634:
    param_2 = (long *)thunk_FUN_0216e89c();
    System_Object___ctor_4870e5c(param_2,0);
  }
  else {
    bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2))
    goto LAB_022ae634;
  }
  puVar2 = PTR_DAT_04caec48;
  if (param_1 != 0) {
    plVar17 = (long *)(param_1 + 0x38);
    *plVar17 = (long)param_2;
    thunk_FUN_02134474(plVar17,param_2);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar12 = Dino_BusSand_App_Meta_GiftPackFeature__get_I_2234a44(0);
    uVar11 = 0;
    if (lVar12 != 0) {
      if (*plVar17 == 0) goto LAB_022ae8e8;
      uVar11 = Dino_BusSand_App_Meta_GiftPackFeature__UnclaimedGoldenCoins_223d5dc
                         (lVar12,*(undefined4 *)(*plVar17 + 0x10),0);
    }
    puVar2 = PTR_DAT_04ca9d18;
    *(undefined4 *)(param_1 + 0x40) = uVar11;
    lVar16 = *(long *)puVar2;
    lVar12 = *(long *)(lVar16 + 0x38);
    if (lVar12 == 0) {
      FUN_0216b4cc(lVar16);
      lVar12 = *(long *)(lVar16 + 0x38);
    }
    lVar12 = *(long *)(lVar12 + 0x10);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_0216b470();
    }
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar9 = PTR_DAT_04caef78;
    puVar7 = PTR_DAT_04caeba8;
    lVar12 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_0216b470();
    }
    Dino_BusSand_App_UI_UIPanel__TxtKey_2200a70
              (param_1,*(undefined8 *)puVar7,*(undefined8 *)puVar9,**(undefined8 **)(lVar12 + 0xb8),
               0);
    lVar16 = *(long *)puVar2;
    lVar12 = *(long *)(lVar16 + 0x38);
    if (lVar12 == 0) {
      FUN_0216b4cc(lVar16);
      lVar12 = *(long *)(lVar16 + 0x38);
    }
    lVar12 = *(long *)(lVar12 + 0x10);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_0216b470();
    }
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar9 = PTR_DAT_04caef70;
    puVar7 = PTR_DAT_04caef68;
    lVar12 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_0216b470();
    }
    Dino_BusSand_App_UI_UIPanel__TxtKey_2200a70
              (param_1,*(undefined8 *)puVar7,*(undefined8 *)puVar9,**(undefined8 **)(lVar12 + 0xb8),
               0);
    lVar16 = *(long *)puVar2;
    lVar12 = *(long *)(lVar16 + 0x38);
    if (lVar12 == 0) {
      FUN_0216b4cc(lVar16);
      lVar12 = *(long *)(lVar16 + 0x38);
    }
    lVar12 = *(long *)(lVar12 + 0x10);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_0216b470();
    }
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar10 = PTR_DAT_04caef88;
    puVar9 = PTR_DAT_04caef80;
    puVar7 = PTR_DAT_04caef60;
    puVar2 = PTR_DAT_04caec68;
    lVar12 = *(long *)(*(long *)(lVar16 + 0x38) + 0x10);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_0216b470();
    }
    puVar8 = PTR_DAT_04caef58;
    puVar6 = PTR_DAT_04cadd78;
    puVar5 = PTR_DAT_04cad948;
    puVar4 = PTR_DAT_04cab288;
    puVar3 = PTR_DAT_04caa458;
    Dino_BusSand_App_UI_UIPanel__TxtKey_2200a70
              (param_1,*(undefined8 *)puVar10,*(undefined8 *)puVar9,**(undefined8 **)(lVar12 + 0xb8)
               ,0);
    uVar13 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar7,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    Dino_BusSand_App_UI_GiftPackUi__SetTexts_21a9508(uVar13,*(undefined8 *)puVar4);
    uVar13 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
    System_Action___ctor_47b5ed0(uVar13,param_1,*(undefined8 *)puVar8,0);
    Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
              (param_1,*(undefined8 *)puVar6,uVar13,0,*(undefined8 *)puVar5,0);
    lVar12 = Dino_BusSand_App_UI_GoldenCoinFinishGetPanel__CountUp_21ae8ec(param_1);
    uVar14 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0,0);
    if ((uVar14 & 1) != 0) {
      if (lVar12 == 0) {
        thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
        uVar15 = thunk_FUN_0216e89c();
        uVar13 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
        System_NullReferenceException___ctor_483267c(uVar15,uVar13,0);
      }
      else {
        uVar14 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
        if ((uVar14 & 1) != 0) {
          if ((bRam0000000004fa84ef & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf7890);
            bRam0000000004fa84ef = 1;
          }
          if (param_1 != 0) {
            lVar16 = *(long *)(param_1 + 0x10);
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
            }
            if (pcRam0000000004fa8560 == (code *)0x0) {
              pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
            }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004fa8560)(lVar16,lVar12);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        thunk_FUN_021985a8(PTR_DAT_04caa3a8);
        uVar15 = thunk_FUN_0216e89c();
        uVar13 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
        System_ArgumentException___ctor_47b660c(uVar15,uVar13,0);
      }
      uVar13 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar15,uVar13);
    }
    return;
  }
LAB_022ae8e8:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

