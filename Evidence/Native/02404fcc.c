/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingTipsPanel$$OnOpen
void Dino_BusSand_App_UI_PlayerSettingTipsPanel__OnOpen (Dino_BusSand_App_UI_PlayerSettingTipsPanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PlayerSettingTipsPanel$$OnOpen
   void Dino_BusSand_App_UI_PlayerSettingTipsPanel__OnOpen
   (Dino_BusSand_App_UI_PlayerSettingTipsPanel_o* __this, Il2CppObject* param, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_PlayerSettingTipsPanel__OnOpen_2304fcc(long param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  
  if ((bRam0000000004f9c4f5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cada48);
    FUN_02132f7c(PTR_DAT_04cab550);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb7e50);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cb7e58);
    FUN_02132f7c(PTR_DAT_04cb7e60);
    FUN_02132f7c(PTR_DAT_04cb7e68);
    FUN_02132f7c(PTR_DAT_04cb1090);
    FUN_02132f7c(PTR_DAT_04cad948);
    FUN_02132f7c(PTR_DAT_04cb7cf8);
    bRam0000000004f9c4f5 = 1;
  }
  puVar6 = PTR_DAT_04cb7e58;
  puVar3 = PTR_DAT_04caa458;
  puVar2 = PTR_DAT_04ca9ae8;
  if (param_2 == (long *)0x0) {
    param_2 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    lVar11 = *(long *)PTR_DAT_04caa458;
    plVar13 = param_2;
    if (*param_2 != lVar11) {
      plVar13 = (long *)0x0;
    }
    *(long **)(param_1 + 0x38) = plVar13;
    if (*param_2 != lVar11) {
      param_2 = (long *)0x0;
    }
  }
  thunk_FUN_02134474(param_1 + 0x38,param_2);
  uVar8 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar6,0);
  lVar11 = Dino_BusSand_App_UI_CommonHeadView__Of_22cf064(uVar8,0);
  lVar12 = *(long *)puVar2;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar12);
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
  if ((uVar9 & 1) != 0) {
    if (lVar11 == 0) goto LAB_02405374;
    Dino_BusSand_App_UI_CommonHeadView__InitPlayer_22cf880(lVar11,0);
  }
  lVar11 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cb1090,0);
  lVar12 = *(long *)puVar2;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar12);
  }
  uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
  if ((uVar9 & 1) != 0) {
    if ((lVar11 == 0) ||
       (lVar11 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                           (lVar11,1,*(undefined8 *)PTR_DAT_04cada48), puVar5 = PTR_DAT_04cb7e68,
       puVar4 = PTR_DAT_04cab550, puVar2 = PTR_DAT_04ca9d18, lVar11 == 0)) {
LAB_02405374:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = *(uint *)(lVar11 + 0x18);
    if (0 < (int)uVar1) {
      uVar15 = 0;
      do {
        if (uVar1 <= uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        lVar14 = *(long *)puVar2;
        lVar12 = *(long *)(lVar14 + 0x38);
        plVar13 = *(long **)(lVar11 + (long)(int)uVar15 * 8 + 0x20);
        if (lVar12 == 0) {
          FUN_0216b4cc(lVar14);
          lVar12 = *(long *)(lVar14 + 0x38);
        }
        lVar12 = *(long *)(lVar12 + 0x10);
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_0216b470();
        }
        if (*(int *)(lVar12 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
        if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_0216b470();
        }
        uVar8 = **(undefined8 **)(lVar12 + 0xb8);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar4);
        }
        uVar8 = Dino_BusSand_App_Lang__Get_215f9c0(*(undefined8 *)puVar5,uVar8,0);
        if (plVar13 == (long *)0x0) goto LAB_02405374;
        (**(code **)(*plVar13 + 0x518))(plVar13,uVar8,*(undefined8 *)(*plVar13 + 0x520));
        uVar1 = *(uint *)(lVar11 + 0x18);
        uVar15 = uVar15 + 1;
      } while ((int)uVar15 < (int)uVar1);
    }
  }
  puVar7 = PTR_DAT_04cb7e60;
  puVar5 = PTR_DAT_04cb7e50;
  puVar4 = PTR_DAT_04cb7cf8;
  puVar2 = PTR_DAT_04cad948;
  uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Action___ctor_47b5ed0(uVar8,param_1,*(undefined8 *)puVar5,0);
  Dino_BusSand_App_UI_UIPanel__Btn_2200cb0(param_1,*(undefined8 *)puVar4,uVar8,0,0,0);
  uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Action___ctor_47b5ed0(uVar8,param_1,*(undefined8 *)puVar5,0);
  Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
            (param_1,*(undefined8 *)puVar6,uVar8,1,*(undefined8 *)puVar2,0);
  plVar13 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar7,0);
  if ((plVar13 != (long *)0x0) && (*plVar13 != *(long *)PTR_DAT_04cabdb0)) {
    plVar13 = (long *)0x0;
  }
  lVar11 = Dino_BusSand_App_UI_PlayerSettingTipsPanel__ArrowBob_230537c(plVar13);
  uVar9 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0,0);
  if ((uVar9 & 1) == 0) {
    return;
  }
  if (lVar11 == 0) {
    thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
    uVar10 = thunk_FUN_0216e89c();
    uVar8 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
    System_NullReferenceException___ctor_483267c(uVar10,uVar8,0);
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
    uVar10 = thunk_FUN_0216e89c();
    uVar8 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
    System_ArgumentException___ctor_47b660c(uVar10,uVar8,0);
  }
  uVar8 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
  FUN_021330e8(uVar10,uVar8);
}

