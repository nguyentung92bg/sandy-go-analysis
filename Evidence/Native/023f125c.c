/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$OnDestroy
void Dino_BusSand_App_UI_HomeStage__OnDestroy (Dino_BusSand_App_UI_HomeStage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$OnDestroy
   void Dino_BusSand_App_UI_HomeStage__OnDestroy (Dino_BusSand_App_UI_HomeStage_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HomeStage__OnDestroy_22f125c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c469 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cb74a8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c469 = 1;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar3 = PTR_DAT_04cb74a8;
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
  if ((uVar4 & 1) != 0) {
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar3;
    }
    uVar10 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar10,param_1,0);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_023f1628;
      UnityEngine_Camera__set_cullingMask_435768c(*(long *)(param_1 + 0x20),0,0);
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_023f1628;
      UnityEngine_Camera__ResetProjectionMatrix_435bf90(*(long *)(param_1 + 0x20),0);
    }
  }
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar3;
  }
  uVar10 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar10,param_1,0);
  puVar2 = PTR_DAT_04cad568;
  if ((uVar4 & 1) == 0) {
    lVar5 = *(long *)puVar3;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b94e == '\0') {
      FUN_02132f7c(PTR_DAT_04cad568);
      cRam0000000004f9b94e = '\x01';
    }
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar2;
    }
    if (**(long **)(lVar5 + 0xb8) != 0) {
      Dino_BusSand_GameAudio__SeaAmbience_23858e4(0,**(long **)(lVar5 + 0xb8),0);
    }
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar3;
    }
    *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 0x10) = 0;
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar3;
  }
  uVar10 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar10,param_1,0);
  if ((uVar4 & 1) != 0) {
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar3;
    }
    puVar6 = (undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18);
    *puVar6 = 0;
    thunk_FUN_02134474(puVar6,0);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
LAB_023f1628:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar10 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x38),0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    UnityEngine_Object__Destroy_43c8114(uVar10,0);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
  if ((uVar4 & 1) != 0) {
    uVar10 = *(undefined8 *)(param_1 + 0x40);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    UnityEngine_Object__Destroy_43c8114(uVar10,0);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
  if ((uVar4 & 1) != 0) {
    uVar10 = *(undefined8 *)(param_1 + 0x48);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    UnityEngine_Object__Destroy_43c8114(uVar10,0);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x50);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
  if ((uVar4 & 1) != 0) {
    uVar10 = *(undefined8 *)(param_1 + 0x50);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    UnityEngine_Object__Destroy_43c8114(uVar10,0);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x58);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
  if ((uVar4 & 1) != 0) {
    uVar10 = *(undefined8 *)(param_1 + 0x58);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    UnityEngine_Object__Destroy_43c8114(uVar10,0);
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    Dino_BusSand_App_UI_HomePuffs__Dispose_22e7078();
  }
  puVar1 = PTR_DAT_04cb6dd8;
  if (*(long *)(param_1 + 0x78) == 0) {
    return;
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x78) + 0x18);
  if (lVar5 == 0) {
    return;
  }
  if ((bRam0000000004f9c47c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6dd8,0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c47c = 1;
  }
  plVar7 = (long *)FUN_02133068(*(undefined8 *)puVar1,2);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar11 = *(long *)(lVar5 + 0x38);
  if ((lVar11 != 0) &&
     (lVar8 = thunk_FUN_0216e7a0(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
LAB_023f56ac:
    uVar10 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar10,0);
  }
  if ((int)plVar7[3] != 0) {
    plVar7[4] = lVar11;
    thunk_FUN_02134474(plVar7 + 4,lVar11);
    lVar11 = *(long *)(lVar5 + 0x40);
    if ((lVar11 != 0) &&
       (lVar8 = thunk_FUN_0216e7a0(lVar11,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
    goto LAB_023f56ac;
    puVar1 = PTR_DAT_04ca9ae8;
    if ((*(uint *)(plVar7 + 3) & 0xfffffffe) != 0) {
      plVar7[5] = lVar11;
      thunk_FUN_02134474(plVar7 + 5,lVar11);
      if (0 < (int)plVar7[3]) {
        uVar4 = 0;
        uVar9 = plVar7[3] & 0xffffffff;
        do {
          if (uVar9 <= uVar4) goto LAB_023f56a8;
          lVar11 = plVar7[uVar4 + 4];
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
          if ((uVar9 & 1) != 0) {
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            UnityEngine_Object__Destroy_43c8114(lVar11,0);
          }
          uVar9 = (ulong)*(uint *)(plVar7 + 3);
          uVar4 = uVar4 + 1;
        } while ((long)uVar4 < (long)(int)*(uint *)(plVar7 + 3));
      }
      uVar10 = *(undefined8 *)(lVar5 + 0xa0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
      if ((uVar4 & 1) != 0) {
        lVar5 = *(long *)(lVar5 + 0xa0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        puVar1 = PTR_DAT_04ca9ae8;
        uVar10 = 0;
        if ((bRam0000000004fa8603 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04ca9ae8,0);
          bRam0000000004fa8603 = 1;
          uVar10 = extraout_x1;
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          uVar10 = extraout_x1_00;
        }
        puVar1 = PTR_DAT_04cf6418;
        if ((bRam0000000004fa8602 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf6418,uVar10);
          FUN_02132f7c(PTR_DAT_04ca9ae8);
          bRam0000000004fa8602 = 1;
        }
        if (*(long *)(*(long *)puVar1 + 0x38) == 0) {
          FUN_0216b4cc();
        }
        uVar10 = 0;
        if (lVar5 != 0) {
          uVar10 = *(undefined8 *)(lVar5 + 0x10);
        }
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (pcRam0000000004fa8680 == (code *)0x0) {
          pcRam0000000004fa8680 = (code *)FUN_02132f40(&UNK_00e39909);
        }
                    /* WARNING: Could not recover jumptable at 0x044c80c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa8680)(0,uVar10);
        return;
      }
      return;
    }
  }
LAB_023f56a8:
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

