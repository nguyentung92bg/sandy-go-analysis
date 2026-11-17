/* IL2CPP: Dino.BusSand.App.UI.ActivityContinueUi$$ApplyLevelStyle
void Dino_BusSand_App_UI_ActivityContinueUi__ApplyLevelStyle (Dino_BusSand_App_UI_UIPanel_o* p, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ActivityContinueUi$$ApplyLevelStyle
   void Dino_BusSand_App_UI_ActivityContinueUi__ApplyLevelStyle (Dino_BusSand_App_UI_UIPanel_o* p,
   const MethodInfo* method); */

long Dino_BusSand_App_UI_ActivityContinueUi__ApplyLevelStyle_2187a30(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9b95f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacb18);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cad970);
    FUN_02132f7c(PTR_DAT_04cad9c0);
    FUN_02132f7c(PTR_DAT_04cada50);
    FUN_02132f7c(PTR_DAT_04cada58);
    FUN_02132f7c(PTR_DAT_04cada00);
    FUN_02132f7c(PTR_DAT_04cada60);
    bRam0000000004f9b95f = 1;
  }
  puVar2 = PTR_DAT_04cacb18;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar9 = Dino_BusSand_App_Levels_LevelDatabase__DesignLevelId_229ad40(uVar7,0);
  iVar8 = Dino_BusSand_App_Levels_LevelDatabase__TypeOf_229adf4(uVar9,0);
  puVar5 = PTR_DAT_04cada60;
  puVar4 = PTR_DAT_04cada50;
  puVar3 = PTR_DAT_04cada00;
  puVar2 = PTR_DAT_04cad9c0;
  puVar1 = PTR_DAT_04cad970;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  bVar6 = iVar8 == 1;
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)PTR_DAT_04cada58,bVar6,0);
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)puVar5,iVar8 == 2,0);
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)puVar4,iVar8 == 0,0);
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)puVar1,iVar8 == 0,0);
  Dino_BusSand_App_UI_UIPanel__Show_21f4018(param_1,*(undefined8 *)puVar3,iVar8 == 2,0);
  puVar1 = PTR_DAT_04ca9ae8;
  uVar9 = *(undefined8 *)puVar2;
  if ((bRam0000000004f9bc96 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8,uVar9,bVar6,0);
    bRam0000000004f9bc96 = 1;
  }
  lVar10 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,uVar9);
  lVar14 = *(long *)puVar1;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar14);
  }
  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
  if ((uVar11 & 1) != 0) {
    if ((lVar10 == 0) ||
       (lVar14 = UnityEngine_Component__get_gameObject_43bcde8(lVar10,0), lVar14 == 0))
    goto LAB_022f4104;
    UnityEngine_GameObject__SetActive_43c1408(lVar14,bVar6,0);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar11 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
  if ((uVar11 & 1) == 0) {
    return 0;
  }
  if (lVar10 != 0) {
    if ((bRam0000000004fa8307 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf7648,0);
      FUN_02132f7c(PTR_DAT_04cf7650);
      bRam0000000004fa8307 = 1;
    }
    puVar1 = PTR_DAT_04cf7650;
    if (lVar10 != 0) {
      lVar14 = *(long *)(lVar10 + 0x10);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar10,0);
      }
      if (pcRam0000000004fa8318 == (code *)0x0) {
        pcRam0000000004fa8318 = (code *)FUN_02132f40(&UNK_00e61486);
      }
      uVar11 = (*pcRam0000000004fa8318)(lVar14);
      lVar10 = *(long *)puVar1;
      if (*(long *)(lVar10 + 0x38) == 0) {
        FUN_0216b4cc(lVar10);
      }
      if (uVar11 != 0) {
        if (cRam0000000004f9d849 == '\0') {
          FUN_02132f7c(&DAT_04ddbd40);
          cRam0000000004f9d849 = '\x01';
        }
        if ((uVar11 & 1) == 0) {
          plVar12 = (long *)System_IntPtr__op_Explicit_487833c();
          lVar14 = *plVar12;
        }
        else {
          lVar14 = System_Runtime_InteropServices_GCHandle__GetTarget_476c7dc(uVar11,0);
        }
        lVar10 = **(long **)(lVar10 + 0x38);
        if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_0216b470(lVar10);
        }
        if (lVar14 != 0) {
          lVar13 = thunk_FUN_0216e7a0(lVar14,lVar10);
          if (lVar13 != 0) {
            return lVar13;
          }
                    /* WARNING: Subroutine does not return */
          FUN_021335a4(lVar14,lVar10);
        }
      }
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_022f4104:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

