/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$MarkTriggered
void Dino_BusSand_App_UI_GuidePanel__MarkTriggered (Dino_BusSand_App_UI_GuidePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$MarkTriggered
   void Dino_BusSand_App_UI_GuidePanel__MarkTriggered (Dino_BusSand_App_UI_GuidePanel_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_GuidePanel__MarkTriggered_22cd0ac(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined4 uStack_34;
  
  puVar5 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c38a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cac498);
    FUN_02132f7c(PTR_DAT_04caa160);
    FUN_02132f7c(PTR_DAT_04cad860);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb1980);
    FUN_02132f7c(PTR_DAT_04cb6b00);
    FUN_02132f7c(PTR_DAT_04cb69d8);
    bRam0000000004f9c38a = 1;
  }
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar5;
  }
  if (*(long *)(*(long *)(lVar6 + 0xb8) + 0x10) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x38) == 0) goto LAB_023cd5a0;
  if (0 < *(int *)(*(long *)(param_1 + 0x38) + 0x10)) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9b894 = '\x01';
    }
    lVar6 = *(long *)puVar5;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar5;
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
    if (((lVar6 == 0) || (*(long *)(param_1 + 0x38) == 0)) ||
       (lVar6 = *(long *)(lVar6 + 0x48), lVar6 == 0)) goto LAB_023cd5a0;
    uVar7 = System_Collections_Generic_List_int___Contains_3a2c3ec
                      (lVar6,*(undefined4 *)(*(long *)(param_1 + 0x38) + 0x10),
                       *(undefined8 *)PTR_DAT_04cad860);
    if ((uVar7 & 1) == 0) {
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b894 == '\0') {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        cRam0000000004f9b894 = '\x01';
      }
      lVar6 = *(long *)puVar5;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar6 = *(long *)puVar5;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
      if (((lVar6 == 0) || (*(long *)(param_1 + 0x38) == 0)) ||
         (lVar6 = *(long *)(lVar6 + 0x48), lVar6 == 0)) goto LAB_023cd5a0;
      lVar11 = *(long *)(lVar6 + 0x10);
      uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x10);
      lVar12 = *(long *)PTR_DAT_04caa160;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar11 == 0) goto LAB_023cd5a0;
      uVar3 = *(uint *)(lVar6 + 0x18);
      if (uVar3 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar3 + 1;
        *(undefined4 *)(lVar11 + (long)(int)uVar3 * 4 + 0x20) = uVar1;
      }
      else {
        System_Collections_Generic_List_int___AddWithResize_3a2c06c
                  (lVar6,uVar1,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar8 = (int *)(*(long *)(param_1 + 0x38) + 0x44);
    if (*piVar8 != 0) {
      uVar9 = System_Int32__ToString_482d750(piVar8,0);
      uVar9 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb1980,uVar9,0);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar5);
      }
      Dino_BusSand_App_Meta_Profile__SetFlag_227375c(uVar9,1,0);
    }
    puVar4 = PTR_DAT_04ca9c20;
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_Profile__MarkDirty_225cc30(0);
    plVar10 = (long *)FUN_02133068(*(undefined8 *)puVar4,2);
    puVar5 = PTR_DAT_04cb69d8;
    if (plVar10 != (long *)0x0) {
      if ((*(long *)PTR_DAT_04cb69d8 != 0) &&
         (lVar6 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cb69d8,*(undefined8 *)(*plVar10 + 0x40)),
         lVar6 == 0)) {
LAB_023cd5a8:
        uVar9 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar9,0);
      }
      if ((int)plVar10[3] == 0) {
LAB_023cd5a4:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      plVar10[4] = *(long *)puVar5;
      thunk_FUN_02134474();
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_023cd5a0;
      uStack_34 = *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x10);
      lVar6 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_34);
      if ((lVar6 != 0) &&
         (lVar11 = thunk_FUN_0216e7a0(lVar6,*(undefined8 *)(*plVar10 + 0x40)), lVar11 == 0))
      goto LAB_023cd5a8;
      puVar4 = PTR_DAT_04cb6b00;
      puVar5 = PTR_DAT_04cac5c0;
      if ((*(uint *)(plVar10 + 3) & 0xfffffffe) == 0) goto LAB_023cd5a4;
      plVar10[5] = lVar6;
      thunk_FUN_02134474(plVar10 + 5,lVar6);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Analytics__Log_216d0c8(*(undefined8 *)puVar4,plVar10,0);
      lVar6 = *(long *)(param_1 + 0x38);
      if (lVar6 != 0) {
        uVar1 = *(undefined4 *)(lVar6 + 0x10);
        uVar2 = *(undefined4 *)(lVar6 + 0x44);
        if (*(int *)(*(long *)PTR_DAT_04cac498 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Meta_GameTracking__TutorialDone_2218e1c(uVar1,uVar2,0);
        puVar5 = PTR_DAT_04caba50;
        if (*(long *)(param_1 + 0x38) != 0) {
          if (*(int *)(*(long *)(param_1 + 0x38) + 0x44) != 0) {
            if (*(int *)(*(long *)PTR_DAT_04caba50 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            if (cRam0000000004f9b88f == '\0') {
              FUN_02132f7c(PTR_DAT_04caba50);
              cRam0000000004f9b88f = '\x01';
            }
            lVar6 = *(long *)puVar5;
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar6 = *(long *)puVar5;
            }
            puVar4 = PTR_DAT_04ca9ae8;
            uVar9 = **(undefined8 **)(lVar6 + 0xb8);
            if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
            }
            uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
            if ((uVar7 & 1) != 0) {
              if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              if (cRam0000000004f9b88f == '\0') {
                FUN_02132f7c(PTR_DAT_04caba50);
                cRam0000000004f9b88f = '\x01';
              }
              lVar6 = *(long *)puVar5;
              if (*(int *)(lVar6 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
                lVar6 = *(long *)puVar5;
              }
              if (**(long **)(lVar6 + 0xb8) == 0) goto LAB_023cd5a0;
              lVar6 = *(long *)(**(long **)(lVar6 + 0xb8) + 0x48);
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
              if ((uVar7 & 1) != 0) {
                if (lVar6 == 0) goto LAB_023cd5a0;
                Dino_BusSand_App_UI_HudPanel__RefreshItems_230991c(lVar6,0);
              }
            }
          }
          return;
        }
      }
    }
  }
LAB_023cd5a0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

