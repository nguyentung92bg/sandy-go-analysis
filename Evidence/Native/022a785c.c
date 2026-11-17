/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerTipsPanel$$OnOpen
void Dino_BusSand_App_UI_ClimbTowerTipsPanel__OnOpen (Dino_BusSand_App_UI_ClimbTowerTipsPanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerTipsPanel$$OnOpen
   void Dino_BusSand_App_UI_ClimbTowerTipsPanel__OnOpen (Dino_BusSand_App_UI_ClimbTowerTipsPanel_o*
   __this, Il2CppObject* param, const MethodInfo* method); */

void Dino_BusSand_App_UI_ClimbTowerTipsPanel__OnOpen_21a785c(long param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  
  if ((bRam0000000004f9ba4b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04caeb58);
    FUN_02132f7c(PTR_DAT_04caeb60);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae9a8);
    FUN_02132f7c(PTR_DAT_04caeb68);
    FUN_02132f7c(PTR_DAT_04caeb70);
    FUN_02132f7c(PTR_DAT_04caeb78);
    FUN_02132f7c(PTR_DAT_04caeb80);
    FUN_02132f7c(PTR_DAT_04cadd78);
    FUN_02132f7c(PTR_DAT_04caeb88);
    FUN_02132f7c(PTR_DAT_04caeb90);
    FUN_02132f7c(PTR_DAT_04caeb98);
    FUN_02132f7c(PTR_DAT_04caeba0);
    FUN_02132f7c(PTR_DAT_04cae9d8);
    FUN_02132f7c(PTR_DAT_04caeba8);
    FUN_02132f7c(PTR_DAT_04caebb0);
    FUN_02132f7c(PTR_DAT_04caebb8);
    bRam0000000004f9ba4b = 1;
  }
  puVar5 = PTR_DAT_04caeba8;
  puVar4 = PTR_DAT_04caa458;
  puVar3 = PTR_DAT_04ca9d18;
  if (param_2 == (long *)0x0) {
    param_2 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    lVar11 = *(long *)PTR_DAT_04caa458;
    plVar1 = param_2;
    if (*param_2 != lVar11) {
      plVar1 = (long *)0x0;
    }
    *(long **)(param_1 + 0x38) = plVar1;
    if (*param_2 != lVar11) {
      param_2 = (long *)0x0;
    }
  }
  thunk_FUN_02134474(param_1 + 0x38,param_2);
  uVar9 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar5,0);
  lVar12 = *(long *)puVar3;
  lVar11 = *(long *)(lVar12 + 0x38);
  if (lVar11 == 0) {
    FUN_0216b4cc(lVar12);
    lVar11 = *(long *)(lVar12 + 0x38);
  }
  lVar11 = *(long *)(lVar11 + 0x10);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_0216b470();
  }
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar5 = PTR_DAT_04cab550;
  lVar11 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_0216b470();
  }
  puVar2 = PTR_DAT_04cae9d8;
  puVar6 = PTR_DAT_04cae9a8;
  lVar12 = *(long *)puVar5;
  uVar13 = **(undefined8 **)(lVar11 + 0xb8);
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar12);
  }
  puVar7 = PTR_DAT_04caeb90;
  uVar13 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)puVar2,uVar13,0);
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar6);
  }
  Dino_BusSand_App_UI_StreakRateHallBar__SetTexts_21e0a40(uVar9,uVar13,0);
  uVar9 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar7,0);
  lVar12 = *(long *)puVar3;
  lVar11 = *(long *)(lVar12 + 0x38);
  if (lVar11 == 0) {
    FUN_0216b4cc(lVar12);
    lVar11 = *(long *)(lVar12 + 0x38);
  }
  lVar11 = *(long *)(lVar11 + 0x10);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_0216b470();
  }
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar7 = PTR_DAT_04caebb0;
  puVar2 = PTR_DAT_04caeb98;
  lVar11 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_0216b470();
  }
  uVar13 = Dino_BusSand_App_Meta_StreakTowerUtil__L_2251bd4
                     (*(undefined8 *)puVar7,**(undefined8 **)(lVar11 + 0xb8),0);
  Dino_BusSand_App_UI_StreakRateHallBar__SetTexts_21e0a40(uVar9,uVar13,0);
  uVar9 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar2,0);
  lVar12 = *(long *)puVar3;
  lVar11 = *(long *)(lVar12 + 0x38);
  if (lVar11 == 0) {
    FUN_0216b4cc(lVar12);
    lVar11 = *(long *)(lVar12 + 0x38);
  }
  lVar11 = *(long *)(lVar11 + 0x10);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_0216b470();
  }
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar7 = PTR_DAT_04caebb8;
  puVar2 = PTR_DAT_04caeb78;
  lVar11 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_0216b470();
  }
  uVar13 = Dino_BusSand_App_Meta_StreakTowerUtil__L_2251bd4
                     (*(undefined8 *)puVar2,**(undefined8 **)(lVar11 + 0xb8),0);
  Dino_BusSand_App_UI_StreakRateHallBar__SetTexts_21e0a40(uVar9,uVar13,0);
  uVar9 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar7,0);
  lVar12 = *(long *)puVar3;
  lVar11 = *(long *)(lVar12 + 0x38);
  if (lVar11 == 0) {
    FUN_0216b4cc(lVar12);
    lVar11 = *(long *)(lVar12 + 0x38);
  }
  lVar11 = *(long *)(lVar11 + 0x10);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_0216b470();
  }
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar8 = PTR_DAT_04caeba0;
  puVar7 = PTR_DAT_04caeb80;
  puVar2 = PTR_DAT_04ca9ae8;
  lVar11 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_0216b470();
  }
  uVar13 = Dino_BusSand_App_Meta_StreakTowerUtil__L_2251bd4
                     (*(undefined8 *)puVar7,**(undefined8 **)(lVar11 + 0xb8),0);
  Dino_BusSand_App_UI_StreakRateHallBar__SetTexts_21e0a40(uVar9,uVar13,0);
  uVar9 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar8,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  puVar7 = PTR_DAT_04caeb88;
  uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
  if ((uVar10 & 1) != 0) {
    lVar12 = *(long *)puVar3;
    lVar11 = *(long *)(lVar12 + 0x38);
    if (lVar11 == 0) {
      FUN_0216b4cc(lVar12);
      lVar11 = *(long *)(lVar12 + 0x38);
    }
    lVar11 = *(long *)(lVar11 + 0x10);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_0216b470();
    }
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar8 = PTR_DAT_04caeb68;
    lVar11 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_0216b470();
    }
    uVar13 = Dino_BusSand_App_Meta_StreakTowerUtil__L_2251bd4
                       (*(undefined8 *)puVar8,**(undefined8 **)(lVar11 + 0xb8),0);
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar6);
    }
    Dino_BusSand_App_UI_StreakRateHallBar__SetTexts_21e0a40(uVar9,uVar13,0);
  }
  uVar9 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar7,0);
  lVar12 = *(long *)puVar3;
  lVar11 = *(long *)(lVar12 + 0x38);
  if (lVar11 == 0) {
    FUN_0216b4cc(lVar12);
    lVar11 = *(long *)(lVar12 + 0x38);
  }
  lVar11 = *(long *)(lVar11 + 0x10);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_0216b470();
  }
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar11 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_0216b470();
  }
  puVar3 = PTR_DAT_04caeb70;
  lVar12 = *(long *)puVar5;
  uVar13 = **(undefined8 **)(lVar11 + 0xb8);
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar12);
  }
  puVar8 = PTR_DAT_04caeb60;
  puVar7 = PTR_DAT_04caeb58;
  puVar5 = PTR_DAT_04cadd78;
  uVar13 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)puVar3,uVar13,0);
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar6);
  }
  Dino_BusSand_App_UI_StreakRateHallBar__SetTexts_21e0a40(uVar9,uVar13,0);
  uVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  System_Action___ctor_47b5ed0(uVar9,param_1,*(undefined8 *)puVar7,0);
  Dino_BusSand_App_UI_UIPanel__Btn_2200cb0(param_1,*(undefined8 *)puVar5,uVar9,0,0,0);
  lVar11 = UnityEngine_Component__GetComponentInChildren_object__26f99c4
                     (param_1,*(undefined8 *)puVar8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
  uVar14 = 0;
  if ((uVar10 & 1) != 0) {
    if (lVar11 == 0) {
LAB_022a7f34:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar9 = UnityEngine_Animation__get_clip_43341a8(lVar11,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar10 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
    if ((uVar10 & 1) != 0) {
      lVar11 = UnityEngine_Animation__get_clip_43341a8(lVar11,0);
      if (lVar11 == 0) goto LAB_022a7f34;
      uVar14 = UnityEngine_AnimationClip__get_length_4338218(lVar11,0);
    }
  }
  lVar11 = Dino_BusSand_App_UI_ClimbTowerTipsPanel__Wait_21a7f38(uVar14,param_1);
  uVar10 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0,0);
  if ((uVar10 & 1) == 0) {
    return;
  }
  if (lVar11 == 0) {
    thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
    uVar13 = thunk_FUN_0216e89c();
    uVar9 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
    System_NullReferenceException___ctor_483267c(uVar13,uVar9,0);
  }
  else {
    uVar10 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
    if ((uVar10 & 1) != 0) {
      if ((bRam0000000004fa84ef & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf7890);
        bRam0000000004fa84ef = 1;
      }
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar12 = *(long *)(param_1 + 0x10);
      if (lVar12 != 0) {
        if (pcRam0000000004fa8560 == (code *)0x0) {
          pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
        }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa8560)(lVar12,lVar11);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
    }
    thunk_FUN_021985a8(PTR_DAT_04caa3a8);
    uVar13 = thunk_FUN_0216e89c();
    uVar9 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
    System_ArgumentException___ctor_47b660c(uVar13,uVar9,0);
  }
  uVar9 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
  FUN_021330e8(uVar13,uVar9);
}

