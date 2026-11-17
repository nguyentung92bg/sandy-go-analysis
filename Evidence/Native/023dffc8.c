/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$Dispose
void Dino_BusSand_App_UI_HomeBus__Dispose (Dino_BusSand_App_UI_HomeBus_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$Dispose
   void Dino_BusSand_App_UI_HomeBus__Dispose (Dino_BusSand_App_UI_HomeBus_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HomeBus__Dispose_22dffc8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  
  puVar1 = PTR_DAT_04cb6dd8;
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == 0) {
    return;
  }
  if ((bRam0000000004f9c47c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6dd8,0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c47c = 1;
  }
  plVar3 = (long *)FUN_02133068(*(undefined8 *)puVar1,2);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar7 = *(long *)(lVar2 + 0x38);
  if ((lVar7 != 0) &&
     (lVar4 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
LAB_023f56ac:
    uVar6 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar6,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar7;
    thunk_FUN_02134474(plVar3 + 4,lVar7);
    lVar7 = *(long *)(lVar2 + 0x40);
    if ((lVar7 != 0) &&
       (lVar4 = thunk_FUN_0216e7a0(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
    goto LAB_023f56ac;
    puVar1 = PTR_DAT_04ca9ae8;
    if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
      plVar3[5] = lVar7;
      thunk_FUN_02134474(plVar3 + 5,lVar7);
      if (0 < (int)plVar3[3]) {
        uVar8 = 0;
        uVar5 = plVar3[3] & 0xffffffff;
        do {
          if (uVar5 <= uVar8) goto LAB_023f56a8;
          lVar7 = plVar3[uVar8 + 4];
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
          if ((uVar5 & 1) != 0) {
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            UnityEngine_Object__Destroy_43c8114(lVar7,0);
          }
          uVar5 = (ulong)*(uint *)(plVar3 + 3);
          uVar8 = uVar8 + 1;
        } while ((long)uVar8 < (long)(int)*(uint *)(plVar3 + 3));
      }
      uVar6 = *(undefined8 *)(lVar2 + 0xa0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
      if ((uVar8 & 1) != 0) {
        lVar2 = *(long *)(lVar2 + 0xa0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        puVar1 = PTR_DAT_04ca9ae8;
        uVar6 = 0;
        if ((bRam0000000004fa8603 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04ca9ae8,0);
          bRam0000000004fa8603 = 1;
          uVar6 = extraout_x1;
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          uVar6 = extraout_x1_00;
        }
        puVar1 = PTR_DAT_04cf6418;
        if ((bRam0000000004fa8602 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf6418,uVar6);
          FUN_02132f7c(PTR_DAT_04ca9ae8);
          bRam0000000004fa8602 = 1;
        }
        if (*(long *)(*(long *)puVar1 + 0x38) == 0) {
          FUN_0216b4cc();
        }
        uVar6 = 0;
        if (lVar2 != 0) {
          uVar6 = *(undefined8 *)(lVar2 + 0x10);
        }
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (pcRam0000000004fa8680 == (code *)0x0) {
          pcRam0000000004fa8680 = (code *)FUN_02132f40(&UNK_00e39909);
        }
                    /* WARNING: Could not recover jumptable at 0x044c80c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa8680)(0,uVar6);
        return;
      }
      return;
    }
  }
LAB_023f56a8:
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

