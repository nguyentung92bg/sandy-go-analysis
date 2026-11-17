/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel$$OnOpen
void Dino_BusSand_App_UI_ClimbTowerPanel__OnOpen (Dino_BusSand_App_UI_ClimbTowerPanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerPanel$$OnOpen
   void Dino_BusSand_App_UI_ClimbTowerPanel__OnOpen (Dino_BusSand_App_UI_ClimbTowerPanel_o* __this,
   Il2CppObject* param, const MethodInfo* method); */

void Dino_BusSand_App_UI_ClimbTowerPanel__OnOpen_21a3b90(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  
  puVar3 = PTR_DAT_04cae978;
  if ((bRam0000000004f9ba2e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cae6e8);
    FUN_02132f7c(PTR_DAT_04cae998);
    FUN_02132f7c(PTR_DAT_04cae9a0);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cae978);
    FUN_02132f7c(PTR_DAT_04cae9a8);
    FUN_02132f7c(PTR_DAT_04cae9b0);
    FUN_02132f7c(PTR_DAT_04cae9b8);
    FUN_02132f7c(PTR_DAT_04cae9c0);
    FUN_02132f7c(PTR_DAT_04cae9c8);
    FUN_02132f7c(PTR_DAT_04cae9d0);
    FUN_02132f7c(PTR_DAT_04cae8f0);
    FUN_02132f7c(PTR_DAT_04cae7a0);
    FUN_02132f7c(PTR_DAT_04cad880);
    FUN_02132f7c(PTR_DAT_04cad940);
    FUN_02132f7c(PTR_DAT_04cae9d8);
    FUN_02132f7c(PTR_DAT_04cad948);
    FUN_02132f7c(PTR_DAT_04cada08);
    FUN_02132f7c(PTR_DAT_04cae9e0);
    FUN_02132f7c(PTR_DAT_04cae9e8);
    bRam0000000004f9ba2e = 1;
  }
  if (param_2 == (long *)0x0) {
LAB_022a3d14:
    param_2 = (long *)thunk_FUN_0216e89c();
    System_Object___ctor_4870e5c(param_2,0);
  }
  else {
    bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3))
    goto LAB_022a3d14;
  }
  if (param_1 != 0) {
    *(long *)(param_1 + 0x40) = (long)param_2;
    thunk_FUN_02134474((long *)(param_1 + 0x40),param_2);
    lVar9 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_I_2228de4(0);
    plVar14 = (long *)(param_1 + 0x38);
    *plVar14 = lVar9;
    thunk_FUN_02134474(plVar14,lVar9);
    puVar5 = PTR_DAT_04cae9e0;
    puVar2 = PTR_DAT_04cae6e8;
    puVar3 = PTR_DAT_04ca9d18;
    lVar9 = *plVar14;
    if (lVar9 == 0) {
      lVar9 = Dino_BusSand_App_UI_ClimbTowerPanel__CloseNextFrame_21a422c(param_1);
LAB_022a41fc:
      uVar12 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0,0);
      if ((uVar12 & 1) == 0) {
        return;
      }
      if (lVar9 == 0) {
        thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
        uVar16 = thunk_FUN_0216e89c();
        uVar10 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
        System_NullReferenceException___ctor_483267c(uVar16,uVar10,0);
      }
      else {
        uVar12 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
        if ((uVar12 & 1) != 0) {
          if ((bRam0000000004fa84ef & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf7890);
            bRam0000000004fa84ef = 1;
          }
          if (param_1 != 0) {
            lVar15 = *(long *)(param_1 + 0x10);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
            }
            if (pcRam0000000004fa8560 == (code *)0x0) {
              pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
            }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004fa8560)(lVar15,lVar9);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        thunk_FUN_021985a8(PTR_DAT_04caa3a8);
        uVar16 = thunk_FUN_0216e89c();
        uVar10 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
        System_ArgumentException___ctor_47b660c(uVar16,uVar10,0);
      }
      uVar10 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar16,uVar10);
    }
    if (*(char *)(lVar9 + 0x18) != '\0') {
      *(undefined1 *)(lVar9 + 0x18) = 0;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_ClimbTowerHallButton__UpdateState_219f894();
    }
    uVar10 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar5,0);
    lVar15 = *(long *)puVar3;
    lVar9 = *(long *)(lVar15 + 0x38);
    if (lVar9 == 0) {
      FUN_0216b4cc(lVar15);
      lVar9 = *(long *)(lVar15 + 0x38);
    }
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0216b470();
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar2 = PTR_DAT_04cab550;
    lVar9 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0216b470();
    }
    puVar4 = PTR_DAT_04cae9d8;
    puVar5 = PTR_DAT_04cae9a8;
    uVar16 = **(undefined8 **)(lVar9 + 0xb8);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    puVar2 = PTR_DAT_04cae8f0;
    uVar16 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)puVar4,uVar16,0);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar5);
    }
    Dino_BusSand_App_UI_StreakRateHallBar__SetTexts_21e0a40(uVar10,uVar16,0);
    uVar10 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar2,0);
    lVar15 = *(long *)puVar3;
    lVar9 = *(long *)(lVar15 + 0x38);
    if (lVar9 == 0) {
      FUN_0216b4cc(lVar15);
      lVar9 = *(long *)(lVar15 + 0x38);
    }
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0216b470();
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar5 = PTR_DAT_04cae9c8;
    puVar2 = PTR_DAT_04cae7a0;
    lVar9 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0216b470();
    }
    uVar16 = Dino_BusSand_App_Lang__Get_215f9c0
                       (*(undefined8 *)puVar2,**(undefined8 **)(lVar9 + 0xb8),0);
    Dino_BusSand_App_UI_StreakRateHallBar__SetTexts_21e0a40(uVar10,uVar16,0);
    uVar10 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar5,0);
    lVar15 = *(long *)puVar3;
    lVar9 = *(long *)(lVar15 + 0x38);
    if (lVar9 == 0) {
      FUN_0216b4cc(lVar15);
      lVar9 = *(long *)(lVar15 + 0x38);
    }
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0216b470();
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    puVar7 = PTR_DAT_04cae9b8;
    puVar6 = PTR_DAT_04cae998;
    puVar4 = PTR_DAT_04cada08;
    puVar5 = PTR_DAT_04cad948;
    puVar2 = PTR_DAT_04cad940;
    puVar3 = PTR_DAT_04caa458;
    lVar9 = *(long *)(*(long *)(lVar15 + 0x38) + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_0216b470();
    }
    uVar16 = Dino_BusSand_App_Lang__Get_215f9c0
                       (*(undefined8 *)puVar4,**(undefined8 **)(lVar9 + 0xb8),0);
    Dino_BusSand_App_UI_StreakRateHallBar__SetTexts_21e0a40(uVar10,uVar16,0);
    uVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
    System_Action___ctor_47b5ed0(uVar10,param_1,*(undefined8 *)puVar6,0);
    Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
              (param_1,*(undefined8 *)puVar2,uVar10,1,*(undefined8 *)puVar5,0);
    lVar9 = *(long *)puVar7;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = *(long *)puVar7;
    }
    puVar6 = PTR_DAT_04cae9c0;
    puVar4 = PTR_DAT_04cad880;
    puVar2 = PTR_DAT_04ca9ae8;
    puVar13 = *(undefined8 **)(lVar9 + 0xb8);
    lVar15 = puVar13[1];
    uVar10 = *(undefined8 *)PTR_DAT_04cae9d0;
    if (lVar15 == 0) {
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        puVar13 = *(undefined8 **)(*(long *)puVar7 + 0xb8);
      }
      uVar16 = *puVar13;
      lVar15 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
      System_Action___ctor_47b5ed0(lVar15,uVar16,*(undefined8 *)PTR_DAT_04cae9b0,0);
      plVar11 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
      *plVar11 = lVar15;
      thunk_FUN_02134474(plVar11,lVar15);
    }
    puVar8 = PTR_DAT_04cae9e8;
    puVar7 = PTR_DAT_04cae9a0;
    Dino_BusSand_App_UI_UIPanel__Btn_2200cb0(param_1,uVar10,lVar15,1,*(undefined8 *)puVar5,0);
    uVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
    System_Action___ctor_47b5ed0(uVar10,param_1,*(undefined8 *)puVar7,0);
    Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
              (param_1,*(undefined8 *)puVar8,uVar10,1,*(undefined8 *)puVar5,0);
    Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)PTR_DAT_04cae8f0,0,0);
    Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)puVar4,1,0);
    lVar9 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar6,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
    uVar12 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
    if ((uVar12 & 1) != 0) {
      if ((lVar9 == 0) ||
         (lVar9 = UnityEngine_Component__get_gameObject_43bcde8(lVar9,0), lVar9 == 0))
      goto LAB_022a4228;
      UnityEngine_GameObject__SetActive_43c1408(lVar9,0,0);
    }
    if (*plVar14 != 0) {
      uVar10 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_WinPoints_2229334(*plVar14,0);
      *(undefined8 *)(param_1 + 0xa8) = uVar10;
      thunk_FUN_02134474();
      Dino_BusSand_App_UI_ClimbTowerPanel__BuildList_21a4298(param_1);
      Dino_BusSand_App_UI_ClimbTowerPanel__InitTime_21a4dec(param_1);
      if (*(long *)(param_1 + 0x38) != 0) {
        uVar12 = Dino_BusSand_App_Meta_ClimbTowerFeature__get_IsGuideDone_2229828
                           (*(long *)(param_1 + 0x38),0);
        if ((uVar12 & 1) == 0) {
          if (*plVar14 == 0) goto LAB_022a4228;
          Dino_BusSand_App_Meta_ClimbTowerFeature__SetGuideDone_222a86c(*plVar14,0);
        }
        lVar9 = Dino_BusSand_App_UI_ClimbTowerPanel__StartAnim_21a4f3c(param_1);
        goto LAB_022a41fc;
      }
    }
  }
LAB_022a4228:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

